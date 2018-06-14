#ifndef _SYSTEM_DRAWING_PRINTING_PRINTDOCUMENT_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTDOCUMENT_H_
#include "System/Object.h"
#include "System/Drawing/Printing/PrinterSettings.h"
#include "System/Drawing/Printing/PageSettings.h"
#include "StandardPrintController.h"
#include "System/Drawing/Printing/PrintPageEventHandler.h"
#include "System/Drawing/Printing/QueryPageSettingsEventHandler.h"
#include "PrintController.h"
//#include "CellsPrinter.h"
using namespace Aspose::Cells::System;
//using namespace Aspose::Cells::Rendering;

//class with namespace forward declaration 
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class   CellsPrinter;
		}
	}
}

//void(*printPage)(intrusive_ptr<Aspose::Cells::System::Object> sender, intrusive_ptr<Aspose::Cells::System::Drawing::Printing::PrintPageEventArgs> ev);
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class ASPOSE_CELLS_API PrintDocument : public Object  // Mono: System.ComponentModel.Component
					{
					private:
						intrusive_ptr<PageSettings>     defaultpagesettings;
						intrusive_ptr<PrinterSettings>  printersettings;
						intrusive_ptr<PrintController>  printcontroller;
						StringPtr documentname;
						bool originAtMargins = false;
					public:
						//***
						//intrusive_ptr<Array1D<PrintPageEventHandler *>> PrintPage;//public event PrintPageEventHandler PrintPage;
						//class CellsPrinter;
						//typedef void(*printPage)(intrusive_ptr<Aspose::Cells::System::Object> sender, intrusive_ptr<Aspose::Cells::System::Drawing::Printing::PrintPageEventArgs> ev);
						intrusive_ptr<QueryPageSettingsEventHandler> QueryPageSettings;//public event QueryPageSettingsEventHandler QueryPageSettings;
					    PrintDocument();
						intrusive_ptr<PageSettings>  GetDefaultPageSettings();
						void SetDefaultPageSettings(intrusive_ptr<PageSettings> value);
						intrusive_ptr<PrinterSettings> GetPrinterSettings();
						void SetPrinterSettings(intrusive_ptr<PrinterSettings> value);
						bool GetOriginAtMargins();
						void SetOriginAtMargins(bool value);
						StringPtr GetDocumentName();
						void SetDocumentName(StringPtr value);
						intrusive_ptr<PrintController> GetPrintController();
						void SetPrintController(intrusive_ptr<PrintController> value);
						//core function...
						void Print();
						//void Print(Aspose::Cells::Rendering::CellsPrinter *p);
						ObjectPtr Clone()
						{
							throw Exception("PrinterDocument.Clone NotSupport");
						}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
					};
				}
			}
		}
	}
}
#endif
