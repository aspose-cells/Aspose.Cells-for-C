#ifndef _SYSTEM_IO_WSTRINGWRITER_H_
#define _SYSTEM_IO_WSTRINGWRITER_H_

#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IO/TextWriter.h"
#include "Aspose.Cells.Systems/IO/Stream.h"

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace IO {
				class ASPOSE_CELLS_API WStringWriter : public TextWriter
				{
					public:
						WStringWriter(String* wstr);
						virtual ~WStringWriter();
						
						virtual void Close();
						virtual void Write(Char value);

						virtual void Write(Char* str);
						virtual void Write(Char* str, Int32 index, Int32 count);
						virtual void Write(String* wstr);

					protected:
						void Dispose(bool disposing);

					private:
						String*			_wstr;
						bool			_isOpen;
				};
				typedef intrusive_ptr<WStringWriter> WStringWriterPtr;

			}
		}
	}
}
#endif//_SYSTEM_IO_STRINGWRITER_H_
