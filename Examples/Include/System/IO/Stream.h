#ifndef _SYSTEM_IO_STREAM_H_
#define _SYSTEM_IO_STREAM_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/IDisposable.h"
#include "System/String.h"
#include "System/IO/SeekOrigin.h"
#include "System/TypeDefBString.h"
#include "System/NotSupportedException.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace IO {

				class ASPOSE_CELLS_API Stream : public Object, public IDisposable
				{
				public:
					virtual ~Stream() {}
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

					virtual bool CanRead() = 0;
					virtual bool CanWrite() = 0;
					virtual bool CanSeek() = 0;

					virtual int64_t GetLength() = 0;
					virtual void SetLength(int64_t length) = 0;

					virtual int64_t GetPosition() = 0;
					virtual void SetPosition(int64_t position) = 0;

					virtual int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count) = 0;
					virtual void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count) = 0;

					virtual void WriteShort(Int16 value) {
						throw NotSupportedException("Not Supported");
					}

					virtual Int32 ReadByte();
					virtual void WriteByte(Byte value);

					virtual int64_t Seek(int64_t offset, SeekOrigin origin) = 0;
					virtual void Flush() = 0;

					virtual void Close();
					void Dispose();
					static intrusive_ptr<Stream> Null;

				protected:
					virtual void Dispose(bool disposing);

					
				};
				typedef intrusive_ptr<Stream> StreamPtr;

			}	// namespace IO
		}	// namespace System
	}
}
#endif	// _SYSTEM_IO_STREAM_H_
