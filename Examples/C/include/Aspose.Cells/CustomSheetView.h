#pragma once
#include "System/UInt16.h"
#include "System/Int16.h"
#include "CellArea.h"
#include "System/Double.h"
#include "System/Drawing/Color.h"
#include "ViewType.h"
#include "VisibilityType.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Guid.h"
#define STATIC_CUSTOMSHEETVIEW() 

namespace Aspose {
namespace Cells {
class Worksheet;
class SelectionCollection;
class InternalColor;
class PageSetup;
class HorizontalPageBreakCollection;
class Outline;
class VerticalPageBreakCollection;
class CustomWorkbookView;
class AutoFilter;
class PaneCollection;
}
}

namespace Aspose {
namespace Cells {
	class CustomSheetView : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_FirstVisibleRow;
			Aspose::Cells::System::Int32 m_FirstVisibleColumn;
			Aspose::Cells::System::UInt16 m_Window2Option;
			Aspose::Cells::ViewType m_ViewType;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_Zooms;
			Aspose::Cells::System::Byte m_VisibilityOption;
			bool m_RulerVisible;
			Aspose::Cells::System::Int32 m_gridlineColorIndex;
	public:

			Aspose::Cells::Worksheet* sheet;
			 CustomSheetView(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::System::String> PrinterSettingRelId;
			intrusive_ptr<Aspose::Cells::CustomWorkbookView> m_WorkbookView;
			intrusive_ptr<Aspose::Cells::CustomWorkbookView> GetWorkbookView();
			intrusive_ptr<Aspose::Cells::System::String> ExtLst;
			intrusive_ptr<Aspose::Cells::AutoFilter> m_AutoFilter;
			Aspose::Cells::System::Int32 GetAutoFilterCount();
			intrusive_ptr<Aspose::Cells::AutoFilter> GetAutoFilter();
			void SetAutoFilter(intrusive_ptr<Aspose::Cells::AutoFilter> value);
			Aspose::Cells::System::Double NumX;
			Aspose::Cells::System::Double NumY;
			bool HasFirstVisibleRC;
			intrusive_ptr<Aspose::Cells::PaneCollection> m_Panes;
			intrusive_ptr<Aspose::Cells::PaneCollection> GetPanes();
			void SetPanes(intrusive_ptr<Aspose::Cells::PaneCollection> value);
			intrusive_ptr<Aspose::Cells::SelectionCollection> m_Selections;
			intrusive_ptr<Aspose::Cells::SelectionCollection> GetSelections();
			void SetSelections(intrusive_ptr<Aspose::Cells::SelectionCollection> value);
			intrusive_ptr<Aspose::Cells::PageSetup> m_PageSetup;
			intrusive_ptr<Aspose::Cells::PageSetup> GetPageSetup();
			intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> m_hBreaks;
			intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> GetHBreaks();
			void SetHBreaks(intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> value);
			intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> m_vBreaks;
			intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> GetVBreaks();
			void SetVBreaks(intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> value);
			intrusive_ptr<Aspose::Cells::Outline> m_Outline;
			intrusive_ptr<Aspose::Cells::Outline> GetOutline();
			void SetOutline(intrusive_ptr<Aspose::Cells::Outline> value);
			intrusive_ptr<Aspose::Cells::System::Guid> Guid;
			Aspose::Cells::System::Int16 Option;
			intrusive_ptr<Aspose::Cells::CellArea> VisibleArea;
			Aspose::Cells::System::Int32 GetFirstVisibleRow();
			void SetFirstVisibleRow(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetFirstVisibleColumn();
			void SetFirstVisibleColumn(Aspose::Cells::System::Int32 value);
			bool IsHiddenRows();
			void SetIsHiddenRows(bool value);
			bool IsHiddenColumns();
			void SetIsHiddenColumns(bool value);
			bool GetHiddenCellsForFilter();
			void SetHiddenCellsForFilter(bool value);
			bool GetShowPageBreaks();
			void SetShowPageBreaks(bool value);
			bool GetShowFilterIcon();
			void SetShowFilterIcon(bool value);
			bool IsFilter();
			void SetIsFilter(bool value);
			bool IsFilterUnique();
			void SetIsFilterUnique(bool value);
			bool HasPrintArea();
			void SetHasPrintArea(bool value);
			bool GetOnePrintArea();
			void SetOnePrintArea(bool value);
			bool IsSplitV();
			void SetIsSplitV(bool value);
			bool IsSplitH();
			void SetIsSplitH(bool value);
			Aspose::Cells::System::UInt16 GetWindow2Option();
			void SetWindow2Option(Aspose::Cells::System::UInt16 value);
			bool GetShowFormulas();
			void SetShowFormulas(bool value);
			bool IsGridlinesVisible();
			void SetIsGridlinesVisible(bool value);
			bool IsRowColumnHeadersVisible();
			void SetIsRowColumnHeadersVisible(bool value);
			bool IsPaneFrozen();
			void SetIsPaneFrozen(bool value);
			bool IsKeptSplit();
			void SetIsKeptSplit(bool value);
			bool GetDisplayZeros();
			void SetDisplayZeros(bool value);
			bool GetDisplayRightToLeft();
			void SetDisplayRightToLeft(bool value);
			bool IsOutlineShown();
			void SetIsOutlineShown(bool value);
			bool IsSelected();
			void SetIsSelected(bool value);
			bool IsActive();
			void SetIsActive(bool value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetZooms();
			void SetZooms(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> value);
			Aspose::Cells::System::Int32 GetZoom();
			void SetZoom(Aspose::Cells::System::Int32 value);
			Aspose::Cells::ViewType GetViewType();
			void SetViewType(Aspose::Cells::ViewType value);
			Aspose::Cells::System::Byte GetVisibilityOption();
			void SetVisibilityOption(Aspose::Cells::System::Byte value);
			Aspose::Cells::VisibilityType GetVisibilityType();
			void SetVisibilityType(Aspose::Cells::VisibilityType value);
			bool IsPageBreakPreview();
			void SetIsPageBreakPreview(bool value);
			bool IsRulerVisible();
			void SetIsRulerVisible(bool value);
			Aspose::Cells::System::Int32 TabId;
			intrusive_ptr<Aspose::Cells::InternalColor> TabInternalColor;
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetTabColor();
			void SetTabColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			void SetTabColorIndex(Aspose::Cells::System::Int32 colorIndex);
			Aspose::Cells::System::Int32 GetTabColorIndex();
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetGridlineColor();
			void SetGridlineColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::System::Int32 GetGridlineColorIndex();
			void SetGridlineColorIndex(Aspose::Cells::System::Int32 value);
			 CustomSheetView();
		public:
			virtual ~CustomSheetView();
	};

}

}
