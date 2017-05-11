#ifndef _SYSTEM_ZIP_ZLIB_H_
#define _SYSTEM_ZIP_ZLIB_H_

#include "System/IO/Stream.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class SharedUtils {
			public:
				static int32_t URShift(int32_t number, int32_t bits);
			};

			class Adler
			{
			private:
				// largest prime smaller than 65536
				static const uint32_t BASE = 65521;
				// NMAX is the largest n such that 255n(n+1)/2 + (n+1)(BASE-1) <= 2^32-1
				static const int32_t NMAX = 5552;

			public:
				static uint32_t Adler32(uint32_t adler, uint8_t* buf, int index, int len);
			};

			class ZlibConstants
			{
			public:
				/// <summary>
				/// The maximum number of window bits for the Deflate algorithm.
				/// </summary>
				static const int WindowBitsMax = 15; // 32K LZ77 window

				/// <summary>
				/// The default number of window bits for the Deflate algorithm.
				/// </summary>
				static const int WindowBitsDefault = WindowBitsMax;

				/// <summary>
				/// indicates everything is A-OK
				/// </summary>
				static const int Z_OK = 0;

				/// <summary>
				/// Indicates that the last operation reached the end of the stream.
				/// </summary>
				static const int Z_STREAM_END = 1;

				/// <summary>
				/// The operation ended in need of a dictionary. 
				/// </summary>
				static const int Z_NEED_DICT = 2;

				/// <summary>
				/// There was an error with the stream - not enough data, not open and readable, etc.
				/// </summary>
				static const int Z_STREAM_ERROR = -2;

				/// <summary>
				/// There was an error with the data - not enough data, bad data, etc.
				/// </summary>
				static const int Z_DATA_ERROR = -3;

				/// <summary>
				/// There was an error with the working buffer.
				/// </summary>
				static const int Z_BUF_ERROR = -5;

				/// <summary>
				/// The size of the working buffer used in the ZlibCodec class. Defaults to 8192 bytes.
				/// </summary>
				static const int WorkingBufferSizeDefault = 16384;
				/// <summary>
				/// The minimum size of the working buffer used in the ZlibCodec class.  Currently it is 128 bytes.
				/// </summary>
				static const int WorkingBufferSizeMin = 1024;
			};

			class InternalConstants
			{
			public:
				static const int MAX_BITS = 15;
				static const int BL_CODES = 19;
				static const int D_CODES = 30;
				static const int LITERALS = 256;
				static const int LENGTH_CODES = 29;
				static const int L_CODES = (LITERALS + 1 + LENGTH_CODES);

				// Bit length codes must not exceed MAX_BL_BITS bits
				static const int MAX_BL_BITS = 7;

				// repeat previous bit length 3-6 times (2 bits of repeat count)
				static const int REP_3_6 = 16;

				// repeat a zero length 3-10 times  (3 bits of repeat count)
				static const int REPZ_3_10 = 17;

				// repeat a zero length 11-138 times  (7 bits of repeat count)
				static const int REPZ_11_138 = 18;
			};

			class StaticTree : public reference_counter
			{
			public:
				static const short lengthAndLiteralsTreeCodes[];
				static const short distTreeCodes[];

				static const intrusive_ptr<StaticTree> Literals;
				static const intrusive_ptr<StaticTree> Distances;
				static const intrusive_ptr<StaticTree> BitLengths;

				short*	treeCodes; // static tree or null
				int*	extraBits;   // extra bits for each code or null
				int		extraBase;     // base index for extra_bits
				int		elems;         // max number of elements in the tree
				int		maxLength;     // max bit length for the codes

			private:
				StaticTree(const short* treeCodes, const int* extraBits, const int extraBase, const int elems, const int maxLength);
			};
		}
	}
}
#endif//_SYSTEM_ZIP_ZLIB_H_
