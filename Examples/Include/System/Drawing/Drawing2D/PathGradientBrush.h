#ifndef _SYSTEM_DRAWING_DRAWING2D_PATHGRADIENTBRUSH_H_
#define _SYSTEM_DRAWING_DRAWING2D_PATHGRADIENTBRUSH_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Drawing/Color.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/PointF.h"
#include "System/Drawing/Drawing2D/GraphicsPath.h"
#include "System/Drawing/Drawing2D/WrapMode.h"
#include "System/Drawing/Drawing2D/ColorBlend.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API PathGradientBrush : public Brush
	{
	public:
		PathGradientBrush(intrusive_ptr<IntPtr> native);
		PathGradientBrush(intrusive_ptr<GraphicsPath> path);

		intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetCenterColor();
		void SetCenterColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
		intrusive_ptr<ColorBlend> GetInterpolationColors();
		void SetInterpolationColors(intrusive_ptr<ColorBlend> value);
		intrusive_ptr<RectangleF> GetRectangle();
		intrusive_ptr<Array1D<Aspose::Cells::System::Drawing::Color *>> GetSurroundColors();
		void SetSurroundColors(intrusive_ptr<Array1D<Color *>> value);
		ObjectPtr Clone();
	};
}
}
}
}
}
#endif
