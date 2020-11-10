#ifndef _SYSTEM_DRAWING_PRINTING_GRAPHICSPRINTER_H_
#define _SYSTEM_DRAWING_PRINTING_GRAPHICSPRINTER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Graphics.h"
using namespace Aspose::Cells::Systems;
namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class GraphicsPrinter : public Object 
					{
					private:
						intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics>  graphics;
						void* hDC;
					public:
						GraphicsPrinter();
						GraphicsPrinter(intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> gr, void * dc);
						intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> GetGraphics();///Graphics ?
						void SetGraphics(intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics>   value);
						void * GetHdc();
					};
				}
			}
		}
	}
}
#endif
