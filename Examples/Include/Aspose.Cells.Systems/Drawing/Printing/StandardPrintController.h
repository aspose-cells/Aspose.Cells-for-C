#ifndef _SYSTEM_DRAWING_PRINTING_STDPRTCREL_H_
#define _SYSTEM_DRAWING_PRINTING_STDPRTCREL_H_
 
#include "Aspose.Cells.Systems/Object.h"
#include "PrintController.h"///
#include "PrintEventArgs.h"
#include "Aspose.Cells.Systems/Drawing/Graphics.h"
#include "PrintPageEventArgs.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class PrintDocument;
					class ASPOSE_CELLS_API StandardPrintController : public PrintController
					{
					public:
						 StandardPrintController();
						 virtual bool GetIsPreview();
						 void OnStartPrint(PrintDocument* document, intrusive_ptr<PrintEventArgs> e);
						 void OnEndPrint(PrintDocument* document, intrusive_ptr<PrintEventArgs> e);
						 intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> OnStartPage(PrintDocument* document, intrusive_ptr<PrintPageEventArgs> e);
						 void OnEndPage(PrintDocument* document, intrusive_ptr<PrintPageEventArgs> e);
					};
				}
			}
		}
	}
}
#endif
