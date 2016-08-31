#pragma once
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/TypeCode.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
//#include "System/Text/Encoding.h"
#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Type.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_XLSXFORMULAHELPER1() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class WorksheetCollection;
class SupbookData;
class Cells;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxFormulaHelper1 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ConstantToBin(intrusive_ptr<Aspose::Cells::System::Object> value);
			static intrusive_ptr<Aspose::Cells::System::Object> GetConstantFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset0);
			static bool IsConstantFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset0 , bool onlyDouble);
			static void UpdateExternal(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> external , Aspose::Cells::System::Int32 supbookIndex , intrusive_ptr<Aspose::Cells::SupbookData> supbook , bool isExternalName);
			static Aspose::Cells::System::Int32 HasTableColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> RemoveTableColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			static void CopyRowColumn(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 shiftRows , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 shiftColumns , Aspose::Cells::System::Int32 startColumn , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0);
			static void InsertRows(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 shiftRows , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static void InsertRowsInDataSorter(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 shiftRows , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>>& data);
			static void InsertColumns(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , Aspose::Cells::System::Int32 startCol , Aspose::Cells::System::Int32 shiftCols , Aspose::Cells::System::Int32 oldCol , Aspose::Cells::System::Int32 currentCol , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool GetDependents(Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0 , Aspose::Cells::System::Int32 checkRow , Aspose::Cells::System::Int32 checkColumn , Aspose::Cells::System::Int32 refSheet , intrusive_ptr<Aspose::Cells::Cells> cells , bool sameWorksheet , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexedNames);
			static bool HasExternRef(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static bool HasExternRef(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> extSheetRefs , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> NamesContainsExtSheetRefs);
			static bool ReferToOthers(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static void ReferNames(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexes , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRanges(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cells> cells);
			static void ChangeName(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexHash , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static void ConvertSharedData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> newData , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static void ShiftDown(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0);
			static void ShiftUp(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0);
			static void ShiftRight(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 oldColumn , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			static intrusive_ptr<Aspose::Cells::CellArea> ShiftUp(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endRowIndex , Aspose::Cells::System::Int32 endColumnIndex , bool& flag , bool& isDelete);
			static intrusive_ptr<Aspose::Cells::CellArea> ShiftLeft(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endRowIndex , Aspose::Cells::System::Int32 endColumnIndex , bool& flag , bool& isDelete);
			static void ShiftLeft(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0);
			static void MoveRange(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0);
			static bool IsMehodBDown(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::CellArea> ca , bool& flag);
			static bool HasMehodB(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetSxNames(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos0);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReplaceSmart(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool isVertical , Aspose::Cells::System::Int32 insertCount , bool adding , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 endPos0 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool InsertRef(Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 shift , Aspose::Cells::System::Int32& index , Aspose::Cells::System::Int32 maxValue);
			static bool InsertArea(Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 shift , Aspose::Cells::System::Int32& startIndex , Aspose::Cells::System::Int32& endIndex , Aspose::Cells::System::Int32 maxValue);
			static bool InsertArea(Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 shift , Aspose::Cells::System::Int32& startIndex , Aspose::Cells::System::Byte startOption , Aspose::Cells::System::Int32& endIndex , Aspose::Cells::System::Byte endOption , Aspose::Cells::System::Int32 maxValue);
			 XlsxFormulaHelper1();
		public:
			virtual ~XlsxFormulaHelper1();
	};

}

}

}

}
