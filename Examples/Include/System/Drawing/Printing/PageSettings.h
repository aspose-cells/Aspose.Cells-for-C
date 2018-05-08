#ifndef _SYSTEM_DRAWING_PRINTING_PAGESETTINGS_H_
#define _SYSTEM_DRAWING_PRINTING_PAGESETTINGS_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/Drawing/Printing/PaperSize.h"
#include "System/Drawing/Printing/PaperSource.h"
#include "System/Drawing/Printing/PrinterResolution.h"
#include "System/Drawing/Printing/PrinterSettings.h"
#include "System/Drawing/Printing/Margins.h"
#include "System/Drawing/Rectangle.h"
using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					//class PrinterSettings;
					class ASPOSE_CELLS_API PageSettings : public Object,public ICloneable
					{
					public:
						 bool color;
						 bool landscape;
						 intrusive_ptr<PaperSize> paperSize;
						 intrusive_ptr<PaperSource> paperSource;
						 intrusive_ptr<Margins> margins;
						 intrusive_ptr<PrinterResolution> printerResolution;
					//public:
						intrusive_ptr<PrinterSettings> printerSettings;
						PageSettings();
						PageSettings(intrusive_ptr<PrinterSettings> printerSettings);
						PageSettings(intrusive_ptr<PrinterSettings> printerSettings, bool color, bool landscape, intrusive_ptr<PaperSize> paperSize,
							intrusive_ptr<PaperSource> paperSource, intrusive_ptr<PrinterResolution> printerResolution);
						intrusive_ptr<PaperSize> GetPaperSize();
						void SetPaperSize(intrusive_ptr<PaperSize> value);
						intrusive_ptr<PaperSource> GetPaperSource();
						void SetPaperSource(intrusive_ptr<PaperSource> value);
						void SetMargins(intrusive_ptr<Margins> value);
						void SetLandscape(bool value);
						intrusive_ptr<PrinterSettings> GetPrinterSettings();
						intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> GetBounds();
						ObjectPtr Clone();
						virtual void add_ref()
						{++ref_count_;}
						virtual int release_ref()
						{return --ref_count_;}
					};
				}
			}
		}
	}
}
#endif
