#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
//#include "System/UInt32.h"
#include "RefMode.h"
#include "System/Char.h"
//#include "System/BitConverter.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_TABLEFORMULAHELPER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Cell;
class Range;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
	class TableFormulaHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::String> ToString(intrusive_ptr<Aspose::Cells::System::String> sheetName , intrusive_ptr<Aspose::Cells::System::String> tableName , Aspose::Cells::System::Byte type , bool inTable , Aspose::Cells::System::Int32 columns , intrusive_ptr<Aspose::Cells::System::String> firstColumn , intrusive_ptr<Aspose::Cells::System::String> lastColumn , Aspose::Cells::System::Int32 ProcessStation , bool isPivotSource);
			static Aspose::Cells::System::Int32 ToRowType(intrusive_ptr<Aspose::Cells::System::String> rowType);
			static Aspose::Cells::System::Int32 SearchQuote(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 cI);
			static Aspose::Cells::System::Int32 SearchRightSquareBrackets(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 i);
	public:

			static intrusive_ptr<Aspose::Cells::System::String> ToRowType(Aspose::Cells::System::Byte b , bool isPivotSource);
			static intrusive_ptr<Aspose::Cells::System::String> ToString(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , Aspose::Cells::System::Int32 ProcessStation , bool isPivotSource , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExportedSupbooks , Aspose::Cells::System::Int32& arrayPos);
			static intrusive_ptr<Aspose::Cells::System::String> ProcessColumnName(intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::Range> ToRange1(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> node , bool hasHeader);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ToRange(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> node , bool hasHeader);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetRange(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool hasHeader);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ParseTable(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> node , Aspose::Cells::FormulaUtility::RefMode refMode);
			static intrusive_ptr<Aspose::Cells::Tables::ListObject> GetTable(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> tableName);
			static Aspose::Cells::System::Int32 IndexOf(intrusive_ptr<Aspose::Cells::System::String> str , Aspose::Cells::System::Char ch);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ParseTableColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> node , Aspose::Cells::FormulaUtility::RefMode refMode , bool& InvalidTable);
			 TableFormulaHelper();
		public:
			virtual ~TableFormulaHelper();
	};

}

}

}
