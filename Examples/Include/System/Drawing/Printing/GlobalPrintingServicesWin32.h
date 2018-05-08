#ifndef _SYSTEM_DRAWING_PRINTING_GLOBPRINTINGSERVWIN32_H_
#define _SYSTEM_DRAWING_PRINTING_GLOBPRINTINGSERVWIN32_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "PrinterSettings.h"
#include "PageSettings.h"
#include "PrintingServicesWin32.h"
#include "GraphicsPrinter.h"
#include "GlobalPrintingServices.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class GlobalPrintingServicesWin32 : public GlobalPrintingServices
					{
					public:
						//internal abstract PrinterSettings.StringCollection InstalledPrinters{ get; }
						virtual void * CreateGraphicsContext(intrusive_ptr<PrinterSettings> settings, intrusive_ptr<PageSettings> default_page_settings)
						{
							return PrintingServicesWin32::CreateGraphicsContext(settings, default_page_settings);
						}
						virtual bool StartsDoc(intrusive_ptr<GraphicsPrinter> gr, StringPtr doc_name, StringPtr output_file)
						{
							return PrintingServicesWin32::StartsDoc(gr, doc_name, output_file);
						}
						virtual bool EndsDoc(intrusive_ptr<GraphicsPrinter> gr)
						{
							return PrintingServicesWin32::EndsDoc(gr);
						}
						virtual bool StartsPage(intrusive_ptr<GraphicsPrinter> gr)
						{
							return PrintingServicesWin32::StartsPage(gr);
						}
						virtual bool EndsPage(intrusive_ptr<GraphicsPrinter> gr)
						{
							return PrintingServicesWin32::EndsPage(gr);
						}
					};
				}
			}
		}
	}
}
#endif
