#ifndef _SYSTEM_ZIP_INFLATE_H_
#define _SYSTEM_ZIP_INFLATE_H_

#include "System/Zip/ZipOptions.h"
#include "System/Zip/InfTree.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class ZlibCodec;
			class InflateCodes;

			class InternalInflateConstants
			{
				// And'ing with mask[n] masks the lower n bits
			public:
				static const int32_t InflateMask[];
			};

			class InflateBlocks : public reference_counter {
			public:
				InflateBlocks(ZlibCodec* codec, ObjectPtr checkfn, int32_t w);
				virtual ~InflateBlocks();

				uint32_t Reset();
				int32_t Process(int32_t r);
				void Free();
				void SetDictionary(uint8_t* d, int32_t start, int32_t n);
				int32_t SyncPoint();
				int32_t Flush(int32_t r);

			private:
				static const int32_t MANY = 1440;
				static const int32_t border[];
				enum InflateBlockMode
				{
					InflateBlockMode_TYPE = 0,                     // get type bits (3, including end bit)
					InflateBlockMode_LENS = 1,                     // get lengths for stored
					InflateBlockMode_STORED = 2,                     // processing stored block
					InflateBlockMode_TABLE = 3,                     // get table lengths
					InflateBlockMode_BTREE = 4,                     // get bit lengths tree for a dynamic block
					InflateBlockMode_DTREE = 5,                     // get length, distance trees for a dynamic block
					InflateBlockMode_CODES = 6,                     // processing fixed or dynamic block
					InflateBlockMode_DRY = 7,                     // output remaining window bytes
					InflateBlockMode_DONE = 8,                     // finished last block, done
					InflateBlockMode_BAD = 9,                     // ot a data error--stuck here
				};
				InflateBlockMode mode;                    // current inflate_block mode

				int32_t left;                                // if STORED, bytes left to copy

				int32_t table;                               // table lengths (14 bits)
				int32_t index;                               // index into blens (or border)
				int32_t* blens;                             // bit lengths of codes
				int32_t	 blens_len;
				int32_t* bb;                   // bit length tree depth
				int32_t* tb;                   // bit length decoding tree

				intrusive_ptr<InflateCodes> codes; // if CODES, current state

				int32_t last;                                // true if this block is the last block

			public:
				ZlibCodec* _codec;                        // pointer back to this zlib stream

				// mode independent information
				int32_t bitk;                                // bits in bit buffer
				int32_t bitb;                                // bit buffer
				int32_t* hufts;                             // single malloc for tree space
				uint8_t* window;                           // sliding window
				int32_t end;                                 // one byte after sliding window
				int32_t readAt;                              // window read pointer
				int32_t writeAt;                             // window write pointer
				Object* checkfn;						// check function
				uint32_t check;                              // check on output

				intrusive_ptr<InfTree> inftree;
			};

			class InflateCodes : public reference_counter {
			private:
				static const int32_t START = 0; // x: set up for LEN
				static const int32_t LEN = 1; // i: get length/literal/eob next
				static const int32_t LENEXT = 2; // i: getting length extra (have base)
				static const int32_t DIST = 3; // i: get distance next
				static const int32_t DISTEXT = 4; // i: getting distance extra
				static const int32_t COPY = 5; // o: copying bytes in window, waiting for space
				static const int32_t LIT = 6; // o: got literal, waiting for output space
				static const int32_t WASH = 7; // o: got eob, possibly still output waiting
				static const int32_t END = 8; // x: got eob and all data flushed
				static const int32_t BADCODE = 9; // x: got error

			public:
				int32_t mode;        // current inflate_codes mode
				// mode dependent information
				int32_t len;
				int32_t* tree;      // pointer into tree
				int32_t tree_index = 0;
				int32_t need;        // bits needed
				int32_t lit;
				// if EXT or COPY, where and how much
				int32_t bitsToGet;   // bits to get for extra
				int32_t dist;        // distance back to copy from

				uint8_t lbits;      // ltree bits decoded per branch
				uint8_t dbits;      // dtree bits decoder per branch
				int32_t* ltree;     // literal/length/eob tree
				int32_t ltree_index; // literal/length/eob tree
				int32_t* dtree;     // distance tree
				int32_t dtree_index; // distance tree

			public:
				InflateCodes();
				virtual ~InflateCodes();

				void Init(int32_t bl, int32_t bd, int32_t* tl, int32_t tl_index, int32_t* td, int32_t td_index);
				int32_t Process(intrusive_ptr<InflateBlocks> blocks, int32_t r);
				int32_t InflateFast(int32_t bl, int32_t bd, int32_t* tl, int32_t tl_index, int32_t* td, int32_t td_index, intrusive_ptr<InflateBlocks> s, ZlibCodec* z);
			};

			class InflateManager : public Object
			{
			private:
				// preset dictionary flag in zlib header
				static const int32_t PRESET_DICT = 0x20;
				static const int32_t Z_DEFLATED = 8;
				static const uint8_t mark[];

				enum InflateManagerMode
				{
					InflateManagerMode_METHOD = 0,  // waiting for method byte
					InflateManagerMode_FLAG = 1,  // waiting for flag byte
					InflateManagerMode_DICT4 = 2,  // four dictionary check bytes to go
					InflateManagerMode_DICT3 = 3,  // three dictionary check bytes to go
					InflateManagerMode_DICT2 = 4,  // two dictionary check bytes to go
					InflateManagerMode_DICT1 = 5,  // one dictionary check byte to go
					InflateManagerMode_DICT0 = 6,  // waiting for inflateSetDictionary
					InflateManagerMode_BLOCKS = 7,  // decompressing blocks
					InflateManagerMode_CHECK4 = 8,  // four check bytes to go
					InflateManagerMode_CHECK3 = 9,  // three check bytes to go
					InflateManagerMode_CHECK2 = 10, // two check bytes to go
					InflateManagerMode_CHECK1 = 11, // one check byte to go
					InflateManagerMode_DONE = 12, // finished check, done
					InflateManagerMode_BAD = 13, // got an error--stay here
				};

				InflateManagerMode mode; // current inflate mode
				bool _handleRfc1950HeaderBytes = true;

			public:
				ZlibCodec* _codec; // pointer back to this zlib stream

				// mode dependent information
				int32_t method; // if FLAGS, method byte

				// if CHECK, check values to compare
				uint32_t computedCheck; // computed check value
				uint32_t expectedCheck; // stream check value

				// if BAD, inflateSync's marker bytes count
				int32_t marker;
				int32_t wbits; // log2(window size)  (8..15, defaults to 15)

				intrusive_ptr<InflateBlocks> blocks; // current inflate_blocks state

			public:
				InflateManager();
				InflateManager(bool expectRfc1950HeaderBytes);
				virtual ~InflateManager();

				bool GetHandleRfc1950HeaderBytes() { return _handleRfc1950HeaderBytes; }
				void SetHandleRfc1950HeaderBytes(bool value) { _handleRfc1950HeaderBytes = value; }
				int32_t Reset();
				int32_t End();
				int32_t Initialize(ZlibCodec* codec, int32_t w);
				int32_t Inflate(FlushType flush);
				int32_t SetDictionary(intrusive_ptr<BString> dictionary);
				int32_t Sync();
				int32_t SyncPoint(ZlibCodec* z);

			};

		}
	}
}
#endif//_SYSTEM_ZIP_INFLATE_H_
