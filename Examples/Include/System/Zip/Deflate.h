#ifndef _SYSTEM_ZIP_DEFLATE_H_
#define _SYSTEM_ZIP_DEFLATE_H_

#include "System/Zip/ZipOptions.h"
#include "System/Zip/Zlib.h"
#include "System/Zip/Tree.h"
#include "System/Zip/CompressionLevel.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			enum BlockState
			{
				BlockState_NeedMore = 0,       // block not completed, need more input or more output
				BlockState_BlockDone,          // block flush performed
				BlockState_FinishStarted,              // finish started, need only more output at next deflate
				BlockState_FinishDone          // finish done, accept no more input or output
			};

			enum DeflateFlavor
			{
				DeflateFlavor_Store,
				DeflateFlavor_Fast,
				DeflateFlavor_Slow
			};


			class ZlibCodec;
			class DeflateManager : public Object
			{
			private:
				class Config : public reference_counter
				{
				public:
					// Use a faster search when the previous match is longer than this
					int32_t GoodLength; // reduce lazy search above this match length

					// Attempt to find a better match only when the current match is
					// strictly smaller than this value. This mechanism is used only for
					// compression levels >= 4.  For levels 1,2,3: MaxLazy is actually
					// MaxInsertLength. (See DeflateFast)
					int32_t MaxLazy;    // do not perform lazy search above this match length

					int32_t NiceLength; // quit search above this match length

					// To speed up deflation, hash chains are never searched beyond this
					// length.  A higher limit improves compression ratio but degrades the speed.

					int32_t MaxChainLength;

					DeflateFlavor Flavor;

				private:
					Config(int32_t goodLength, int32_t maxLazy, int32_t niceLength, int32_t maxChainLength, DeflateFlavor flavor);

				public:
					static const intrusive_ptr<Config> Lookup(CompressionLevel level);

				private:
					static const intrusive_ptr<Config> Table[];
				};
					

				// preset dictionary flag in zlib header
				static const int32_t MEM_LEVEL_MAX = 9;
				static const int32_t MEM_LEVEL_DEFAULT = 8;
					
				static const int32_t PRESET_DICT = 0x20;

				static const int32_t INIT_STATE = 42;
				static const int32_t BUSY_STATE = 113;
				static const int32_t FINISH_STATE = 666;

				// The deflate compression method
				static const int32_t Z_DEFLATED = 8;
				static const int32_t STORED_BLOCK = 0;
				static const int32_t STATIC_TREES = 1;
				static const int32_t DYN_TREES = 2;
				// The three kinds of block type
				static const int32_t Z_BINARY = 0;
				static const int32_t Z_ASCII = 1;
				static const int32_t Z_UNKNOWN = 2;
				static const int32_t Buf_size = 8 * 2;
				static const int32_t MIN_MATCH = 3;
				static const int32_t MAX_MATCH = 258;
				static const int32_t MIN_LOOKAHEAD = (MAX_MATCH + MIN_MATCH + 1);
				static const int32_t HEAP_SIZE = (2 * InternalConstants::L_CODES + 1);
				static const int32_t END_BLOCK = 256;

			public:
				DeflateManager();
				virtual ~DeflateManager();

				void _InitializeBlocks();
				void pqdownheap(short* tree, int k);
				static bool _IsSmaller(short* tree, int n, int m, int8_t* depth);
				void scan_tree(short* tree, int max_code);
				int build_bl_tree();
				void send_all_trees(int lcodes, int dcodes, int blcodes);
				void send_tree(short* tree, int max_code);
				void send_code(int c, const short* tree);
				void send_bits(int value, int length);
				void _tr_align();
				bool _tr_tally(int dist, int lc);
				void send_compressed_block(const short* ltree, const short* dtree);
				void set_data_type();
				void bi_flush();
				void bi_windup();
				void copy_block(int buf, int len, bool header);
				void flush_block_only(bool eof);
				BlockState DeflateNone(FlushType flush);
				void _tr_stored_block(int buf, int stored_len, bool eof);
				void _tr_flush_block(int buf, int stored_len, bool eof);
				BlockState DeflateFast(FlushType flush);
				BlockState DeflateSlow(FlushType flush);
				int longest_match(int cur_match);

				int Initialize(ZlibCodec* codec, CompressionLevel level);
				int Initialize(ZlibCodec* codec, CompressionLevel level, int bits);
				int Initialize(ZlibCodec* codec, CompressionLevel level, int bits, CompressionStrategy compressionStrategy);
				int Initialize(ZlibCodec* codec, CompressionLevel level, int windowBits, int memLevel, CompressionStrategy strategy);
				void Reset();
				int End();
				int SetParams(CompressionLevel level, CompressionStrategy strategy);
				int Deflate(FlushType flush);

			private:
				void _InitializeLazyMatch();
				void _InitializeTreeData();
				void put_bytes(intrusive_ptr<BString> p, int start, int len);
				void _fillWindow();
				void SetDeflater();

			public:
				typedef BlockState(DeflateManager::*CompressFunc)(FlushType);
				CompressFunc	DeflateFunction;
				ZlibCodec*		_codec; // the zlib encoder/decoder
				int32_t			status; // as the name implies
				intrusive_ptr<BString>		pending;   // output still pending - waiting to be compressed
				int32_t			nextPending;  // index of next pending byte to output to the stream
				int32_t			pendingCount; // number of bytes in the pending buffer

				int8_t			data_type;  // UNKNOWN, BINARY or ASCII
				int32_t			last_flush;   // value of flush param for previous deflate call

				int32_t			w_size;       // LZ77 window size (32K by default)
				int32_t			w_bits;       // log2(w_size)  (8..16)
				int32_t			w_mask;       // w_size - 1

				//intrusive_ptr<BString> dictionary;
				intrusive_ptr<BString>		window;

				// Sliding window. Input bytes are read into the second half of the window,
				// and move to the first half later to keep a dictionary of at least wSize
				// bytes. With this organization, matches are limited to a distance of
				// wSize-MAX_MATCH bytes, but this ensures that IO is always
				// performed with a length multiple of the block size.
				//
				// To do: use the user input buffer as sliding window.

				int32_t			window_size;
				// Actual size of window: 2*wSize, except when the user input buffer
				// is directly used as sliding window.

				short*			prev;
				// Link to older string with same hash index. To limit the size of this
				// array to 64K, this link is maintained only for the last 32K strings.
				// An index in this array is thus a window index modulo 32K.

				short*			head;  // Heads of the hash chains or NIL.

				int32_t ins_h;     // hash index of string to be inserted
				int32_t hash_size; // number of elements in hash table
				int32_t hash_bits; // log2(hash_size)
				int32_t hash_mask; // hash_size-1

				// Number of bits by which ins_h must be shifted at each input
				// step. It must be such that after MIN_MATCH steps, the oldest
				// byte no longer takes part in the hash key, that is:
				// hash_shift * MIN_MATCH >= hash_bits
				int32_t hash_shift;

				// Window position at the beginning of the current output block. Gets
				// negative when the window is moved backwards.

				int32_t block_start;

				const Config* config;
				int32_t match_length;    // length of best match
				int32_t prev_match;      // previous match
				int32_t match_available; // set if previous match exists
				int32_t strstart;        // start of string to insert into.....????
				int32_t match_start;     // start of matching string
				int32_t lookahead;       // number of valid bytes ahead in window

				// Length of the best match at previous step. Matches not greater than this
				// are discarded. This is used in the lazy match evaluation.
				int32_t prev_length;

				// Insert new strings in the hash table only if the match length is not
				// greater than this length. This saves time but degrades compression.
				// max_insert_length is used only for compression levels <= 3.

				CompressionLevel compressionLevel; // compression level (1..9)
				CompressionStrategy compressionStrategy; // favor or force Huffman coding

				short* dyn_ltree;         // literal and length tree
				short* dyn_dtree;         // distance tree
				short* bl_tree;           // Huffman tree for bit lengths

				Tree* treeLiterals;  // desc for literal tree
				Tree* treeDistances;  // desc for distance tree
				Tree* treeBitLengths; // desc for bit length tree

				// number of codes at each bit length for an optimal tree
				short* bl_count;

				// heap used to build the Huffman trees
				int32_t* heap;

				int32_t heap_len;              // number of elements in the heap
				int32_t heap_max;              // element of largest frequency

				// The sons of heap[n] are heap[2*n] and heap[2*n+1]. heap[0] is not used.
				// The same heap array is used to build all trees.

				// Depth of each subtree used as tie breaker for trees of equal frequency
				int8_t* depth;

				int32_t _lengthOffset;                 // index for literals or lengths


				// Size of match buffer for literals/lengths.  There are 4 reasons for
				// limiting lit_bufsize to 64K:
				//   - frequencies can be kept in 16 bit counters
				//   - if compression is not successful for the first block, all input
				//     data is still in the window so we can still emit a stored block even
				//     when input comes from standard input.  (This can also be done for
				//     all blocks if lit_bufsize is not greater than 32K.)
				//   - if compression is not successful for a file smaller than 64K, we can
				//     even emit a stored file instead of a stored block (saving 5 bytes).
				//     This is applicable only for zip (not gzip or zlib).
				//   - creating new Huffman trees less frequently may not provide fast
				//     adaptation to changes in the input data statistics. (Take for
				//     example a binary file with poorly compressible code followed by
				//     a highly compressible string table.) Smaller buffer sizes give
				//     fast adaptation but have of course the overhead of transmitting
				//     trees more frequently.

				int32_t lit_bufsize;

				int32_t last_lit;     // running index in l_buf

				// Buffer for distances. To simplify the code, d_buf and l_buf have
				// the same number of elements. To use different lengths, an extra flag
				// array would be necessary.

				int32_t _distanceOffset;        // index into pending; points to distance data??

				int32_t opt_len;      // bit length of current block with optimal trees
				int32_t static_len;   // bit length of current block with static trees
				int32_t matches;      // number of string matches in current block
				int32_t last_eob_len; // bit length of EOB code for last block

				// Output buffer. bits are inserted starting at the bottom (least
				// significant bits).
				short bi_buf;

				// Number of valid bits in bi_buf.  All bits above the last valid bit
				// are always zero.
				int32_t bi_valid;
				bool Rfc1950BytesEmitted;
				bool _WantRfc1950HeaderBytes;
					
			};

		}
	}
}
#endif//_SYSTEM_ZIP_DEFLATE_H_
