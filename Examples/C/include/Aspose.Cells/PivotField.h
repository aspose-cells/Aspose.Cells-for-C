#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int16.h"
#include "PivotFieldSubtotalType.h"
#include "PivotFieldDataDisplayFormat.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "ConsolidationFunction.h"
#include "System/Array1D.h"
#include "PivotFieldType.h"
//#include "System/UInt16.h"
#include "PivotFilterType.h"
#include "System/String.h"
#include "System/Int32.h"
#include "PivotItemPosition.h"
#define STATIC_PIVOTFIELD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
class SxPI;
class PivotItemCollection;
class PivotFilter;
class SxVD;
class SxRule;
class SxFDB;
class SxRng;
class PivotFieldCollection;
class SxDI;
class SxVDEx;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotField : public Aspose::Cells::System::Object
#else	class PivotField : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_ShowCompact;
	public:

			Aspose::Cells::Pivot::PivotFieldCollection* _u_pivotFields;
			intrusive_ptr<Aspose::Cells::Pivot::SxVD> _sxVd;
			intrusive_ptr<Aspose::Cells::Pivot::SxVDEx> _sxVdEx;
			intrusive_ptr<Aspose::Cells::Pivot::PivotItemCollection> _pivotItems;
			intrusive_ptr<Aspose::Cells::Pivot::SxRule> _autoSortScopeRule;
			Aspose::Cells::System::Int32 _showItemCount;
			intrusive_ptr<Aspose::Cells::Pivot::PivotItemCollection> GetPivotItems();
			intrusive_ptr<Aspose::Cells::Pivot::SxRng> GetRange();
			void ClearInternalGroupRange();
			void CreateOnlyNullItem();
			intrusive_ptr<Aspose::Cells::Pivot::PivotFilter> GetPivotFilterByType(Aspose::Cells::Pivot::PivotFilterType type);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetPivotFilters();
			intrusive_ptr<Aspose::Cells::Pivot::SxFDB> _sxFDB;
			intrusive_ptr<Aspose::Cells::Pivot::SxDI> _sxDi;
			intrusive_ptr<Aspose::Cells::Pivot::SxPI> _sxPi;
			Aspose::Cells::Pivot::PivotField* _baseField;
			Aspose::Cells::Pivot::PivotTable* _u_pivotTable;
			Aspose::Cells::Pivot::PivotFieldType _fieldType;
			bool _isMultipleItemSelectionAllowed;
			bool _isAllDrilled;
			bool _isDataSourceSort;
			bool _isRepeatItemLabels;
			bool _isIncludeNewItemsInFilter;
			intrusive_ptr<Aspose::Cells::System::String> _keepURI;
			Aspose::Cells::System::Int32 _index;
			bool _isData;
			 PivotField(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> dataFields);
			 PivotField(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> pivotFields);
			 PivotField(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> pivotFields , intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			 PivotField();
			bool HasAutoFormatSubtotal();
			bool HasSpaceRow();
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			Aspose::Cells::System::Int32 GetIndex();
			void SetIndex(Aspose::Cells::System::Int32 value);
			void InitPivotItems();
			void InitPivotItemsFromGroupData();
			void ClearPivotItems();
			void KeepPivotItemsValue();
			bool IsWholeDataNumber();
			bool IsData();
			void SetIsData(bool value);
			bool IsCalculatedField();
			intrusive_ptr<Aspose::Cells::System::String> GetCalculatedFieldFormula();
			bool IsPivotDataField();
			Aspose::Cells::System::Int32 GetBaseIndex();
			void SetBaseIndex(Aspose::Cells::System::Int32 value);
			void SetInternalBaseIndex(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetPosition();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			bool IsInDataArea();
			intrusive_ptr<Aspose::Cells::System::String> GetDisplayName();
			void SetDisplayName(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetSubtotals(Aspose::Cells::Pivot::PivotFieldSubtotalType subtotalType , bool shown);
			bool GetSubtotals(Aspose::Cells::Pivot::PivotFieldSubtotalType subtotalType);
			bool GetInternalSubtotals(Aspose::Cells::System::Int32 subtotalType);
			bool IsNoneSubtotals();
			bool IsAutoSubtotals();
			void SetIsAutoSubtotals(bool value);
			bool GetDragToColumn();
			void SetDragToColumn(bool value);
			bool GetDragToHide();
			void SetDragToHide(bool value);
			bool GetDragToRow();
			void SetDragToRow(bool value);
			bool GetDragToPage();
			void SetDragToPage(bool value);
			bool GetDragToData();
			void SetDragToData(bool value);
			bool IsMultipleItemSelectionAllowed();
			void SetIsMultipleItemSelectionAllowed(bool value);
			bool IsRepeatItemLabels();
			void SetIsRepeatItemLabels(bool value);
			bool IsIncludeNewItemsInFilter();
			void SetIsIncludeNewItemsInFilter(bool value);
			bool IsInsertPageBreaksBetweenItems();
			void SetIsInsertPageBreaksBetweenItems(bool value);
			bool GetShowAllItems();
			void SetShowAllItems(bool value);
			bool IsAutoSort();
			void SetIsAutoSort(bool value);
			bool IsAscendSort();
			void SetIsAscendSort(bool value);
			Aspose::Cells::System::Int32 GetAutoSortField();
			void SetAutoSortField(Aspose::Cells::System::Int32 value);
			bool IsAutoShow();
			void SetIsAutoShow(bool value);
			bool IsAscendShow();
			void SetIsAscendShow(bool value);
			Aspose::Cells::System::Int32 GetAutoShowCount();
			void SetAutoShowCount(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetAutoShowField();
			void SetAutoShowField(Aspose::Cells::System::Int32 value);
			Aspose::Cells::ConsolidationFunction GetFunction();
			void SetFunction(Aspose::Cells::ConsolidationFunction value);
			Aspose::Cells::Pivot::PivotFieldDataDisplayFormat GetDataDisplayFormat();
			void SetDataDisplayFormat(Aspose::Cells::Pivot::PivotFieldDataDisplayFormat value);
			Aspose::Cells::System::Int32 GetBaseField();
			void SetBaseField(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetBaseFieldIndex();
			void SetBaseFieldIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::Pivot::PivotItemPosition GetBaseItemPosition();
			void SetBaseItemPosition(Aspose::Cells::Pivot::PivotItemPosition value);
			Aspose::Cells::System::Int32 GetBaseItem();
			void SetBaseItem(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetBaseItemIndex();
			void SetBaseItemIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int16 GetCurrentPageItem();
			void SetCurrentPageItem(Aspose::Cells::System::Int16 value);
			Aspose::Cells::System::Int32 GetNumber();
			void SetNumber(Aspose::Cells::System::Int32 value);
			bool GetInsertBlankRow();
			void SetInsertBlankRow(bool value);
			bool GetShowSubtotalAtTop();
			void SetShowSubtotalAtTop(bool value);
			bool GetShowInOutlineForm();
			void SetShowInOutlineForm(bool value);
			void SetInternalNumber(Aspose::Cells::System::Int32 number);
			intrusive_ptr<Aspose::Cells::System::String> GetNumberFormat();
			void SetNumberFormat(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsHiddenItem(Aspose::Cells::System::Int32 index);
			void HideItem(Aspose::Cells::System::Int32 index , bool isHidden);
			bool IsHiddenItemDetail(Aspose::Cells::System::Int32 index);
			void HideItemDetail(Aspose::Cells::System::Int32 index , bool isHiddenDetail);
			void HideDetail(bool isHiddenDetail);
			void HideItem(intrusive_ptr<Aspose::Cells::System::String> itemValue , bool isHidden);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetItems();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetOriginalItems();
			Aspose::Cells::System::Int32 GetItemCount();
			void AddCalculatedItem(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula);
			bool HasCalclatedFormula();
			Aspose::Cells::System::Int32 GetCountOfSubtotals();
			bool GetShowCompact();
			void SetShowCompact(bool value);
			void CheckInvalidOperation();
			Aspose::Cells::System::Int32 GetSxFDBIndex();
		public:
			virtual ~PivotField();
	};

}

}

}
