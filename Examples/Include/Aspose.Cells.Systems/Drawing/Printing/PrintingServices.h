#ifndef _SYSTEM_DRAWING_PRINTING_PRINTINGSERVICES_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTINGSERVICES_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
//#include "Aspose.Cells.Systems/Drawing/Printing/PrinterSettings.h" --- deleted 

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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
