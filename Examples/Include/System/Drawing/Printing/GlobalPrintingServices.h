#ifndef _SYSTEM_DRAWING_PRINTING_GLOBPRINTINGSERV_H_
#define _SYSTEM_DRAWING_PRINTING_GLOBPRINTINGSERV_H_

#include "System/Object.h"
#include "PrinterSettings.h"
#include "PageSettings.h"
#include "GraphicsPrinter.h"
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class GlobalPrintingServices : public Object 
					{
					public:
						virtual void* CreateGraphicsContext(intrusive_ptr<PrinterSettings> settings, intrusive_ptr<PageSettings> page_settings) = 0;
						virtual bool StartsDoc(intrusive_ptr<GraphicsPrinter> gr, StringPtr doc_name, StringPtr output_file) = 0;
						virtual bool EndsDoc(intrusive_ptr<GraphicsPrinter> gr) = 0;
						virtual bool StartsPage(intrusive_ptr<GraphicsPrinter> gr) = 0;
						virtual bool EndsPage(intrusive_ptr<GraphicsPrinter> gr) = 0;
					};
				}
			}
		}
	}
}
#endif
