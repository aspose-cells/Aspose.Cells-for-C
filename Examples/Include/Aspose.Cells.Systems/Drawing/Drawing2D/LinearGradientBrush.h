#ifndef _SYSTEM_DRAWING_DRAWING2D_LINEARGRADIENTBRUSH_H_
#define _SYSTEM_DRAWING_DRAWING2D_LINEARGRADIENTBRUSH_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Drawing/Brush.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Drawing/Point.h"
#include "Aspose.Cells.Systems/Drawing/PointF.h"
#include "Aspose.Cells.Systems/Drawing/Rectangle.h"
#include "Aspose.Cells.Systems/Drawing/RectangleF.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/LinearGradientMode.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/ColorBlend.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/Matrix.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/WrapMode.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/MatrixOrder.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing;

namespace Aspose { 
namespace Cells { 
namespace Systems{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API LinearGradientBrush: public Brush
	{
	private:
		intrusive_ptr<RectangleF> rectangle;//to modify!!
	public:
		//constructors
		LinearGradientBrush(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> native);
		LinearGradientBrush(intrusive_ptr<Point>  point1, intrusive_ptr<Point> point2, intrusive_ptr<Color> color1, intrusive_ptr<Color> color2);
		LinearGradientBrush(intrusive_ptr<PointF> point1, intrusive_ptr<PointF> point2, intrusive_ptr<Color> color1, intrusive_ptr<Color> color2);
		LinearGradientBrush(intrusive_ptr<Rectangle> rect, intrusive_ptr<Color> color1, intrusive_ptr<Color> color2, LinearGradientMode linearGradientMode);
		LinearGradientBrush(intrusive_ptr<Rectangle> rect, intrusive_ptr<Color> color1, intrusive_ptr<Color> color2, float angle);
		LinearGradientBrush(intrusive_ptr<RectangleF> rect, intrusive_ptr<Color> color1, intrusive_ptr<Color> color2, LinearGradientMode linearGradientMode);
		LinearGradientBrush(intrusive_ptr<RectangleF> rect, intrusive_ptr<Color> color1, intrusive_ptr<Color> color2, float angle);
		LinearGradientBrush(intrusive_ptr<Rectangle>  rect, intrusive_ptr<Color>  color1, intrusive_ptr<Color> color2, float angle, bool isAngleScaleable);
		LinearGradientBrush(intrusive_ptr<RectangleF> rect, intrusive_ptr<Color> color1, intrusive_ptr<Color> color2, float angle, bool isAngleScaleable);
		
		intrusive_ptr<ColorBlend> GetInterpolationColors();
		void SetInterpolationColors(intrusive_ptr<ColorBlend>  value);
		intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Color*>> GetLinearColors();
		void SetLinearColors(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Color*>> value);
		intrusive_ptr<RectangleF> GetRectangle();
		intrusive_ptr<Systems::Drawing::Drawing2D::Matrix> GetTransform();
		void SetTransform(intrusive_ptr<Systems::Drawing::Drawing2D::Matrix> value);
		Drawing2D::WrapMode GetWrapMode();
		void SetWrapMode(Drawing2D::WrapMode value);
		void MultiplyTransform(intrusive_ptr<Systems::Drawing::Drawing2D::Matrix> matrix);
		void MultiplyTransform(intrusive_ptr<Systems::Drawing::Drawing2D::Matrix> matrix, MatrixOrder order);
		void ResetTransform();
		void RotateTransform(Single angle);
		void RotateTransform(Single angle, MatrixOrder order);
		void ScaleTransform(Single sx, Single sy);
		void ScaleTransform(Single sx, Single sy, MatrixOrder order);
		void SetBlendTriangularShape(Single focus);
		void SetBlendTriangularShape(Single focus, Single scale);
		void SetSigmaBellShape(Single focus);
		void SetSigmaBellShape(Single focus, Single scale);
		void TranslateTransform(Single dx, Single dy);
		void TranslateTransform(Single dx, Single dy, MatrixOrder order);
		ObjectPtr Clone();
	};
}
}
}
}
}
#endif
