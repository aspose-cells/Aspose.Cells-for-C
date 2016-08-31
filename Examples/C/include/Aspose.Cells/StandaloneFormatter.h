#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Double.h"
#include "System/String.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Drawing/FontStyle.h"
#include "CountryCode.h"
#include "System/Int32.h"
//#include "System/Type.h"
#include "FormatOptions.h"
//#include "System/TypeCode.h"
#define STATIC_STANDALONEFORMATTER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
class CellsDigitCalculatorDynamicFont;
}
}
}
}
namespace Aspose {
namespace Cells {
class FormattedInfo;
class Style;
}
}

namespace Aspose {
namespace Cells {
	class StandaloneFormatter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> m_RelInfo;
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> m_FmtOpts;
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsDigitCalculatorDynamicFont> m_DigitCal;
	public:

			 StandaloneFormatter(Aspose::Cells::CountryCode region , intrusive_ptr<Aspose::Cells::System::String> defaultFontName , Aspose::Cells::System::Int32 defaultFontSize , Aspose::Cells::System::Drawing::FontStyle defaultFontStyle);
			 StandaloneFormatter(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> cultrue , intrusive_ptr<Aspose::Cells::System::String> defaultFontName , Aspose::Cells::System::Int32 defaultFontSize , Aspose::Cells::System::Drawing::FontStyle defaultFontStyle);
			void OnDefaultFontChanged(intrusive_ptr<Aspose::Cells::System::String> defaultFontName , Aspose::Cells::System::Int32 defaultFontSize , Aspose::Cells::System::Drawing::FontStyle defaultFontStyle);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::System::String> format , bool cache);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::Object> value , Aspose::Cells::System::Int32 number);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle , Aspose::Cells::System::Double width , bool cache);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Double width , bool cache);
			 StandaloneFormatter();
		public:
			virtual ~StandaloneFormatter();
	};

}

}
