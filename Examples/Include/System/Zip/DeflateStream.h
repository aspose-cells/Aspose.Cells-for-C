#ifndef _SYSTEM_ZIP_DEFLATESTREAM_H_
#define _SYSTEM_ZIP_DEFLATESTREAM_H_

#include "System/IO/Stream.h"
#include "System/NotImplementedException.h"
#include "System/Zip/ZipOptions.h"
#include "System/Zip/ZlibBaseStream.h"
#include "System/Zip/CompressionLevel.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class DeflateStream : public Stream {
			public:
				DeflateStream(StreamPtr stream, CompressionMode mode);
				DeflateStream(StreamPtr stream, CompressionMode mode, CompressionLevel level);
				DeflateStream(StreamPtr stream, CompressionMode mode, bool leaveOpen);
				DeflateStream(StreamPtr stream, CompressionMode mode, CompressionLevel level, bool leaveOpen);
				virtual ~DeflateStream();

				FlushType GetFlushMode() { return _baseStream->_flushMode; }
				void SetFlushMode(FlushType flushType);
				int32_t GetBufferSize() { return _baseStream->_bufferSize; }
				void SetBufferSize(int32_t size);
				CompressionStrategy GetStrategy() { return _baseStream->Strategy; }
				void SetStrategy(CompressionStrategy strategy);
				int64_t GetTotalIn() { return _baseStream->_z->TotalBytesIn; }
				int64_t GetTotalOut() { return _baseStream->_z->TotalBytesOut; }

				void Dispose(bool disposing);
				bool CanRead();
				bool CanWrite();
				bool CanSeek() { return false; }
				void Flush();
				int64_t GetLength() { throw NotImplementedException(); }
				void SetLength(int64_t length) { throw NotImplementedException(); }
				int64_t GetPosition();
				void SetPosition(int64_t position) { throw NotImplementedException(); }

				int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);
				int64_t Seek(int64_t offset, SeekOrigin origin) { throw NotImplementedException(); }
				void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);

				int32_t ReadByte() { throw NotImplementedException(); }
				void WriteByte(uint8_t value) { throw NotImplementedException(); }

			private:
				intrusive_ptr<ZlibBaseStream>	_baseStream;
				StreamPtr			_innerStream;
				bool			_disposed;
			};
		}
	}
}
#endif//_SYSTEM_ZIP_DEFLATESTREAM_H_
