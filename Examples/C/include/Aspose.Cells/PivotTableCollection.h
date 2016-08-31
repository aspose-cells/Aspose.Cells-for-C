#pragma once
#include "System/Collections/CollectionBase.h"
//#include "System/Exception.h"
#include "PivotTable.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
//#include "System/Collections/ICollection.h"
//#include "System/Int16.h"
//#include "System/Boolean.h"
//#include "System/StringHelperPal.h"
//#include "System/ArgumentException.h"
#include "ShiftType.h"
//#include "System/Collections/Hashtable.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Collections/IDictionaryEnumerator.h"
//#include "System/Collections/SortedList.h"
//#include "System/Math.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_PIVOTTABLECOLLECTION() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotPageFields;
class PivotCache;
}
}
}
namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class CopyOptions;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotTableCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class PivotTableCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> GetPivotTableByCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool& inPageField);
	public:

			Aspose::Cells::Worksheet* Worksheet;
			 PivotTableCollection(intrusive_ptr<Aspose::Cells::Worksheet> worksheet);
			void CopyInRows(intrusive_ptr<Aspose::Cells::Pivot::PivotTableCollection> pivotTables , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex , Aspose::Cells::System::Int32 rowNumber , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyInColumns(intrusive_ptr<Aspose::Cells::Pivot::PivotTableCollection> pivotTables , Aspose::Cells::System::Int32 sourceColumn , Aspose::Cells::System::Int32 destColumn , Aspose::Cells::System::Int32 colNumber , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotTableCollection> pivotTables , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void InsertRange(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType type);
			void InsertRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 number);
			bool IsUsingPivotCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> SortFieldItemsParas(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> fieldItems);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> SortFieldItemsParas(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> fieldItems , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::System::Object> GetPivotData(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> datafieldname , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> fielditems);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcGETPIVOTDATA(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> datafieldname , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRowResult(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowcol , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> row , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 col);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRowResultFromCol(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowcol , Aspose::Cells::System::Int32 col , Aspose::Cells::System::Int32 index);
			void DeletePivotCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			void InsertColumns(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 number);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRanges();
			intrusive_ptr<Aspose::Cells::Style> GetCellStyle(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , intrusive_ptr<Aspose::Cells::System::String> destCellName , intrusive_ptr<Aspose::Cells::System::String> tableName);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , intrusive_ptr<Aspose::Cells::System::String> destCellName , intrusive_ptr<Aspose::Cells::System::String> tableName , bool useSameSource);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName , bool useSameSource);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::System::String> destCellName , intrusive_ptr<Aspose::Cells::System::String> tableName);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , bool isAutoPage , intrusive_ptr<Aspose::Cells::Pivot::PivotPageFields> pageFields , intrusive_ptr<Aspose::Cells::System::String> destCellName , intrusive_ptr<Aspose::Cells::System::String> tableName);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , bool isAutoPage , intrusive_ptr<Aspose::Cells::Pivot::PivotPageFields> pageFields , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName);
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> GetIndexObject(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void Clear();
			void AddRead(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void Remove(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			void MoveRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rows);
			void MoveColumn(Aspose::Cells::System::Byte columnIndex , Aspose::Cells::System::Byte cols);
			bool HasFilterComboBox(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			bool IsRowFieldLabel(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pt);
			bool IsColumnFieldLabel(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pt);
			 PivotTableCollection();
		public:
			virtual ~PivotTableCollection();
	};

}

}

}
