#ifndef _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/String.h"
#include "System/Exception.h"
//#include "System/Drawing/Printing/PageSettings.h"
#include "System/Drawing/Printing/PrintingServices.h"
#include "./PrinterSettings/PaperSizeCollection.h"
#include "./PrinterSettings/PaperSourceCollection.h"
#include "./PrinterSettings/PrinterResolutionCollection.h"

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Drawing {
namespace Printing {
    //class PrintingServices;
	class ASPOSE_CELLS_API PrinterSettings : public Object, public ICloneable
	{
	public:
		ObjectPtr default_pagesettings;
		StringPtr printer_name;
		short copies;
		int maximum_page;
		int minimum_page;
		int from_page;
		int to_page;
	    bool collate;
		int maximum_copies;
		bool can_duplex;
		bool supports_color;
		int landscape_angle;
		bool print_tofile;
		bool is_plotter;
		intrusive_ptr<PrintingServices>  printing_services;
		intrusive_ptr<PaperSizeCollection> paper_sizes;
		intrusive_ptr<PaperSourceCollection> paper_sources;
		intrusive_ptr<PrinterResolutionCollection> printer_resolutions;
	private:
		void ResetToDefaults();
	public:
		PrinterSettings();
		//internal
		PrinterSettings(intrusive_ptr<PrintingServices>  printing_services);
		//to void include header "PageSettings.h" and "PrinterSettings.h" in a  cycle
		//we use ObjectPtr here
		ObjectPtr GetDefaultPageSettings();
		StringPtr GetPrinterName();
		void SetPrinterName(StringPtr value);
		bool IsValid();
		intrusive_ptr<PaperSizeCollection> GetPaperSizes();
		intrusive_ptr<PaperSourceCollection> GetPaperSources();
		bool GetSupportsColor();
		ObjectPtr Clone()
		{
			throw Exception("PrinterSettings.Clone NotSupport");
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
