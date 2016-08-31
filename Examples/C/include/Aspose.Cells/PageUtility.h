#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Exception.h"
//#include "System/Collections/ArrayList.h"
//#include "System/ApplicationException.h"
#include "System/Double.h"
#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Diagnostics/Debug.h"
#include "System/Array1D.h"
#include "System/Char.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_PAGEUTILITY() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Validation;
class FormatCondition;
class Name;
class WorksheetCollection;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
	class PageUtility : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static void AppendToBuilder(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> ret , intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static void ToSSMLFormulaCell(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> ret , intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 startIdx , Aspose::Cells::System::Int32 endIdx , Aspose::Cells::System::Int32 currRow , Aspose::Cells::System::Int32 currCol);
			static Aspose::Cells::System::Int32 GetColumnIndex(intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 startIdx , Aspose::Cells::System::Int32 endIdx);
			static bool ReadAColumn(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> ret , intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 preIndex , Aspose::Cells::System::Int32& startIdx , Aspose::Cells::System::Int32 currRow , Aspose::Cells::System::Int32 currCol);
			static void ReadSSMLFormulaSingle(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> ret , intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 startIdx , Aspose::Cells::System::Int32& endIdx , Aspose::Cells::System::Int32 currRow , Aspose::Cells::System::Int32 currCol);
			static void DieOfFormula(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 currRow , Aspose::Cells::System::Int32 currCol);
	public:

			 static const Aspose::Cells::System::Double MM_PER_INCH;
			 static const Aspose::Cells::System::Double CM_PER_INCH;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SplitHeaderFooter(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> CreateRGBString(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Char delimiter);
			static bool IsArrayNull(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> array);
			static intrusive_ptr<Aspose::Cells::System::String> GetHTMLFormatColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static Aspose::Cells::System::Double MM2Point(Aspose::Cells::System::Double mm);
			static intrusive_ptr<Aspose::Cells::System::String> GetRCFormula(intrusive_ptr<Aspose::Cells::Cell> cell);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetRCFormula(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetRCFormula(intrusive_ptr<Aspose::Cells::Validation> dv , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			static intrusive_ptr<Aspose::Cells::System::String> GetRCFormula(intrusive_ptr<Aspose::Cells::Name> name , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertToSSMLFormula(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 currRow , Aspose::Cells::System::Int32 currCol);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertFromSSMLFormula(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 currRow , Aspose::Cells::System::Int32 currCol);
			static void ConvertExcelRange2SSML(intrusive_ptr<Aspose::Cells::System::String> range , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> builder);
			static bool IsNullOrEmpty(intrusive_ptr<Aspose::Cells::System::String> str);
			 PageUtility();
		public:
			virtual ~PageUtility();
	};

}

}

}
