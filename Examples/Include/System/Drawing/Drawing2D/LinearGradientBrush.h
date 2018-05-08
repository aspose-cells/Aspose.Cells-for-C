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
#include "System/Drawing/Drawing2D/ColorBlend.h"
#include "System/Drawing/Drawing2D/Matrix.h"
#include "System/Drawing/Drawing2D/WrapMode.h"
#include "System/Drawing/Drawing2D/MatrixOrder.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Drawing;

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API LinearGradientBrush: public Brush
	{
	private:
		intrusive_ptr<RectangleF> rectangle;//to modify!!
	public:
		//constructors
		LinearGradientBrush(intrusive_ptr<IntPtr> native);
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
		intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> GetLinearColors();
		void SetLinearColors(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> value);
		intrusive_ptr<RectangleF> GetRectangle();
		intrusive_ptr<System::Drawing::Drawing2D::Matrix> GetTransform();
		void SetTransform(intrusive_ptr<System::Drawing::Drawing2D::Matrix> value);
		Drawing2D::WrapMode GetWrapMode();
		void SetWrapMode(Drawing2D::WrapMode value);
		void MultiplyTransform(intrusive_ptr<System::Drawing::Drawing2D::Matrix> matrix);
		void MultiplyTransform(intrusive_ptr<System::Drawing::Drawing2D::Matrix> matrix, MatrixOrder order);
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
