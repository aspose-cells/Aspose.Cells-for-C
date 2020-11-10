#ifndef _SYSTEM_DRAWING_DRAWING2D_PATHGRADIENTBRUSH_H_
#define _SYSTEM_DRAWING_DRAWING2D_PATHGRADIENTBRUSH_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Drawing/Brush.h"
#include "Aspose.Cells.Systems/Drawing/Point.h"
#include "Aspose.Cells.Systems/Drawing/PointF.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/GraphicsPath.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/WrapMode.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/ColorBlend.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing ;
using namespace Aspose::Cells::Systems::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace Systems{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API PathGradientBrush : public Brush
	{
	public:
		PathGradientBrush(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> native);
		PathGradientBrush(intrusive_ptr<GraphicsPath> path);

		intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetCenterColor();
		void SetCenterColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value);
		intrusive_ptr<ColorBlend> GetInterpolationColors();
		void SetInterpolationColors(intrusive_ptr<ColorBlend> value);
		intrusive_ptr<RectangleF> GetRectangle();
		intrusive_ptr<Array1D<Aspose::Cells::Systems::Drawing::Color *>> GetSurroundColors();
		void SetSurroundColors(intrusive_ptr<Array1D<Color *>> value);
		ObjectPtr Clone();
	};
}
}
}
}
}
#endif
