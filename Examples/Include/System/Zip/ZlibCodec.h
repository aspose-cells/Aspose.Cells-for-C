#ifndef _SYSTEM_ZIP_ZLIBCODEC_H_
#define _SYSTEM_ZIP_ZLIBCODEC_H_

#include "System/String.h"
#include "System/Zip/ZipOptions.h"
#include "System/IO/Stream.h"
#include "System/Zip/CompressionLevel.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class InflateManager;
			class DeflateManager;

			class ZlibCodec : public reference_counter {
			public:
				uint8_t*	InputBuffer;
				int32_t			NextIn;
				int32_t			AvailableBytesIn;
				int64_t		TotalBytesIn;
				uint8_t*	OutputBuffer;
				int32_t			NextOut;
				int32_t			AvailableBytesOut;
				int64_t		TotalBytesOut;
				intrusive_ptr<DeflateManager> dstate;
				intrusive_ptr<InflateManager> istate;
				StringPtr	Message;
				uint32_t	_Adler32;
				CompressionLevel CompressLevel;
				int32_t WindowBits;
				CompressionStrategy Strategy;

			public:
				ZlibCodec();
				ZlibCodec(CompressionMode mode);
				virtual ~ZlibCodec();

				int32_t GetAdler32() { return (int32_t)_Adler32; }
				int32_t InitializeInflate();
				int32_t InitializeInflate(bool expectRfc1950Header);
				int32_t InitializeInflate(int32_t windowBits);
				int32_t InitializeInflate(int32_t windowBits, bool expectRfc1950Header);
				int32_t Inflate(FlushType flush);
				int32_t EndInflate();
				int32_t SyncInflate();

				int32_t InitializeDeflate();
				int32_t InitializeDeflate(CompressionLevel level, bool wantRfc1950Header);
				int32_t Deflate(FlushType flush);
				int32_t EndDeflate();
				void flush_pending();
				int32_t read_buf(intrusive_ptr<BString> buf, int32_t start, int32_t size);

			private:
				int32_t _InternalInitializeDeflate(bool wantRfc1950Header);

			};

		}
	}
}
#endif//_SYSTEM_ZIP_ZLIBCODEC_H_
