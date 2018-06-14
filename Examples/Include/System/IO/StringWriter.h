#ifndef _SYSTEM_IO_STRINGWRITER_H_
#define _SYSTEM_IO_STRINGWRITER_H_

#include "System/Object.h"
#include "System/Char.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Text/UnicodeEncoding.h"
#include "System/IO/TextWriter.h"
#include "System/IO/Stream.h"
#include "System/TypeDefBString.h"
#include "System/Text/StringBuilder.h"

using namespace Aspose::Cells::System::Text;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API StringWriter : public TextWriter
				{
					public:
						StringWriter();
						virtual ~StringWriter();
						StringWriter(intrusive_ptr<IFormatProvider> formatProvider);
						StringWriter(StringBuilderPtr sb);
						StringWriter(StringBuilderPtr sb, intrusive_ptr<IFormatProvider> formatProvider);
						
						virtual void Close();
						virtual StringBuilderPtr GetStringBuilder();
						virtual void Write(Char value);
						virtual void Write(intrusive_ptr<CString> buffer, Int32 index, Int32 count);
						virtual void Write(StringPtr value);
						virtual StringPtr ToString();

					protected:
						void Dispose(bool disposing);

					private:
						static StreamPtr CreateFile(StringPtr path, bool append, bool checkHost);
						void Init(StreamPtr stream, EncodingPtr encoding, Int32 bufferSize, bool shouldLeaveOpen);
						void Flush(bool flushStream, bool flushEncoder);

					private:
						StringBuilderPtr			_sb;
						bool						_isOpen;
						static UnicodeEncodingPtr	_encoding;
				};
				typedef intrusive_ptr<StringWriter> StringWriterPtr;

			}
		}
	}
}
#endif//_SYSTEM_IO_STRINGWRITER_H_