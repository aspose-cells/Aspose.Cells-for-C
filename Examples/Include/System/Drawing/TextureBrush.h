#ifndef _SYSTEM_DRAWING_TEXTUREBRUSH_H_
#define _SYSTEM_DRAWING_TEXTUREBRUSH_H_

#include "System/Object.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/RectangleF.h"
#include "System/Drawing/Image.h"
#include "System/Drawing/Drawing2D/WrapMode.h"
#include "System/Drawing/Drawing2D/Matrix.h"
#include "System/Drawing/Drawing2D/MatrixOrder.h"
#include "System/Drawing/Imaging/ImageAttributes.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Drawing::Drawing2D;
using namespace Aspose::Cells::System::Drawing::Imaging;

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API TextureBrush : public Brush
	{
	public:
		TextureBrush(intrusive_ptr<IntPtr> ptr);
		TextureBrush(intrusive_ptr<Image> bitmap);
		TextureBrush(intrusive_ptr<Image> image, intrusive_ptr<Rectangle> dstRect);
		TextureBrush(intrusive_ptr<Image> image, intrusive_ptr<RectangleF> dstRect);
		TextureBrush(intrusive_ptr<Image> image, Aspose::Cells::System::Drawing::Drawing2D::WrapMode wrapMode);
		TextureBrush(intrusive_ptr<Image> image, intrusive_ptr<Rectangle> dstRect, intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageAttributes> imageAttr);
		TextureBrush(intrusive_ptr<Image> image, intrusive_ptr<RectangleF> dstRect, intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageAttributes> imageAttr);
		TextureBrush(intrusive_ptr<Image> image, Aspose::Cells::System::Drawing::Drawing2D::WrapMode wrapMode, intrusive_ptr<Rectangle> dstRect);
		TextureBrush(intrusive_ptr<Image> image, Aspose::Cells::System::Drawing::Drawing2D::WrapMode wrapMode, intrusive_ptr<RectangleF> dstRect);

		intrusive_ptr<Image> GetImage();
		intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::Matrix> GetTransform();
		void SetTransform(intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::Matrix> _value);
		Aspose::Cells::System::Drawing::Drawing2D::WrapMode GetWrapMode();
		void SetWrapMode(Aspose::Cells::System::Drawing::Drawing2D::WrapMode _value);
		ObjectPtr Clone();
		void MultiplyTransform(intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::Matrix> matrix);
		void MultiplyTransform(intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::Matrix> matrix, Aspose::Cells::System::Drawing::Drawing2D::MatrixOrder order);
		void ResetTransform();
		void RotateTransform(Single angle);
		void RotateTransform(Single angle, Aspose::Cells::System::Drawing::Drawing2D::MatrixOrder order);
		void ScaleTransform(Single sx, Single sy);
		void ScaleTransform(Single sx, Single sy, Aspose::Cells::System::Drawing::Drawing2D::MatrixOrder order);
		void TranslateTransform(Single dx, Single dy);
		void TranslateTransform(Single dx, Single dy, Aspose::Cells::System::Drawing::Drawing2D::MatrixOrder order);

	private:

		
	};
}
}
}
}
#endif
