#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Char.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Int64.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
//#include "System/Drawing/Color.h"
//#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "PivotFieldType.h"
//#include "System/Boolean.h"
//#include "System/Exception.h"
//#include "System/Math.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
//#include "System/Collections/SortedList.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/DateTime.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/ICollection.h"
//#include "System/Text/StringBuilder.h"
#define STATIC_PIVOTCALCULATOR() 

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
class PivotFieldCollection;
class PivotItem;
class SxLiItem;
class PivotItemCollection;
class PivotCalculatedItem;
class PivotField;
class PivotTable;
class PivotItemNode;
class PivotCalculateItems;
}
}
}
namespace Aspose {
namespace Cells {
class Worksheet;
class Border;
class CellArea;
class Cell;
class Cells;
class Style;
class AutoFilter;
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCalculator : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> Flags;
			bool hasPivotCacluateItem;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> RowCalculateItemFlags;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> ColumnCalculateItemFlags;
			bool hasRowCalcultedItem;
			bool hasColumnCalculatedItem;
			void InitTable();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SetChartXValuesParseData(intrusive_ptr<Aspose::Cells::System::String>& numberFormat);
			intrusive_ptr<Aspose::Cells::System::String> CreateRef(bool isRange , intrusive_ptr<Aspose::Cells::System::String> sheetName , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			void SetEmptyTableStyle();
			void CleanPivotTableStyle();
			void SetRowFieldCaption(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , Aspose::Cells::System::Int32 i , intrusive_ptr<Aspose::Cells::Cell> cell , bool showCompact , bool showInoutline);
			void CreateData();
			intrusive_ptr<Aspose::Cells::System::Object> GetDisplayItem(intrusive_ptr<Aspose::Cells::Pivot::PivotItem> item);
			Aspose::Cells::System::Int32 GetCompactFieldCount(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , Aspose::Cells::System::Int32 index);
			void CreateRowHeader(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Style> GetDateTimeStyle(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::Pivot::PivotItem> item);
			void CreateColumnHeader(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			bool CheckPivotCalculatedItem(intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> item , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> GetDataField(intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> rowItem , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> columnItem);
			void CreateRowDataWithCalcuatedItem(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> rowItem , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8);
			intrusive_ptr<Aspose::Cells::System::Object> FillValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			void CreateRowData(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> rowItem , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8);
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> pivotDatasWithCalcItems;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> FilterC8RecordsByCalcItem(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8Records , intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateItemFunction(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> calcItem , intrusive_ptr<Aspose::Cells::Pivot::PivotCalculateItems> calcItems , Aspose::Cells::System::Int32 currentIndex , intrusive_ptr<Aspose::Cells::Pivot::PivotField> dataField , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8Records);
			intrusive_ptr<Aspose::Cells::Pivot::PivotCalculateItems> FindCalculationItems(intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> sxli , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
			intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> FindCalculationItem(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::System::Int32 index);
			bool ContainsCalculationItem(intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> sxli , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> currentSxLis;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> currentSxLiNodes;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> currentSxLiNodesForFormat;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowSxLiNodes;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> columnSxLiNodes;
			void AddSxLi(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli);
			void AddSxLi(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8);
			Aspose::Cells::System::Int32 GetPivotStyleType();
			bool IsShowCalcItem(intrusive_ptr<Aspose::Cells::Pivot::PivotItemCollection> pItems);
			bool IsShowAllPivotItems(intrusive_ptr<Aspose::Cells::Pivot::PivotItemCollection> pItems);
			bool IsNeedDeleteNode(intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> item , Aspose::Cells::Pivot::PivotFieldType type);
			void CreateSxLis(intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> root , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli , Aspose::Cells::System::Int32 level , bool hasPivotDataField);
			void AddMultiGrandSubtotals(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
			void AddMultiSubtotalsSpecificType(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli , Aspose::Cells::System::Int32 level);
			void AddMultiSubtotals(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli , Aspose::Cells::System::Int32 level , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void AddSubtotals(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxli , Aspose::Cells::System::Int32 level , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8);
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> CalculatePivotPageFields();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> CalculatePivotPageFieldsForStyle();
			void SetBorderColor(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Border> border , Aspose::Cells::System::Int32 colorIndex);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetAdditionalFieldGroupItemIndexList(Aspose::Cells::System::Int32 i , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::Pivot::PivotItem> item , Aspose::Cells::System::Int32 groupBaseIndex);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetBaseFieldGroupItemIndexList(Aspose::Cells::System::Int32 i , intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::Pivot::PivotItem> item);
			void CreateNodes(intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> parentNode , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , Aspose::Cells::System::Int32 level , bool cleanC8);
			Aspose::Cells::System::Int32 GetUnhiddenItemCount(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Cell*>> GetPageNameValueCell(intrusive_ptr<Aspose::Cells::CellArea> pageArea , Aspose::Cells::System::Int32 fieldPosition);
			void SetPivotPageField();
			intrusive_ptr<Aspose::Cells::CellArea> GetPageArea();
			void ClearPivotData();
			void SortFieldsSelf();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> SortFieldSlef(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void SelectTop10(intrusive_ptr<Aspose::Cells::Pivot::PivotField> dataField , intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> parentItemNode , bool IsTop , Aspose::Cells::System::Int32 items);
			void SelectValueFilter(intrusive_ptr<Aspose::Cells::Pivot::PivotField> dataField , intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> parentItemNode , intrusive_ptr<Aspose::Cells::AutoFilter> filter);
			void SortNode(intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> parentItemNode , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , Aspose::Cells::System::Int32 level);
			bool IsEndSutotals(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
			void SetMainAreaCellStyle(intrusive_ptr<Aspose::Cells::Cell> cell);
			void SetPageAreaCellStyle(intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::System::Int32 pageStylePos1 , Aspose::Cells::System::Int32 pageStylePos2);
	public:

			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> m_PivotTable;
			intrusive_ptr<Aspose::Cells::Cells> cells;
			intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> RowRootNode;
			intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> ColumnRootNode;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _c8;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> _pageCondition;
			Aspose::Cells::Pivot::PivotFieldType multiDataType;
			Aspose::Cells::System::Int32 multiDataLevel;
			bool IsTable;
			bool IsEmptyTable;
			bool HasHeaderData;
			Aspose::Cells::System::Int32 rowRangeCount;
			bool IsCalField;
			Aspose::Cells::System::Int32 startIndex;
			Aspose::Cells::System::Int32 calColumnItemIndex;
			bool IsCalItem;
			Aspose::Cells::System::Int32 rowFieldsCount;
			Aspose::Cells::System::Int32 columnFieldsCount;
			Aspose::Cells::System::Int32 dataFieldsCount;
			Aspose::Cells::System::Int32 pageFieldsCount;
			 PivotCalculator(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 PivotCalculator(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void FormatAll(intrusive_ptr<Aspose::Cells::Style> style);
			void Format(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::Style> style);
			void CalculateData();
			void CalculateRanges();
			void CalculateStyles();
			intrusive_ptr<Aspose::Cells::System::Object> GetValueInCalculatedItem(Aspose::Cells::System::Int32 sxNameIndex);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowSxLiNodesForFormat;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> columnSxLiNodesForFormat;
			void CreateSxLiRecords();
			void CreateRanges();
			bool IsUsedByCalculateItem(Aspose::Cells::System::Int32 baseIndex , Aspose::Cells::System::Int32 itemIndex);
			void GetKeepedC8();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SelectCalcuatedItemC8(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8 , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> sxliItem , bool isMultiData , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SelectC8(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8 , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> sxliItem , bool isMultiData , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SelectC8(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8 , Aspose::Cells::System::Int32 field , Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> _sortColumnSelfs;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> _sortRowSelfs;
			static bool isSortFieldSelf;
			void CreateRootNodes();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> GetPageCondition(Aspose::Cells::System::Int32 conditionCount);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateItem(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8Records , bool ignore , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> rowItem , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> columnItem);
			intrusive_ptr<Aspose::Cells::System::Object> GetValueInCalculatedField(Aspose::Cells::System::Int32 sxNameIndex);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValueInCalculatedField(Aspose::Cells::System::Int32 sxNameIndex , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalculateFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateFunction(intrusive_ptr<Aspose::Cells::Pivot::PivotItem> rowItem , intrusive_ptr<Aspose::Cells::Pivot::PivotItem> columnItem , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> c8Records , bool ignore , intrusive_ptr<Aspose::Cells::Pivot::PivotField> dataField , Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> item);
			 PivotCalculator();
		public:
			virtual ~PivotCalculator();
	};

}

}

}
