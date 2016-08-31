#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Text/StringBuilder.h"
#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "System/UInt16.h"
#include "VisibilityType.h"
//#include "System/Array.h"
#include "SheetType.h"
#include "System/Drawing/Color.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/ArgumentException.h"
#include "System/Object.h"
#include "System/Byte.h"
//#include "System/Exception.h"
//#include "System/GC.h"
#include "System/Int32.h"
#include "System/Int16.h"
//#include "System/Boxing.h"
#include "ViewType.h"
//#include "System/Collections/CollectionBase.h"
//#include "System/StringHelperPal.h"
//#include "System/Int32Helper.h"
#define STATIC_WORKSHEET() 

namespace Aspose {
namespace Cells {
namespace Properties {
class CustomPropertyCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace Record {
class SortRecord;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepSheet;
}
}
}
namespace Aspose {
namespace Cells {
namespace Markup {
class SmartTagSetting;
}
}
}
namespace Aspose {
namespace Cells {
class SelectionCollection;
class ErrorCheckOptionCollection;
class Workbook;
class ConditionalFormattingCollection;
class Outline;
class CopyOptions;
class ValidationCollection;
class Protection;
class HorizontalPageBreakCollection;
class ScenarioCollection;
class ICustomFunction;
class Font;
class WorksheetCollection;
class InternalColor;
class HyperlinkCollection;
class QueryTableCollection;
class Cells;
class PageSetup;
class VerticalPageBreakCollection;
class CustomSheetViewCollection;
class CalculationOptions;
class PaneCollection;
class AutoFilter;
class ProtectedRangeCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObjectCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTableCollection;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Worksheet : public Aspose::Cells::System::Object
#else	class Worksheet : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::SheetType type;
			intrusive_ptr<Aspose::Cells::System::String> sheetName;
			intrusive_ptr<Aspose::Cells::Cells> cells;
			intrusive_ptr<Aspose::Cells::PaneCollection> panes;
			intrusive_ptr<Aspose::Cells::Protection> m_Protection;
			Aspose::Cells::System::Int32 selectedSheetIndex;
			Aspose::Cells::WorksheetCollection* sheets;
			Aspose::Cells::System::UInt16 m_Window2Option;
			intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> m_ListObjects;
			Aspose::Cells::System::Int32 sheetIndex;
			void FindFont(intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> fontObjList , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> skipHash);
			void CopySelectionList(intrusive_ptr<Aspose::Cells::Worksheet> sourceSheet);
			void CopySettings(intrusive_ptr<Aspose::Cells::Worksheet> source);
			intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter;
			Aspose::Cells::System::Byte m_VisibilityOption;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> qsiList;
			intrusive_ptr<Aspose::Cells::Record::SortRecord> sort;
			intrusive_ptr<Aspose::Cells::SelectionCollection> selectionList;
			intrusive_ptr<Aspose::Cells::ValidationCollection> m_Validations;
			intrusive_ptr<Aspose::Cells::ProtectedRangeCollection> m_AllowEditRanges;
			intrusive_ptr<Aspose::Cells::Outline> m_Outline;
			Aspose::Cells::System::Int32 m_FirstVisibleRow;
			Aspose::Cells::System::Int32 m_FirstVisibleColumn;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_Zooms;
			bool m_RulerVisible;
			Aspose::Cells::System::Int32 m_gridlineColorIndex;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_ReadBackgroundBitmaps;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_BackgroundBitmap;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> xmlMapList;
			intrusive_ptr<Aspose::Cells::Properties::CustomPropertyCollection> m_CustomProperties;
			intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> m_SmartTagSetting;
	public:

			void Dispose();
			intrusive_ptr<Aspose::Cells::Protection> GetProtection();
			intrusive_ptr<Aspose::Cells::Protection> GetInternalProtection();
			void SetInternalProtection(intrusive_ptr<Aspose::Cells::Protection> protection);
			intrusive_ptr<Aspose::Cells::PaneCollection> GetPaneCollection();
			intrusive_ptr<Aspose::Cells::PaneCollection> GetPanes();
			void SetSelectedIndex(Aspose::Cells::System::Int32 index);
			 Worksheet(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 Worksheet(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> sheetName);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			intrusive_ptr<Aspose::Cells::Workbook> GetWorkbook();
			intrusive_ptr<Aspose::Cells::Cells> GetCells();
			intrusive_ptr<Aspose::Cells::QueryTableCollection> queryTables;
			intrusive_ptr<Aspose::Cells::QueryTableCollection> GetQueryTables();
			intrusive_ptr<Aspose::Cells::Pivot::PivotTableCollection> pivotTables;
			intrusive_ptr<Aspose::Cells::Pivot::PivotTableCollection> GetPivotTables();
			Aspose::Cells::System::Int32 m_MaxPriority;
			Aspose::Cells::System::Int32 GetMaxPriority();
			void SetMaxPriority(Aspose::Cells::System::Int32 value);
			void Clear2007Data();
			Aspose::Cells::SheetType GetType();
			void SetType(Aspose::Cells::SheetType value);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> CheckSheetName(intrusive_ptr<Aspose::Cells::System::String> inputName);
			void SetInternalName(intrusive_ptr<Aspose::Cells::System::String> value);
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
			void FreezePanes(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 freezedRows , Aspose::Cells::System::Int32 freezedColumns);
			bool GetFreezedPanes(Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column , Aspose::Cells::System::Int32& freezedRows , Aspose::Cells::System::Int32& freezedColumns);
			void Split();
			void FreezePanes(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32 freezedRows , Aspose::Cells::System::Int32 freezedColumns);
			void UnFreezePanes();
			void RemoveSplit();
			intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> GetListObjects();
			intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> GetInternalListObjects();
			Aspose::Cells::System::Int32 m_TabId;
			Aspose::Cells::System::Int32 GetTabId();
			void SetTabId(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetSheetIndex();
			void SetSheetIndex(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> GetHorizontalPageBreaks();
			intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> GetVerticalPageBreaks();
			void AddPageBreaks(intrusive_ptr<Aspose::Cells::System::String> cellName);
			intrusive_ptr<Aspose::Cells::HyperlinkCollection> hlinks;
			intrusive_ptr<Aspose::Cells::HyperlinkCollection> GetHyperlinks();
			void Copy(intrusive_ptr<Aspose::Cells::Worksheet> sourceSheet);
			void Copy(intrusive_ptr<Aspose::Cells::Worksheet> sourceSheet , intrusive_ptr<Aspose::Cells::CopyOptions> copyOptions);
			intrusive_ptr<Aspose::Cells::PageSetup> GetPageSetup();
			intrusive_ptr<Aspose::Cells::AutoFilter> GetAutoFilter();
			void RemoveAutoFilter();
			bool HasAutofilter();
			bool GetCalculatedConsistentWithLotus();
			bool GetTransitionEvaluation();
			void SetTransitionEvaluation(bool value);
			bool GetTransitionEntry();
			void SetTransitionEntry(bool value);
			Aspose::Cells::System::Int16 WsBoolOptions;
			Aspose::Cells::System::Byte GetVisibilityOption();
			void SetVisibilityOption(Aspose::Cells::System::Byte value);
			Aspose::Cells::VisibilityType GetVisibilityType();
			void SetVisibilityType(Aspose::Cells::VisibilityType value);
			void SetVisible(bool isVisible , bool ignoreError);
			bool IsVisible();
			void SetIsVisible(bool value);
			void SetVisibleOption(bool isVisible , bool isVeryHidden);
			bool IsVeryHidden();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetQSIList();
			void SetQSIList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			intrusive_ptr<Aspose::Cells::Record::SortRecord> GetSort();
			void SetSort(intrusive_ptr<Aspose::Cells::Record::SortRecord> value);
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepSheet> OpenXMLKeepData;
			intrusive_ptr<Aspose::Cells::SelectionCollection> GetSelectionList();
			void SetSelectionList(intrusive_ptr<Aspose::Cells::SelectionCollection> value);
			void SelectRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool removeOthers);
			void CopyConditionalFormatting(Aspose::Cells::System::Int32 sourceRow , Aspose::Cells::System::Int32 sourceColumn , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn);
			Aspose::Cells::System::Int32 GetIndex();
			void MoveTo(Aspose::Cells::System::Int32 index);
			bool IsProtected();
			intrusive_ptr<Aspose::Cells::ValidationCollection> GetValidations();
			intrusive_ptr<Aspose::Cells::ProtectedRangeCollection> GetAllowEditRanges();
			intrusive_ptr<Aspose::Cells::ErrorCheckOptionCollection> m_ErrorCheckOptions;
			intrusive_ptr<Aspose::Cells::ErrorCheckOptionCollection> GetErrorCheckOptions();
			intrusive_ptr<Aspose::Cells::Outline> GetOutline();
			Aspose::Cells::System::Int32 GetFirstVisibleRow();
			void SetFirstVisibleRow(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetFirstVisibleColumn();
			void SetFirstVisibleColumn(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> oldString , intrusive_ptr<Aspose::Cells::System::String> newString);
			Aspose::Cells::ViewType m_ViewType;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetZooms();
			void SetZooms(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> value);
			Aspose::Cells::System::Int32 GetZoom();
			void SetZoom(Aspose::Cells::System::Int32 value);
			Aspose::Cells::ViewType GetViewType();
			void SetViewType(Aspose::Cells::ViewType value);
			bool IsPageBreakPreview();
			void SetIsPageBreakPreview(bool value);
			bool IsRulerVisible();
			void SetIsRulerVisible(bool value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetSelectedRanges();
			intrusive_ptr<Aspose::Cells::InternalColor> TabInternalColor;
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetTabColor();
			void SetTabColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			void SetTabColorIndex(Aspose::Cells::System::Int32 colorIndex);
			Aspose::Cells::System::Int32 GetTabColorIndex();
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetGridlineColor();
			void SetGridlineColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::System::Int32 GetGridlineColorIndex();
			void SetGridlineColorIndex(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetCodeName();
			intrusive_ptr<Aspose::Cells::System::String> m_CodeName;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> m_DefaultPrintScale;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> GetDefaultScale();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetReadBackgroundBitmaps();
			void SetReadBackgroundBitmaps(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			void SetBackground(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> pictureData);
			intrusive_ptr<Aspose::Cells::System::Object> GetInternalBackground();
			intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> cfs;
			intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> GetConditionalFormattings();
			intrusive_ptr<Aspose::Cells::System::String> GetActiveCell();
			void SetActiveCell(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetXmlMapList();
			void SetXmlMapList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			intrusive_ptr<Aspose::Cells::Properties::CustomPropertyCollection> GetCustomProperties();
			intrusive_ptr<Aspose::Cells::Properties::CustomPropertyCollection> GetInternalCustomProperties();
			intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> GetSmartTagSetting();
			intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> GetInternalSmartTagSetting();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			intrusive_ptr<Aspose::Cells::CustomSheetViewCollection> m_CViews;
			intrusive_ptr<Aspose::Cells::CustomSheetViewCollection> GetCustomViews();
			void SetCustomViews(intrusive_ptr<Aspose::Cells::CustomSheetViewCollection> value);
			intrusive_ptr<Aspose::Cells::ScenarioCollection> m_Scenarios;
			intrusive_ptr<Aspose::Cells::ScenarioCollection> GetScenarios();
			intrusive_ptr<Aspose::Cells::System::Object> CalculateFormula(intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateFormula(intrusive_ptr<Aspose::Cells::System::String> formula , intrusive_ptr<Aspose::Cells::CalculationOptions> opts);
			void RefreshPivotTables();
			void CalculateFormula(bool recursive , bool ignoreError , intrusive_ptr<Aspose::Cells::ICustomFunction> customFunction);
			void CalculateFormula(intrusive_ptr<Aspose::Cells::CalculationOptions> options , bool recursive);
			 Worksheet();
		public:
			virtual ~Worksheet();
	};

}

}
