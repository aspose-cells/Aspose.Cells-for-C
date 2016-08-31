#pragma once
#include "System/Char.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Drawing/FontStyle.h"
#include "System/Single.h"
#include "System/Int32.h"
#define STATIC_DIGITCALCULATORFONT() 

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
namespace Format {
	class DigitCalculatorFont : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool m_CacheTT;
			intrusive_ptr<Aspose::Cells::System::String> m_FontName;
			Aspose::Cells::System::Int32 m_FontSize;
			Aspose::Cells::System::Drawing::FontStyle m_FontStyle;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> m_TTFont;
	public:

			 DigitCalculatorFont(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle , bool cacheTT , intrusive_ptr<Aspose::Cells::Internal::Format::DigitCalculatorFont> defaultFont);
			 DigitCalculatorFont(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> ttFont);
			bool IsEqualsFont(intrusive_ptr<Aspose::Cells::Internal::Format::DigitCalculatorFont> another);
			bool IsEquals(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			bool IsSameTTFont(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			Aspose::Cells::System::Int32 GetStringWidth(intrusive_ptr<Aspose::Cells::System::String> str);
			Aspose::Cells::System::Single GetCharWidth(Aspose::Cells::System::Char c);
			intrusive_ptr<Aspose::Cells::System::String> GetFontName();
			Aspose::Cells::System::Int32 GetFontSize();
			Aspose::Cells::System::Drawing::FontStyle GetFontStyle();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> GetTTFont();
			 DigitCalculatorFont();
		public:
			virtual ~DigitCalculatorFont();
	};

}

}

}

}
