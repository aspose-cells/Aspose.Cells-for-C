#ifndef _SYSTEM_DRAWING_DRAWING2D_HATCHBRUSH_H_
#define _SYSTEM_DRAWING_DRAWING2D_HATCHBRUSH_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Brush.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/HatchStyle.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/HatchStyle.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing ;
using namespace Aspose::Cells::Systems::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace Systems{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API HatchBrush: public Brush
	{
	public:
		HatchBrush(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ptr);
		HatchBrush(HatchStyle hatchStyle, intrusive_ptr<Color> foreColor);
		HatchBrush(HatchStyle hatchStyle, intrusive_ptr<Color>  foreColor, intrusive_ptr<Color>  backColor);
		intrusive_ptr<Color> GetBackgroundColor();
		intrusive_ptr<Color> GetForegroundColor();
		HatchStyle GetHatchStyle();
		virtual ObjectPtr Clone();
	};
}
}
}
}
}
#endif
