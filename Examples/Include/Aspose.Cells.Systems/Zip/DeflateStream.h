#ifndef _SYSTEM_ZIP_DEFLATESTREAM_H_
#define _SYSTEM_ZIP_DEFLATESTREAM_H_

#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/NotImplementedException.h"
#include "Aspose.Cells.Systems/Zip/ZipOptions.h"
#include "Aspose.Cells.Systems/Zip/ZlibBaseStream.h"
#include "Aspose.Cells.Systems/Zip/CompressionLevel.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class DeflateStream : public Stream {
			public:
				DeflateStream(Aspose::Cells::Systems::IO::StreamPtr stream, CompressionMode mode);
				DeflateStream(Aspose::Cells::Systems::IO::StreamPtr stream, CompressionMode mode, CompressionLevel level);
				DeflateStream(Aspose::Cells::Systems::IO::StreamPtr stream, CompressionMode mode, bool leaveOpen);
				DeflateStream(Aspose::Cells::Systems::IO::StreamPtr stream, CompressionMode mode, CompressionLevel level, bool leaveOpen);
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
				Aspose::Cells::Systems::IO::StreamPtr			_innerStream;
				bool			_disposed;
			};
		}
	}
}
#endif//_SYSTEM_ZIP_DEFLATESTREAM_H_
