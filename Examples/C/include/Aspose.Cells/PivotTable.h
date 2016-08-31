#pragma once
#include "System/Collections/ArrayList.h"
#include "PivotTableAutoFormatType.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/Collections/DictionaryEntry.h"
//#include "System/BitConverter.h"
#include "ShiftType.h"
#include "PivotFieldType.h"
#include "PrintOrderType.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "TableStyleElementType.h"
//#include "System/Collections/IDictionaryEnumerator.h"
#include "System/Int32.h"
#include "System/Int16.h"
//#include "System/Int32Helper.h"
#include "PivotTableStyleType.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/ICollection.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Collections/CollectionBase.h"
#include "System/DateTime.h"
//#include "System/Text/StringBuilder.h"
//#include "System/ArgumentException.h"
//#include "System/Exception.h"
#include "PivotMissingItemLimitType.h"
#define STATIC_PIVOTTABLE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeOperatorCompare;
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
class PivotFilterCollection;
class PivotFieldCollection;
class SxFilt;
class SxViewEx9;
class PivotCalculator;
class SxEX;
class PivotFormatConditionCollection;
class SxFormatCollection;
class PivotTableCollection;
class PivotCalculatedItem;
class PivotField;
class SxView;
class PivotAdditionalInfos;
class SxLiNode;
class PivotXfCollection;
class SxTag;
class PivotCalculateItems;
}
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyle;
}
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}
namespace Aspose {
namespace Cells {
class CellArea;
class Cell;
class CopyOptions;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotTable : public Aspose::Cells::System::Object
#else	class PivotTable : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool _isExcel2003Compatible;
			void InitLocation();
			bool DeleteNonExistentItem(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> keepItems);
			Aspose::Cells::System::Int32 GetItemDataIndex(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> keepItems , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> usedIndexArr);
			intrusive_ptr<Aspose::Cells::System::Object> m_pivotTableStyle;
			void ApplyStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Style> newStyle);
			void SetStyle(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::Tables::TableStyleElementType type);
			bool m_hasBlankRows;
			bool _enableFieldList;
			intrusive_ptr<Aspose::Cells::System::String> m_columnHeaderCaption;
			intrusive_ptr<Aspose::Cells::System::String> m_rowHeaderCaption;
			void RefreshRelativeSliceCaches();
			void RefreshConditionalFormats();
			bool RemoveOutofIndex(intrusive_ptr<Aspose::Cells::Pivot::SxFilt> filt);
			void RefreshSxFormats();
			bool IsOutofIndex(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> itemIndexes , Aspose::Cells::System::Int32 dataMaxIndex);
			void RefreshItems();
			Aspose::Cells::System::Int32 FindCalcItemPostionIndex(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::System::Int32 itemIndex , intrusive_ptr<Aspose::Cells::Pivot::PivotCalculateItems> calcItems);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetCalcItemRefMap(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> calcItem , intrusive_ptr<Aspose::Cells::Pivot::PivotCalculateItems> calcItems);
			void ParseAtomicFormula(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculateItems> calcItems);
			bool IsCanChangeToAtomicItem(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> atomsMap , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> atomicBools);
			bool HasNotAtomicItem(intrusive_ptr<Aspose::Cells::System::Array1D<bool>> atomicBools);
			Aspose::Cells::System::Byte m_styleOption;
			void WriteKeeped(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
	public:

			Aspose::Cells::Pivot::PivotTableCollection* _u_pivotTables;
			intrusive_ptr<Aspose::Cells::Pivot::SxView> _sxView;
			intrusive_ptr<Aspose::Cells::Pivot::SxEX> _sxEx;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> _pivotCache;
			intrusive_ptr<Aspose::Cells::Pivot::SxViewEx9> _pivotFormat;
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> _dataPivotField;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _rowSxLi;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _columnSxLi;
			Aspose::Cells::System::Int32 _row;
			Aspose::Cells::System::Int32 _lastRow;
			Aspose::Cells::System::Int32 _column;
			Aspose::Cells::System::Int32 _lastColumn;
			Aspose::Cells::System::Int32 firstHeaderRow;
			Aspose::Cells::System::Int32 firstDataRow;
			Aspose::Cells::System::Int32 firstDataCol;
			Aspose::Cells::System::Int32 rowPageCount;
			Aspose::Cells::System::Int32 colPageCount;
			bool _refreshDataFlag;
			bool _doneSxLi;
			bool _isDropZones;
			bool _isCompact;
			bool _isCompactData;
			bool _isOutline;
			bool _isOutlineData;
			bool _hasUpdatedVersion;
			Aspose::Cells::System::Int32 _updatedVersion;
			bool _hasCreatedVersion;
			Aspose::Cells::System::Int32 _createdVersion;
			Aspose::Cells::System::Int32 _indent;
			bool _isShowHeaders;
			bool _isCustomListSort;
			bool _isMultipleFieldFilters;
			bool _showDataTips;
			bool _showMemberPropertyTips;
			bool _isShowDrill;
			bool _isHideValuesRow;
			bool _showEmptyCol;
			bool _showEmptyRow;
			bool _fieldListSortAscending;
			bool _printDrill;
			bool _enableDataValueEditing;
			intrusive_ptr<Aspose::Cells::System::String> _altText;
			intrusive_ptr<Aspose::Cells::System::String> _altTextSummary;
			intrusive_ptr<Aspose::Cells::System::String> _keepURI;
			intrusive_ptr<Aspose::Cells::System::String> _keepPivotHierarchies;
			Aspose::Cells::System::Int32 _hierarchiesCount;
			Aspose::Cells::System::Int32 _colHierarchiesUsageCount;
			Aspose::Cells::System::Int32 _rowHierarchiesUsageCount;
			intrusive_ptr<Aspose::Cells::System::String> _keepRowHierarchiesUsage;
			intrusive_ptr<Aspose::Cells::System::String> _keepcolHierarchiesUsage;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Keeped;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> XlsbKept;
			intrusive_ptr<Aspose::Cells::Pivot::SxTag> _sxTag;
			Aspose::Cells::System::Int32 _cacheId;
			intrusive_ptr<Aspose::Cells::Pivot::PivotAdditionalInfos> _additionalInfos;
			intrusive_ptr<Aspose::Cells::Pivot::PivotXfCollection> pivotStyles;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> _mainStyleCache;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> _pageStyleCache;
			bool _isSet07Style;
			intrusive_ptr<Aspose::Cells::Pivot::SxFormatCollection> _formats;
			bool HasCalculateStyle;
			intrusive_ptr<Aspose::Cells::Pivot::PivotFilterCollection> _filters;
			intrusive_ptr<Aspose::Cells::Pivot::PivotFormatConditionCollection> _pivotFcs;
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> _filterField;
			bool IsExcel2003Compatible();
			void SetIsExcel2003Compatible(bool value);
			void CalculateStyle();
			bool IsReaded();
			void InitPivotFields(intrusive_ptr<Aspose::Cells::CellArea> ca);
			Aspose::Cells::System::Int32 GetNullItemIndex(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			void InitPivotItemsFromCache();
			 PivotTable(intrusive_ptr<Aspose::Cells::Pivot::PivotTableCollection> pivotTables , intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int16 column , intrusive_ptr<Aspose::Cells::System::String> tableName);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CalculateRowItemPosition(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 FindFieldPosition(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> FindItemPosition(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> criteria , bool isCol , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> FindItemPosition(intrusive_ptr<Aspose::Cells::System::Object> item , bool isCol);
			Aspose::Cells::System::Int32 FindGrandTotal(Aspose::Cells::System::Int32 dataFieldIndex);
			Aspose::Cells::System::Int32 FindSubtotal(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 fieldIndex);
			 PivotTable(intrusive_ptr<Aspose::Cells::Pivot::PivotTableCollection> pivotTables);
			intrusive_ptr<Aspose::Cells::Tables::TableStyle> GetPivotTableStyle();
			void SetPivotTableStyle(intrusive_ptr<Aspose::Cells::Tables::TableStyle> value);
			intrusive_ptr<Aspose::Cells::System::String> GetPivotTableStyleName();
			void SetPivotTableStyleName(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::Pivot::PivotTableStyleType GetPivotTableStyleType();
			void SetPivotTableStyleType(Aspose::Cells::Pivot::PivotTableStyleType value);
			intrusive_ptr<Aspose::Cells::Style> GetCellStyle(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 colIndex);
			void CopyRows(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , Aspose::Cells::System::Int32 destinationRowIndex , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyColumns(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , Aspose::Cells::System::Int32 destinationColIndex , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyStyle(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void CopyStyle(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			bool HasSpace();
			void InitSxLis();
			intrusive_ptr<Aspose::Cells::Pivot::SxLiNode> InitSxLi(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> pageItems , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> otherFields , bool isRow);
			void GatherSxLi(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> c8 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> allIndex , Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Pivot::SxLiNode> parent);
			void RemoveBaseField(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void RemoveField(Aspose::Cells::Pivot::PivotFieldType fieldType , intrusive_ptr<Aspose::Cells::System::String> fieldName);
			void RemoveField(Aspose::Cells::Pivot::PivotFieldType fieldType , Aspose::Cells::System::Int32 baseFieldIndex);
			void RemoveField(Aspose::Cells::Pivot::PivotFieldType fieldType , intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			Aspose::Cells::System::Int32 AddFieldToArea(Aspose::Cells::Pivot::PivotFieldType fieldType , intrusive_ptr<Aspose::Cells::System::String> fieldName);
			Aspose::Cells::System::Int32 AddFieldToArea(Aspose::Cells::Pivot::PivotFieldType fieldType , Aspose::Cells::System::Int32 baseFieldIndex);
			Aspose::Cells::System::Int32 AddFieldToArea(Aspose::Cells::Pivot::PivotFieldType fieldType , intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void AddCalculatedField(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula , bool dragToDataArea);
			void AddCalculatedField(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> Fields(Aspose::Cells::Pivot::PivotFieldType fieldType);
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> GetColumnFields();
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> GetRowFields();
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> GetPageFields();
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> GetDataFields();
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> GetDataField();
			intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> GetBaseFields();
			intrusive_ptr<Aspose::Cells::Pivot::PivotFilterCollection> GetPivotFilters();
			Aspose::Cells::System::Int32 GetNumberOfRowData();
			Aspose::Cells::System::Int32 GetNumberOfColumnData();
			intrusive_ptr<Aspose::Cells::CellArea> GetColumnRange();
			intrusive_ptr<Aspose::Cells::CellArea> GetRowRange();
			intrusive_ptr<Aspose::Cells::CellArea> GetDataBodyRange();
			intrusive_ptr<Aspose::Cells::CellArea> GetTableRange1();
			intrusive_ptr<Aspose::Cells::CellArea> GetTableRange2();
			void Move(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void Move(intrusive_ptr<Aspose::Cells::System::String> destCellName);
			bool GetColumnGrand();
			void SetColumnGrand(bool value);
			bool IsGridDropZones();
			void SetIsGridDropZones(bool value);
			bool GetRowGrand();
			void SetRowGrand(bool value);
			bool GetDisplayNullString();
			void SetDisplayNullString(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetNullString();
			void SetNullString(intrusive_ptr<Aspose::Cells::System::String> value);
			bool GetDisplayErrorString();
			void SetDisplayErrorString(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetErrorString();
			void SetErrorString(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsAutoFormat();
			void SetIsAutoFormat(bool value);
			bool IsTableFormatTyle();
			void SetInternalAutoFormatType(Aspose::Cells::Pivot::PivotTableAutoFormatType autoFormatType);
			Aspose::Cells::Pivot::PivotTableAutoFormatType GetAutoFormatType();
			void SetAutoFormatType(Aspose::Cells::Pivot::PivotTableAutoFormatType value);
			bool HasBlankRows();
			void SetHasBlankRows(bool value);
			bool GetMergeLabels();
			void SetMergeLabels(bool value);
			bool GetPreserveFormatting();
			void SetPreserveFormatting(bool value);
			bool GetShowDrill();
			void SetShowDrill(bool value);
			bool GetEnableDrilldown();
			void SetEnableDrilldown(bool value);
			bool GetEnableFieldDialog();
			void SetEnableFieldDialog(bool value);
			bool GetEnableFieldList();
			void SetEnableFieldList(bool value);
			bool GetEnableWizard();
			void SetEnableWizard(bool value);
			bool GetSubtotalHiddenPageItems();
			void SetSubtotalHiddenPageItems(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetGrandTotalName();
			void SetGrandTotalName(intrusive_ptr<Aspose::Cells::System::String> value);
			bool GetManualUpdate();
			void SetManualUpdate(bool value);
			bool IsMultipleFieldFilters();
			void SetIsMultipleFieldFilters(bool value);
			Aspose::Cells::Pivot::PivotMissingItemLimitType GetMissingItemsLimit();
			void SetMissingItemsLimit(Aspose::Cells::Pivot::PivotMissingItemLimitType value);
			bool GetEnableDataValueEditing();
			void SetEnableDataValueEditing(bool value);
			bool GetShowDataTips();
			void SetShowDataTips(bool value);
			bool GetShowMemberPropertyTips();
			void SetShowMemberPropertyTips(bool value);
			bool GetShowValuesRow();
			void SetShowValuesRow(bool value);
			bool GetShowEmptyCol();
			void SetShowEmptyCol(bool value);
			bool GetShowEmptyRow();
			void SetShowEmptyRow(bool value);
			bool GetFieldListSortAscending();
			void SetFieldListSortAscending(bool value);
			bool GetPrintDrill();
			void SetPrintDrill(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetAltTextTitle();
			void SetAltTextTitle(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetAltTextDescription();
			void SetAltTextDescription(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetColumnHeaderCaption();
			void SetColumnHeaderCaption(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetIndent();
			void SetIndent(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetRowHeaderCaption();
			void SetRowHeaderCaption(intrusive_ptr<Aspose::Cells::System::String> value);
			bool GetShowRowHeaderCaption();
			void SetShowRowHeaderCaption(bool value);
			bool GetCustomListSort();
			void SetCustomListSort(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetPageFieldStyle();
			void SetPageFieldStyle(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetTableStyle();
			void SetTableStyle(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetVacatedStyle();
			void SetVacatedStyle(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Pivot::PivotFormatConditionCollection> GetPivotFormatConditions();
			Aspose::Cells::PrintOrderType GetPageFieldOrder();
			void SetPageFieldOrder(Aspose::Cells::PrintOrderType value);
			Aspose::Cells::System::Int32 GetPageFieldWrapCount();
			void SetPageFieldWrapCount(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetTag();
			void SetTag(intrusive_ptr<Aspose::Cells::System::String> value);
			bool GetSaveData();
			void SetSaveData(bool value);
			bool GetRefreshDataOnOpeningFile();
			void SetRefreshDataOnOpeningFile(bool value);
			bool GetRefreshDataFlag();
			void SetRefreshDataFlag(bool value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetDataSource();
			void SetDataSource(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> value);
			void ChangeDataSource(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> source);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSource();
			void RefreshData();
			void CalculateData();
			void ClearData();
			void CalculateRange();
			void FormatAll(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Pivot::PivotCalculator> pc;
			void Format(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 PreviousPageFieldCount;
			bool IsCalculated;
			bool InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows);
			bool InsertColumns(Aspose::Cells::System::Int32 colIndex , Aspose::Cells::System::Int32 totalColumns);
			bool InsertRange(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType type);
			bool GetItemPrintTitles();
			void SetItemPrintTitles(bool value);
			bool GetPrintTitles();
			void SetPrintTitles(bool value);
			bool GetDisplayImmediateItems();
			void SetDisplayImmediateItems(bool value);
			bool IsSelected();
			void SetIsSelected(bool value);
			Aspose::Cells::System::Byte GetStyleOption();
			void SetStyleOption(Aspose::Cells::System::Byte value);
			bool GetShowPivotStyleRowHeader();
			void SetShowPivotStyleRowHeader(bool value);
			bool GetShowPivotStyleColumnHeader();
			void SetShowPivotStyleColumnHeader(bool value);
			bool GetShowPivotStyleRowStripes();
			void SetShowPivotStyleRowStripes(bool value);
			bool GetShowPivotStyleColumnStripes();
			void SetShowPivotStyleColumnStripes(bool value);
			bool GetShowPivotStyleLastColumn();
			void SetShowPivotStyleLastColumn(bool value);
			void SetAutoGroupField(Aspose::Cells::System::Int32 baseFieldIndex);
			void SetAutoGroupField(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void SetManualGroupField(Aspose::Cells::System::Int32 baseFieldIndex , Aspose::Cells::System::Double startVal , Aspose::Cells::System::Double endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Double intervalNum);
			void SetManualGroupField(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField , Aspose::Cells::System::Double startVal , Aspose::Cells::System::Double endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Double intervalNum);
			void SetManualGroupField(Aspose::Cells::System::Int32 baseFieldIndex , intrusive_ptr<Aspose::Cells::System::DateTime> startVal , intrusive_ptr<Aspose::Cells::System::DateTime> endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Int32 intervalNum);
			void SetManualGroupField(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField , intrusive_ptr<Aspose::Cells::System::DateTime> startVal , intrusive_ptr<Aspose::Cells::System::DateTime> endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Int32 intervalNum);
			void SetUngroup(Aspose::Cells::System::Int32 baseFieldIndex);
			void SetUngroup(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void Write(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteBaseFields(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteFields(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetHorizontalBreaks();
			bool GetShowInCompact();
			void ShowInCompactForm();
			bool GetShowInOutline();
			void ShowInOutlineForm();
			bool GetShowInTabular();
			void ShowInTabularForm();
			intrusive_ptr<Aspose::Cells::Cell> GetCellByDisplayName(intrusive_ptr<Aspose::Cells::System::String> displayName);
			 PivotTable();
		public:
			virtual ~PivotTable();
	};

}

}

}
