#ifndef _SYSTEM_DRAWING_DRAWING2D_LINEARGRADIENTBRUSH_H_
#define _SYSTEM_DRAWING_DRAWING2D_LINEARGRADIENTBRUSH_H_

#include "System/Object.h"
#include "System/Single.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Color.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/PointF.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/RectangleF.h"
#include "System/Drawing/Drawing2D/LinearGradientMode.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API LinearGradientBrush: public Brush
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("LinearGradientBrush.Clone NotSupport");
		}
		/*
		private:

		public:
			LinearGradientBrush(Point *point1, Point *point2, Color *color1, Color *color2);
			LinearGradientBrush(PointF *point1, PointF *point2, Color *color1, Color *color2);
			LinearGradientBrush(Rectangle *rect, Color *color1, Color *color2, Single angle);
			LinearGradientBrush(Rectangle *rect, Color *color1, Color *color2, LinearGradientMode linearGradientMode);
			LinearGradientBrush(RectangleF *rect, Color *color1, Color *color2, Single angle);
			LinearGradientBrush(RectangleF *rect, Color *color1, Color *color2, LinearGradientMode linearGradientMode);
			LinearGradientBrush(Rectangle *rect, Color *color1, Color *color2, Single angle, bool isAngleScaleable);
			LinearGradientBrush(RectangleF *rect, Color *color1, Color *color2, Single angle, bool isAngleScaleable);

			Object* Clone();
			*/
	};
}
}
}
}
}
#endif