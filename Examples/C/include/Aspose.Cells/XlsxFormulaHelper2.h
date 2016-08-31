#pragma once
//#include "System/Text/RegularExpressions/Match.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Text/RegularExpressions/Regex.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XLSXFORMULAHELPER2() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxFormulaHelper2 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static bool ColumnNameToIndex(intrusive_ptr<Aspose::Cells::System::String> columnName , Aspose::Cells::System::Int32& column);
	public:

			static bool IsString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 pos);
			static bool CellNameToIndex(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column , bool& isRowAbsolute , bool& isColumnAbsolute , bool& isRowOnly , bool& isColumnOnly);
			static bool CheckCellRowColumnName(intrusive_ptr<Aspose::Cells::System::String> cellName);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateNonContiguousData(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> values , bool hasParen , bool validName , bool& isValid);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ParseCell(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> refString , bool externRef , bool validName , bool convertName , bool& isValid);
			 XlsxFormulaHelper2();
		public:
			virtual ~XlsxFormulaHelper2();
	};

}

}

}

}
