#ifndef _SYSTEM_IO_TEXTWRITER_H_
#define _SYSTEM_IO_TEXTWRITER_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/IDisposable.h"
#include "System/IFormatProvider.h"
#include "System/TypeDefBString.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API TextWriter : public IDisposable, public Object
				{
					public:
						virtual ~TextWriter() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
					protected:
						TextWriter();
						TextWriter(intrusive_ptr<IFormatProvider> formatProvider);

						virtual void Dispose(bool disposing);
					public:
						virtual void Close();
						void Dispose();
						virtual StringPtr GetNewLine();
						virtual void SetNewLine(StringPtr value);
						virtual void Flush();
						virtual void Write(Char value);
						
						virtual void Write(Char* str);
						virtual void Write(Char* str, Int32 index, Int32 count);
						virtual void Write(String* wstr);
						
						virtual void Write(intrusive_ptr<CString> buffer);
						virtual void Write(intrusive_ptr<CString> buffer, Int32 index, Int32 count);
						virtual void Write(bool value);
						virtual void Write(Int32 value);
						virtual void Write(UInt32 value);
						virtual void Write(Int64 value);
						virtual void Write(UInt64 value);
						virtual void Write(Double value);
						virtual void Write(StringPtr value);
						virtual void Write(ObjectPtr value);

						virtual void WriteLine();
						virtual void WriteLine(Char value);
						virtual void WriteLine(intrusive_ptr<CString> buffer);
						virtual void WriteLine(intrusive_ptr<CString> buffer, Int32 index, Int32 count);
						virtual void WriteLine(bool value);
						virtual void WriteLine(Int32 value);
						virtual void WriteLine(UInt32 value);
						virtual void WriteLine(Int64 value);
						virtual void WriteLine(UInt64 value);
						virtual void WriteLine(Double value);
						virtual void WriteLine(StringPtr value);
						virtual void WriteLine(ObjectPtr value);

					protected:
						intrusive_ptr<CString>	_coreNewLine;
					private:
						intrusive_ptr<IFormatProvider> _internalFormatProvider;
				};
				typedef intrusive_ptr<TextWriter> TextWriterPtr;

			}
		}
	}
}
#endif//_SYSTEM_IO_TEXTWRITER_H_