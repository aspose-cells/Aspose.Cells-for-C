#ifndef _SYSTEM_IO_FILESTREAM_H_
#define _SYSTEM_IO_FILESTREAM_H_

#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/IO/FileMode.h"
#include "System/IO/FileAccess.h"
#include "System/IO/FileShare.h"
#include "System/IO/FileOptions.h"
#include "System/TypeDefBString.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API FileStream : public Stream
				{
				public:
					FileStream(StringPtr path, FileMode mode);
					FileStream(StringPtr path, FileMode mode, FileAccess access);
					FileStream(StringPtr path, FileMode mode, FileAccess access, FileShare share);
					FileStream(StringPtr path, FileMode mode, FileAccess access, FileShare share, int32_t bufferSize);
					FileStream(StringPtr path, FileMode mode, FileAccess access, FileShare share, int32_t bufferSize, FileOptions options, StringPtr msgPath, bool bFromProxy);
					FileStream(StringPtr path, FileMode mode, FileAccess access, FileShare share, int32_t bufferSize, FileOptions options, StringPtr msgPath, bool bFromProxy, bool useLongPath, bool checkHost);

					virtual ~FileStream();

					virtual bool CanRead();
					virtual bool CanWrite();
					virtual bool CanSeek();

					StringPtr GetName();

					virtual int64_t GetLength();
					virtual void SetLength(int64_t length);

					virtual int64_t GetPosition();
					virtual void SetPosition(int64_t position);

					virtual int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);
					virtual void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);

					virtual int32_t ReadByte();
					virtual void WriteByte(uint8_t value);

					/* for writing xls write performance*/
					virtual void WriteShort(Int16 value);

					virtual int64_t Seek(int64_t offset, SeekOrigin origin);
					virtual void Flush();
					virtual void Close();
					virtual void Dispose();

				private:
					FileStream();
					FileStream(FileStream& stream);

					void Init(StringPtr path, FileMode mode, FileAccess access, FileShare share, int32_t bufferSize);

					void FlushRead();
					void FlushWrite();

					int32_t ReadCore(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);
					int64_t SeekCore(int64_t offset, SeekOrigin origin);
					void WriteCore(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);
					void SetLengthCore(int64_t value);

				private:
					intrusive_ptr<BString>	_buffer;
					int32_t					_bufferSize;
					StringPtr				_fileName;

					bool		_canRead;
					bool		_canWrite;
					bool		_canSeek;
					int32_t		_readPos;
					int32_t		_readLen;
					int32_t		_writePos;
					int64_t		_pos;
					int64_t		_appendStart;
					FILE*		_file;

				};
				typedef intrusive_ptr<FileStream> FileStreamPtr;

			}	// namespace IO
		}	// namespace System
	}
}
#endif	// _SYSTEM_IO_FILESTREAM_H_