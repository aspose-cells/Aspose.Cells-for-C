#ifndef _SYSTEM_ZIP_OFFSETSTREAM_H_
#define _SYSTEM_ZIP_OFFSETSTREAM_H_

#include "System/IO/Stream.h"
#include "System/NotImplementedException.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class ASPOSE_CELLS_API OffsetStream : public Stream
			{
			public:
				OffsetStream(StreamPtr s) {
					_originalPosition = s->GetPosition();
					_innerStream = s;
				}
				virtual ~OffsetStream() {
				}

				bool CanRead() { return _innerStream->CanRead(); }
				bool CanWrite() { return false; }
				bool CanSeek() { return _innerStream->CanSeek(); }

				int64_t GetLength() { return _innerStream->GetLength(); }
				void SetLength(int64_t length) { throw NotImplementedException(); }

				int64_t GetPosition() { return _innerStream->GetPosition() - _originalPosition; }
				void SetPosition(int64_t position) { _innerStream->SetPosition(_originalPosition + position); }

				int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count) {
					return _innerStream->Read(buffer, offset, count);
				}
				void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count) { throw NotImplementedException(); }

				int32_t ReadByte() { throw NotImplementedException(); }
				void WriteByte(uint8_t value) { throw NotImplementedException(); }

				int64_t Seek(int64_t offset, SeekOrigin origin) {
					return _innerStream->Seek(_originalPosition + offset, origin) - _originalPosition;
				}

				void Flush() { _innerStream->Flush(); }

				void Close() { _innerStream->Close(); }
				void Dispose() { Close(); }

			private:
				int64_t		_originalPosition;
				StreamPtr		_innerStream;
			};
		}
	}
}
#endif//_SYSTEM_ZIP_OFFSETSTREAM_H_
