#ifndef _SYSTEM_DRAWING_PRINTING_GRAPHICSPRINTER_H_
#define _SYSTEM_DRAWING_PRINTING_GRAPHICSPRINTER_H_

#include "System/Object.h"
#include "System/Drawing/Graphics.h"
using namespace Aspose::Cells::System;
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class GraphicsPrinter : public Object 
					{
					private:
						intrusive_ptr<Aspose::Cells::System::Drawing::Graphics>  graphics;
						void* hDC;
					public:
						GraphicsPrinter();
						GraphicsPrinter(intrusive_ptr<Aspose::Cells::System::Drawing::Graphics> gr, void * dc);
						intrusive_ptr<Aspose::Cells::System::Drawing::Graphics> GetGraphics();///Graphics ?
						void SetGraphics(intrusive_ptr<Aspose::Cells::System::Drawing::Graphics>   value);
						void * GetHdc();
					};
				}
			}
		}
	}
}
#endif
