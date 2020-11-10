#ifndef _SYSTEM_DRAWING_TEXTUREBRUSH_H_
#define _SYSTEM_DRAWING_TEXTUREBRUSH_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Brush.h"
#include "Aspose.Cells.Systems/Drawing/Rectangle.h"
#include "Aspose.Cells.Systems/Drawing/RectangleF.h"
#include "Aspose.Cells.Systems/Drawing/Image.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/WrapMode.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/Matrix.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/MatrixOrder.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageAttributes.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing::Drawing2D;
using namespace Aspose::Cells::Systems::Drawing::Imaging;

namespace Aspose { 
namespace Cells { 
namespace Systems
{
namespace Drawing {
	class ASPOSE_CELLS_API TextureBrush : public Brush
	{
	public:
		TextureBrush(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ptr);
		TextureBrush(intrusive_ptr<Image> bitmap);
		TextureBrush(intrusive_ptr<Image> image, intrusive_ptr<Rectangle> dstRect);
		TextureBrush(intrusive_ptr<Image> image, intrusive_ptr<RectangleF> dstRect);
		TextureBrush(intrusive_ptr<Image> image, Aspose::Cells::Systems::Drawing::Drawing2D::WrapMode wrapMode);
		TextureBrush(intrusive_ptr<Image> image, intrusive_ptr<Rectangle> dstRect, intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageAttributes> imageAttr);
		TextureBrush(intrusive_ptr<Image> image, intrusive_ptr<RectangleF> dstRect, intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageAttributes> imageAttr);
		TextureBrush(intrusive_ptr<Image> image, Aspose::Cells::Systems::Drawing::Drawing2D::WrapMode wrapMode, intrusive_ptr<Rectangle> dstRect);
		TextureBrush(intrusive_ptr<Image> image, Aspose::Cells::Systems::Drawing::Drawing2D::WrapMode wrapMode, intrusive_ptr<RectangleF> dstRect);

		intrusive_ptr<Image> GetImage();
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::Matrix> GetTransform();
		void SetTransform(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::Matrix> _value);
		Aspose::Cells::Systems::Drawing::Drawing2D::WrapMode GetWrapMode();
		void SetWrapMode(Aspose::Cells::Systems::Drawing::Drawing2D::WrapMode _value);
		ObjectPtr Clone();
		void MultiplyTransform(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::Matrix> matrix);
		void MultiplyTransform(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::Matrix> matrix, Aspose::Cells::Systems::Drawing::Drawing2D::MatrixOrder order);
		void ResetTransform();
		void RotateTransform(Single angle);
		void RotateTransform(Single angle, Aspose::Cells::Systems::Drawing::Drawing2D::MatrixOrder order);
		void ScaleTransform(Single sx, Single sy);
		void ScaleTransform(Single sx, Single sy, Aspose::Cells::Systems::Drawing::Drawing2D::MatrixOrder order);
		void TranslateTransform(Single dx, Single dy);
		void TranslateTransform(Single dx, Single dy, Aspose::Cells::Systems::Drawing::Drawing2D::MatrixOrder order);

	private:

		
	};
}
}
}
}
#endif
