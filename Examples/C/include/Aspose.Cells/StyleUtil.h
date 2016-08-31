#pragma once
//#include "System/Int64.h"
#include "BuiltinStyleType.h"
#include "System/Double.h"
//#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_STYLEUTIL() 

namespace Aspose {
namespace Cells {
class Font;
class StyleFlag;
class WorksheetCollection;
class Style;
}
}

namespace Aspose {
namespace Cells {
	class StyleUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void ApplyStyle(intrusive_ptr<Aspose::Cells::Style> sourceStyle , intrusive_ptr<Aspose::Cells::Style> destStyle , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			static void ApplyStyle(intrusive_ptr<Aspose::Cells::Style> sourceStyle , intrusive_ptr<Aspose::Cells::Font> destFont , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			static void ApplyStyle(intrusive_ptr<Aspose::Cells::Font> source , intrusive_ptr<Aspose::Cells::Font> destFont , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			static intrusive_ptr<Aspose::Cells::System::String> GetCustomFormat(Aspose::Cells::System::Int32 number);
			static intrusive_ptr<Aspose::Cells::System::String> GetBuiltinName(Aspose::Cells::System::Int32 id , intrusive_ptr<Aspose::Cells::System::String> name);
			static Aspose::Cells::System::Int32 ToBuiltinId(intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::Style> CreateBuiltInStyle(Aspose::Cells::BuiltinStyleType type , intrusive_ptr<Aspose::Cells::WorksheetCollection> worksheets);
			static void CreateBuiltThemePattern(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 themeColor , Aspose::Cells::System::Double tint);
			static void CreateBuiltThemeFont(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Style> defaultStyle , Aspose::Cells::System::Int32 themeColor);
			 StyleUtil();
		public:
			virtual ~StyleUtil();
	};

}

}
