#ifndef _SYSTEM_DRAWING_PRINTING_PRINTPAGEEVENTARGS_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTPAGEEVENTARGS_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Printing/EventArgs.h"
#include "Aspose.Cells.Systems/Drawing/Graphics.h"
#include "PageSettings.h"
#include "GraphicsPrinter.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class ASPOSE_CELLS_API PrintPageEventArgs : public EventArgs
					{
					private:
						bool cancel;
						bool hasmorePages;
						intrusive_ptr<GraphicsPrinter> graphics_context;
						intrusive_ptr<Rectangle> marginBounds;
						intrusive_ptr<Rectangle> pageBounds;
						intrusive_ptr<PageSettings> pageSettings;
						intrusive_ptr<Graphics> graphics;
					public:
						PrintPageEventArgs(intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> graphics, intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> marginBounds,
							intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle>  pageBounds, intrusive_ptr<PageSettings>  pageSettings);
						bool GetCancel();
						void SetCancel(bool value);
						bool GetHasMorePages();
						void SetHasMorePages(bool value);
						intrusive_ptr<GraphicsPrinter> GetGraphicsContext();
						void SetGraphicsContext(intrusive_ptr<GraphicsPrinter> value);
						intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> GetGraphics();
						// used in PrintDocument.Print()
						void SetGraphics(intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> g);
					};
				}
			}
		}
	}
}
#endif
