#ifndef _SYSTEM_IO_STREAMWRITER_H_
#define _SYSTEM_IO_STREAMWRITER_H_

#include "System/Object.h"
#include "System/Char.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Text/Encoding.h"
#include "System/Text/Decoder.h"
#include "System/IO/TextWriter.h"
#include "System/IO/Stream.h"
#include "System/TypeDefBString.h"
#include "windows.h"
using namespace Aspose::Cells::System::Text;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API StreamWriter : public TextWriter
				{
					public:
						static const Int32 DefaultBufferSize;

					public:
						StreamWriter(StreamPtr stream);
						virtual ~StreamWriter();

						StreamWriter(StreamPtr stream, EncodingPtr encoding);
						StreamWriter(StreamPtr stream, EncodingPtr encoding, Int32 bufferSize);
						StreamWriter(StreamPtr stream, EncodingPtr encoding, Int32 bufferSize, bool leaveOpen);
						StreamWriter(StringPtr path);
						StreamWriter(StringPtr path, bool append);
						StreamWriter(StringPtr path, bool append, EncodingPtr encoding);
						StreamWriter(StringPtr path, bool append, EncodingPtr encoding, Int32 bufferSize);
						StreamWriter(StringPtr path, bool append, EncodingPtr encoding, Int32 bufferSize, bool checkHost);
						
						virtual void Close();
						virtual void Flush();
						virtual void Write(Char value);

						virtual void Write(Char* str);
						virtual void Write(Char* str, Int32 index, Int32 count);
						virtual void Write(String* wstr);

						virtual void Write(intrusive_ptr<CString> buffer);
						virtual void Write(intrusive_ptr<CString> buffer, Int32 index, Int32 count);
						virtual void Write(StringPtr value);
						virtual void Write(ObjectPtr value);
						virtual void Write(Int64 value);
						StreamPtr GetBaseStream() { return _stream; }

					protected:
						void Dispose(bool disposing);

					private:
						static StreamPtr CreateFile(StringPtr path, bool append, bool checkHost);
						void Init(StreamPtr stream, EncodingPtr encoding, Int32 bufferSize, bool shouldLeaveOpen);
						void Flush(bool flushStream, bool flushEncoder);

					private:
						StreamPtr		_stream;
						EncodingPtr		_encoding;
						intrusive_ptr<BString>	_byteBuffer;
						intrusive_ptr<CString>	_charBuffer;
						Int32		_charPos;
						Int32		_charLen;
						bool		_autoFlush;
						bool		_haveWrittenPreamble;
						bool		_closable;

						static const Int32 DefaultFileStreamBufferSize = 4096;
						static const Int32 MinBufferSize = 128;
						static EncodingPtr _UTF8NoBOM;
				};
				typedef intrusive_ptr<StreamWriter> StreamWriterPtr;

			}
		}
	}
}
#endif//_SYSTEM_IO_STREAMWRITER_H_