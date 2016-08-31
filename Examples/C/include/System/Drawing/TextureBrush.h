#ifndef _SYSTEM_DRAWING_TEXTUREBRUSH_H_
#define _SYSTEM_DRAWING_TEXTUREBRUSH_H_

#include "System/Object.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/RectangleF.h"
//#include "System/Drawing/Image.h"
//#include "System/Drawing/Drawing2D/WrapMode.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
//using namespace Aspose::Cells::System::Drawing::Drawing2D ;

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API TextureBrush : public Brush
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("TextureBrush.Clone NotSupport");
		}
		/*
		private:

		public:
			TextureBrush(Image* bitmap);
			TextureBrush(Image* image, Rectangle* dstRect);
			TextureBrush(Image* image, RectangleF* dstRect);
			TextureBrush(Image* image, WrapMode wrapMode);
			////TextureBrush(Image image, Rectangle dstRect, ImageAttributes imageAttr);
			////TextureBrush(Image image, RectangleF dstRect, ImageAttributes imageAttr);
			TextureBrush(Image* image, WrapMode wrapMode, Rectangle* dstRect);
			TextureBrush(Image* image, WrapMode wrapMode, RectangleF* dstRect);

			Object* Clone();
			*/
	};
}
}
}
}
#endif
