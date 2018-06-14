#ifndef _SYSTEM_IO_MEMORYSTREAM_H_
#define _SYSTEM_IO_MEMORYSTREAM_H_

#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/TypeDefBString.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace IO {

				class ASPOSE_CELLS_API MemoryStream : public Stream
				{
				public:
					MemoryStream();
					virtual ~MemoryStream();

					MemoryStream(intrusive_ptr<BString> buffer);
					MemoryStream(int32_t capacity);
					MemoryStream(intrusive_ptr<BString> buffer, bool writable);
					MemoryStream(intrusive_ptr<BString> buffer, int32_t index, int32_t count);
					MemoryStream(intrusive_ptr<BString> buffer, int32_t index, int32_t count, bool writable);
					MemoryStream(intrusive_ptr<BString> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible);

					virtual bool CanRead();
					virtual bool CanWrite();
					virtual bool CanSeek();

					virtual int32_t GetCapacity();
					virtual void SetCapacity(int32_t capacity);

					virtual int64_t GetLength();
					virtual void SetLength(int64_t length);

					virtual int64_t GetPosition();
					virtual void SetPosition(int64_t position);

					virtual intrusive_ptr<BString> GetBuffer();

					virtual int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);
					virtual void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);

					/* for writing xls write performance*/
					virtual void WriteShort(Int16 value);

					virtual int32_t ReadByte();
					virtual void WriteByte(uint8_t value);

					virtual int64_t Seek(int64_t offset, SeekOrigin origin);
					virtual void Flush();
					virtual void Close();
					virtual void Dispose();

					virtual intrusive_ptr<BString> ToArray();

					virtual void WriteTo(StreamPtr stream);

					int32_t InternalReadInt32();
					int32_t InternalGetPosition();
					int32_t InternalEmulateRead(int32_t count);
					intrusive_ptr<BString> InternalGetBuffer();
					int32_t InternalGetBufferLength();

				private:
					MemoryStream(MemoryStream& stream);
					bool EnsureCapacity(int value);

				private:
					intrusive_ptr<BString>	_buffer;
					int32_t		_origin;
					int32_t		_position;
					int32_t		_length;
					int32_t		_capacity;
					bool		_expandable;
					bool		_writable;
					bool		_exposable;
					bool		_isOpen;

				};
				typedef intrusive_ptr<MemoryStream> MemoryStreamPtr;

			}	// namespace IO
		}	// namespace System
	}
}
#endif	// _SYSTEM_IO_MEMORYSTREAM_H_