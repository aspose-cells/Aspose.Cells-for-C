#pragma once
//#include "System/IO/TextReader.h"
#include "System/Char.h"
#include "TextAlignmentType.h"
//#include "System/IO/StreamReader.h"
#include "System/Object.h"
//#include "System/Drawing/ColorTranslator.h"
#include "System/Text/Encoding.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
#include "System/IO/FileStream.h"
//#include "System/Convert.h"
#include "BackgroundType.h"
#include "System/Drawing/Color.h"
#include "System/Double.h"
#include "FontUnderlineType.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_HTMLIMPCONSTANTS() 

namespace Aspose {
namespace Cells {
class Font;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace HTML {
	class HTMLImpConstants : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static bool IsHexChar(Aspose::Cells::System::Char c);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertString(intrusive_ptr<Aspose::Cells::System::String> str);
	public:

			static Aspose::Cells::System::Int32 DOUBLE;
			static Aspose::Cells::System::Int32 INT;
			static Aspose::Cells::System::Int32 INCHTOPT;
			static Aspose::Cells::System::Double INCHTOCM;
			static Aspose::Cells::System::Int32 INCHTOPIXEL;
			static Aspose::Cells::System::Int32 FILLOPACITY;
			static Aspose::Cells::System::Int32 MAXROWNUMBER;
			static Aspose::Cells::System::Int32 MAXCOLNUMBER;
			static Aspose::Cells::System::Int32 MAXROWHEIGHTPT;
			static intrusive_ptr<Aspose::Cells::System::String> ReadFileFromStream(intrusive_ptr<Aspose::Cells::System::IO::FileStream> fs , intrusive_ptr<Aspose::Cells::System::Text::Encoding> encoding);
			static intrusive_ptr<Aspose::Cells::System::String> DecodeString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int32 GetNumType(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> ReplaceBuiltProperty(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> ReplaceFilePath(intrusive_ptr<Aspose::Cells::System::String> str);
			static Aspose::Cells::TextAlignmentType GetHTextAlignType(intrusive_ptr<Aspose::Cells::System::String> str);
			static Aspose::Cells::TextAlignmentType GetVTextAlignType(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> GetUnderLine(Aspose::Cells::FontUnderlineType type);
			static void SetUnderline(intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::System::String> str);
			static Aspose::Cells::FontUnderlineType ProcessUnderlineStyle(intrusive_ptr<Aspose::Cells::System::String> underlineStyleStr);
			static void SetPattern(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::Style> style);
			static void SetPattern(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::System::Drawing::Color> backgroundColor);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColorByStr(intrusive_ptr<Aspose::Cells::System::String> val);
			static Aspose::Cells::BackgroundType GetPatternType(intrusive_ptr<Aspose::Cells::System::String> str);
			static void SetNumberFormat(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::System::String> str);
			 HTMLImpConstants();
		public:
			virtual ~HTMLImpConstants();
	};

}

}

}
