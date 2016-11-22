#ifndef _SYSTEM_ZIP_CRC32_H_
#define _SYSTEM_ZIP_CRC32_H_

#include "System/IO/Stream.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class CRC32 : public reference_counter {
			public:
				CRC32();
				CRC32(bool reverseBits);
				CRC32(int32_t polynomial, bool reverseBits);
				virtual ~CRC32();

				int64_t GetTotalBytesRead() { return _TotalBytesRead; }
				int32_t GetCrc32Result() { return (int32_t)(~_register); }
				int32_t GetCrc32(StreamPtr input);
				int32_t GetCrc32AndCopy(StreamPtr input, StreamPtr output);
				int32_t ComputeCrc32(int32_t W, uint8_t B);
				void SlurpBlock(intrusive_ptr<BString> block, int32_t offset, int32_t count);
				void UpdateCRC(uint8_t b);
				void UpdateCRC(uint8_t b, int32_t n);
				void Combine(int32_t crc, int32_t length);
				void Reset();

			private:
				void GenerateLookupTable();
				static uint32_t ReverseBits(uint32_t data);
				static uint8_t ReverseBits(uint8_t data);
				int32_t _InternalComputeCrc32(UInt32 W, uint8_t B);
				uint32_t gf2_matrix_times(uint32_t matrix[], uint32_t vec);
				void gf2_matrix_square(uint32_t square[], uint32_t mat[]);

			public:
				int64_t			_TotalBytesRead;

			private:
				uint32_t		_dwPolynomial;
				bool			_reverseBits;
				uint32_t		_crc32Table[256];
				const int32_t	BUFFER_SIZE = 8192;
				uint32_t		_register;
			};
		}
	}
}
#endif//_SYSTEM_ZIP_CRC32_H_
