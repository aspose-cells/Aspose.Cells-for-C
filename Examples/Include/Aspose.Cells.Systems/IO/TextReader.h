#ifndef _SYSTEM_IO_TEXTREADER_H_
#define _SYSTEM_IO_TEXTREADER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/TypeDefBString.h"

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace IO {
				class ASPOSE_CELLS_API TextReader : public Object, public IDisposable
				{
					private:

					protected:
						TextReader();
						virtual void Dispose(bool disposing);
					public:
						virtual ~TextReader() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}

						void Dispose();
						virtual Int32 Read();
						virtual Int32 Read(intrusive_ptr<CString> buffer, Int32 index, Int32 count);
						virtual void Close();
						virtual StringPtr ReadLine();
						virtual int Peek();

				};

			}
		}
	}
}
#endif//_SYSTEM_IO_TEXTREADER_H_