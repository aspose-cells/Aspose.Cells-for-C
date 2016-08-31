#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
#include "ShiftType.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_FORMULAHELPER1() 

namespace Aspose {
namespace Cells {
class Worksheet;
class ReferredAreaCollection;
class CellArea;
class SupbookData;
class WorksheetCollection;
class Cells;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
	class FormulaHelper1 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ConstantToBin(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Object> value);
			static intrusive_ptr<Aspose::Cells::System::Object> GetConstantFormula(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			static bool IsConstantFormula(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , bool onlyDouble);
			static bool IsVolatileFormula(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			static void UpdateExternal(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> external , Aspose::Cells::System::Int32 supbookIndex , intrusive_ptr<Aspose::Cells::SupbookData> supbook , bool isExternalName , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> RemoveTableColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			static void CopyRowColumn(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 shiftRows , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 shiftColumns , Aspose::Cells::System::Int32 startColumn , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			static void InsertRows(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 shiftRows , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static void InsertRowsInDataSorter(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 shiftRows , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static void InsertColumns(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , Aspose::Cells::System::Int32 startCol , Aspose::Cells::System::Int32 shiftCols , Aspose::Cells::System::Int32 oldCol , Aspose::Cells::System::Int32 currentCol , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetUnCaledPrecedents(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , bool lengthSelf , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cells> cells);
			static void GetPrecedents(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::ReferredAreaCollection> list , bool isExternal , intrusive_ptr<Aspose::Cells::System::String> externalFileName , intrusive_ptr<Aspose::Cells::System::String> sheeetName);
			static bool GetDependents(Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 checkRow , Aspose::Cells::System::Int32 checkColumn , Aspose::Cells::System::Int32 refSheet , intrusive_ptr<Aspose::Cells::Cells> cells , bool sameWorksheet , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexedNames);
			static bool HasExternRef(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static bool HasExternRef(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> extSheetRefs , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> NamesContainsExtSheetRefs);
			static bool ReferToOthers(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static bool ReferName(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static void ReferNames(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexes , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRanges(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cells> cells);
			static void ChangeName(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> indexHash , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static void ConvertSharedData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> newData , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static void Shift(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 oldColumn , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			static void ShiftDown(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos);
			static void ShiftUp(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos);
			static void ShiftRight(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 oldColumn , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			static void ShiftLeft(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos);
			static void MoveRange(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos);
			static bool HasMehodB(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetSxNames(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReplaceSmart(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameSheet , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool isVertical , Aspose::Cells::System::Int32 insertCount , bool adding , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsRelativeRow(Aspose::Cells::System::Byte option);
			static bool IsRelativeColumn(Aspose::Cells::System::Byte option);
			 FormulaHelper1();
		public:
			virtual ~FormulaHelper1();
	};

}

}
