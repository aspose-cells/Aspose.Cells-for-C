#ifndef _SYSTEM_DRAWING_PRINTING_PRINTINGSERVICES_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTINGSERVICES_H_

#include "System/Object.h"
#include "System/String.h"
//#include "System/Drawing/Printing/PrinterSettings.h" --- deleted 

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class PrinterSettings;
					class ASPOSE_CELLS_API PrintingServices : public Object
					{
					public:
						virtual bool IsPrinterValid(StringPtr printer) = 0;
						virtual void LoadPrinterSettings(StringPtr printer, PrinterSettings*  settings) = 0;
						virtual StringPtr DefaultPrinter() = 0;
						virtual ~PrintingServices(){};
					};
				}
			}
		}
	}
}
#endif
