#pragma once
//#include "System/Drawing/Imaging/ImageFlags.h"
#include "System/Drawing/Drawing2D/Matrix.h"
//#include "System/Drawing/Image.h"
#include "System/Drawing/SizeF.h"
#include "System/String.h"
#include "System/Object.h"
//#include "System/IO/Stream.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/FontStyle.h"
#include "System/Drawing/Drawing2D/GraphicsPath.h"
#include "System/Single.h"
#include "System/Byte.h"
#include "System/Drawing/Size.h"
//#include "System/Double.h"
#include "System/Drawing/Graphics.h"
//#include "System/IO/MemoryStream.h"
#include "System/Char.h"
#include "System/Int32.h"
#include "System/Drawing/RectangleF.h"
#include "System/Array1D.h"
#define STATIC_PALDRAWINGUTIL() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class TTFont;
}
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalDrawingUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ToWidthHeight(bool isBmp , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 dpi);
			static intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> GetGraphicsPathBounds(intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::GraphicsPath> path);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Size> DeepClone(intrusive_ptr<Aspose::Cells::System::Drawing::Size> src);
			static intrusive_ptr<Aspose::Cells::System::Drawing::SizeF> DeepClone(intrusive_ptr<Aspose::Cells::System::Drawing::SizeF> src);
			static intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> DeepClone(intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> src);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> DeepClone(intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> src);
			static intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> ToRectangleF(intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> rect);
			static intrusive_ptr<Aspose::Cells::System::Drawing::SizeF> ToSizeF(intrusive_ptr<Aspose::Cells::System::Drawing::Size> size);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Single>> GetMatrixElement(intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::Matrix> source);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> GetTTFont(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			static Aspose::Cells::System::Int32 GetStringWidth(intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> ttFont , Aspose::Cells::System::Single fontSize);
			static Aspose::Cells::System::Int32 GetStringWidth(intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Single fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			static Aspose::Cells::System::Int32 GetFontHeight(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Single fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			static Aspose::Cells::System::Single GetCharWidth(Aspose::Cells::System::Char c , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> ttFont , Aspose::Cells::System::Int32 fontSize);
			static Aspose::Cells::System::Single GetCharWidth(Aspose::Cells::System::Char c , intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			static Aspose::Cells::System::Single GetMaxDigitWidth(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			static void SetRenderingHintToQUALITY(intrusive_ptr<Aspose::Cells::System::Drawing::Graphics> g);
			 PalDrawingUtil();

			 static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetInternalFontConst(intrusive_ptr<Aspose::Cells::System::String> fontName, Aspose::Cells::System::Double fontSize, Aspose::Cells::System::Drawing::FontStyle fontStyle);
		public:
			virtual ~PalDrawingUtil();
	};

}

}

}

}
