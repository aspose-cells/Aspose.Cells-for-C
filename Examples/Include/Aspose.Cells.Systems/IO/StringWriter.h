#ifndef _SYSTEM_IO_STRINGWRITER_H_
#define _SYSTEM_IO_STRINGWRITER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Char.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Text/UnicodeEncoding.h"
#include "Aspose.Cells.Systems/IO/TextWriter.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/TypeDefBString.h"
#include "Aspose.Cells.Systems/Text/StringBuilder.h"

using namespace Aspose::Cells::Systems::Text;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
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
						static Aspose::Cells::Systems::IO::StreamPtr CreateFile(StringPtr path, bool append, bool checkHost);
						void Init(Aspose::Cells::Systems::IO::StreamPtr stream, Aspose::Cells::Systems::Text::EncodingPtr encoding, Int32 bufferSize, bool shouldLeaveOpen);
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