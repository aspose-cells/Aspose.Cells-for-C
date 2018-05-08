#ifndef _SYSTEM_IO_NULLSTREAM_H_
#define _SYSTEM_IO_NULLSTREAM_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/IO/Stream.h"
#include "System/TypeDefBString.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API NullStream : public Stream
				{
				private:

				public:
					~NullStream() {}
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

					bool CanRead()
					{
						return true;
					}
					bool CanWrite()
					{
						return true;
					}
					bool CanSeek()
					{
						return true;
					}
					int64_t GetLength()
					{
						return 0L;
					}
					void SetLength(int64_t length)
					{
					}
					int64_t GetPosition()
					{
						return 0L;
					}
					void SetPosition(int64_t position)
					{
					}
					NullStream()
					{
					}
					int Read(intrusive_ptr<BString> buffer, int offset, int count)
					{
						return 0;
					}
					void Write(intrusive_ptr<BString> buffer, int offset, int count)
					{
					}
					int ReadByte()
					{
						return -1;
					}
					void WriteByte(Byte value)
					{
					}
					int64_t Seek(int64_t offset, SeekOrigin origin)
					{
						return 0L;
					}
					void Flush()
					{
					}
				protected:
					void Dispose(bool disposing)
					{
					}
				};

			}
		}
	}
}
#endif//_SYSTEM_IO_NULLSTREAM_H_