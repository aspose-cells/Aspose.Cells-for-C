#ifndef _SYSTEM_DRAWING_PRINTING_PRINTSVRWIN32_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTSVRWIN32_H_
#include "System/String.h"
#include "System/Drawing/Printing/PrintingServices.h"
#include "PrinterSettings.h"
#include "PageSettings.h"
#include "GraphicsPrinter.h"
#include <Windows.h>
#include <WinSpool.h>
//#pragma comment (lib,"Winspool.lib")

enum DevCapabilities
{
	DevCapabilities_TECHNOLOGY = 2,
};

enum PrinterType
{
	PrinterType_DT_PLOTTER = 0, // Vector Plotter
	PrinterType_DT_RASDIPLAY = 1, // Raster Display
	PrinterType_DT_RASPRINTER = 2, // Raster printer
	PrinterType_DT_RASCAMERA = 3, // Raster camera
	PrinterType_DT_CHARSTREAM = 4, // Character-stream, PLP
	PrinterType_DT_METAFILE = 5, // Metafile, VDM
	PrinterType_DT_DISPFILE = 6, // Display-file
};

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class PrinterSettings;
					class   PrintingServicesWin32 : public PrintingServices
					{
					private:
						bool is_printer_valid;
					public:
						PrintingServicesWin32();
						bool IsPrinterValid(StringPtr printer);
						StringPtr DefaultPrinter();
						void LoadPrinterSettings(StringPtr printer, PrinterSettings* settings);
						void LoadPrinterPaperSizes(StringPtr printer, PrinterSettings* settings);
						void LoadPrinterPaperSources(StringPtr printer, PrinterSettings * settings);
						static void * CreateGraphicsContext(intrusive_ptr<PrinterSettings> settings, intrusive_ptr<PageSettings> default_page_settings);
						static bool StartsDoc(intrusive_ptr<GraphicsPrinter> gr, StringPtr doc_name, StringPtr output_file);
						static bool EndsDoc(intrusive_ptr<GraphicsPrinter> gr);
						static bool StartsPage(intrusive_ptr<GraphicsPrinter> gr );
						static bool EndsPage(intrusive_ptr<GraphicsPrinter> gr);
					};
				}
			}
		}
	}
}
#endif