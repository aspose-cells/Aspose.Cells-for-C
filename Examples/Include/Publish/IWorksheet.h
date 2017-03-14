#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#include "System/Drawing/Color.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/IDisposable.h"

namespace Aspose {
	namespace Cells {
		class IProtection;
		class IPaneCollection;
		class IWorkbook;
		class ICells;
		enum SheetType;
		class IHorizontalPageBreakCollection;
		class IVerticalPageBreakCollection;
		class IHyperlinkCollection;
		class IWorksheet;
		class ICopyOptions;
		class IPageSetup;
		class IAutoFilter;
		enum VisibilityType;
		class IValidationCollection;
		class IProtectedRangeCollection;
		class IErrorCheckOptionCollection;
		class IOutline;
		enum ViewType;
		class IConditionalFormattingCollection;
		class IScenarioCollection;
		class ICalculationOptions;
		class ICustomFunction;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Pivot {
			class IPivotTableCollection;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Tables {
			class IListObjectCollection;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Properties {
			class ICustomPropertyCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Encapsulates the object that represents a single worksheet.
			///  </summary>
			/// 
			/// <example><code>
			///  [C++]
			///  
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			///  
			///  intrusive_ptr<Aspose::Cells::IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			///  
			///  //Freeze panes at "AS40" with 10 rows and 10 columns
			///  sheet->FreezePanes(new String("AS40"), 10, 10);
			///  
			/// </code>
			/// </example>
			/// 
			/// 
	class ASPOSE_CELLS_API IWorksheet : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Represents the various types of protection options available for a worksheet. Supports advanced protection options in Excel XP and above version.
			/// </summary>
			/// <remarks>This property can protect worksheet in all versions of Excel file and support advanced protection options in Excel XP and above version.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IProtection> 		GetIProtection()=0;
			/// <summary>
			/// Gets the window panes.
			/// </summary>
			/// <remarks>
			/// If the window is not splitted or frozen.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IPaneCollection> 		GetIPanes()=0;
			/// <summary>
			/// Gets the workbook object which contains this sheet.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorkbook> 		GetIWorkbook()=0;
			 
			/// <summary>
			/// Gets the <see cref="ICells" />
			///  collection.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::ICells> 		GetICells()=0;
			/// <summary>
			/// Gets all pivot tables in this worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotTableCollection> 		GetIPivotTables()=0;
			/// <summary>
			/// Represents worksheet type.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::SheetType GetType()=0;
			 
			/// <summary>
			/// Represents worksheet type.
			/// </summary>
			/// 
			/// 
			 virtual void SetType(Aspose::Cells::SheetType value)=0;
			 
			/// <summary>
			/// Gets the name of the worksheet.
			/// </summary>
			/// 
			/// <remarks>The max length of sheet name is 31. And you cannot assign same name (case insensitive) to two worksheets. 
			/// For example, you cannot set "SheetName1" to the first worksheet and set "SHEETNAME1" to the second worksheet.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			 
			/// <summary>
			/// Sets the name of the worksheet.
			/// </summary>
			/// 
			/// <remarks>The max length of sheet name is 31. And you cannot assign same name(case insensitive) to two worksheets. 
			/// For example, you cannot set "SheetName1" to the first worksheet and set "SHEETNAME1" to the second worksheet.</remarks>
			/// 
			/// 
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			 
			/// <summary>
			/// Indicates whether to show formulas or their results.
			/// </summary>
			/// 
			/// 
			 virtual bool GetShowFormulas()=0;
			 
			/// <summary>
			/// Indicates whether to show formulas or their results.
			/// </summary>
			/// 
			/// 
			 virtual void SetShowFormulas(bool value)=0;
			 
			/// <summary>
			/// Gets a value indicating whether the gridlines  are visible. Default is true.
			/// </summary>
			/// 
			/// 
			 virtual bool IsGridlinesVisible()=0;
			 
			/// <summary>
			/// Sets a value indicating whether the gridlines  are visible. Default is true.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsGridlinesVisible(bool value)=0;
			 
			/// <summary>
			/// Gets a value indicating whether the worksheet will display row and column headers.
			/// Default is true.
			/// </summary>
			/// 
			/// 
			 virtual bool IsRowColumnHeadersVisible()=0;
			 
			/// <summary>
			/// Sets a value indicating whether the worksheet will display row and column headers.
			/// Default is true.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsRowColumnHeadersVisible(bool value)=0;
			 
			/// <summary>
			/// True if zero values are displayed. 
			/// </summary>
			/// 
			/// 
			 virtual bool GetDisplayZeros()=0;
			 
			/// <summary>
			/// True if zero values are displayed. 
			/// </summary>
			/// 
			/// 
			 virtual void SetDisplayZeros(bool value)=0;
			 
			/// <summary>
			/// Indicates if the specified worksheet is displayed from right to left instead of from left to right.
			/// Default is false.
			/// </summary>
			/// 
			/// 
			 virtual bool GetDisplayRightToLeft()=0;
			 
			/// <summary>
			/// Indicates if the specified worksheet is displayed from right to left instead of from left to right.
			/// Default is false.
			/// </summary>
			/// 
			/// 
			 virtual void SetDisplayRightToLeft(bool value)=0;
			 
			/// <summary>
			/// Indicates whether to show outline.
			/// </summary>
			/// 
			/// 
			 virtual bool IsOutlineShown()=0;
			 
			/// <summary>
			/// Indicates whether to show outline.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsOutlineShown(bool value)=0;
			 
			/// <summary>
			/// Indicates whether this worksheet is selected when the workbook is opened.
			/// </summary>
			/// 
			/// 
			 virtual bool IsSelected()=0;
			 
			/// <summary>
			/// Indicates whether this worksheet is selected when the workbook is opened.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsSelected(bool value)=0;
			 
			/// <summary>
			/// Freezes panes at the specified cell in the worksheet.
			/// </summary>
			/// 
			/// <param name="row" >Row index.</param>
			/// 
			/// <param name="column" >Column index.</param>
			/// 
			/// <param name="freezedRows" >Number of visible rows in top pane, no more than row index.</param>
			/// 
			/// <param name="freezedColumns" >Number of visible columns in left pane, no more than column index.</param>
			/// 
			/// <remarks><p>Row index and column index cannot all be zero. Number of rows and number of columns
			/// also cannot all be zero.</p>
			/// 
			/// <p>The first two parameters specify the frozen position and the last two parameters specify the area frozen on the left top pane.</p>
			/// </remarks>
			/// 
			/// 
			 virtual void FreezePanes(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 freezedRows , Aspose::Cells::System::Int32 freezedColumns)=0;
			 
			/// <summary>
			/// Gets the freeze panes.
			/// </summary>
			/// 
			/// <param name="row" >Row index.</param>
			/// 
			/// <param name="column" >Column index.</param>
			/// 
			/// <param name="freezedRows" >Number of visible rows in top pane, no more than row index.</param>
			/// 
			/// <param name="freezedColumns" >Number of visible columns in left pane, no more than column index.</param>
			/// 
			/// <returns>Return whether the worksheet is frozen</returns>
			/// 
			/// 
			 virtual bool GetFreezedPanes(Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column , Aspose::Cells::System::Int32& freezedRows , Aspose::Cells::System::Int32& freezedColumns)=0;
			 
			/// <summary>
			/// Splits window.
			/// </summary>
			/// 
			/// 
			 virtual void Split()=0;
			 
			/// <summary>
			/// Freezes panes at the specified cell in the worksheet.
			/// </summary>
			/// 
			/// <param name="cellName" >Cell name.</param>
			/// 
			/// <param name="freezedRows" >Number of visible rows in top pane, no more than row index.</param>
			/// 
			/// <param name="freezedColumns" >Number of visible columns in left pane, no more than column index.</param>
			/// 
			/// <remarks>Row index and column index cannot all be zero. Number of rows and number of columns
			/// also cannot all be zero.</remarks>
			/// 
			/// 
			 virtual void FreezePanes(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32 freezedRows , Aspose::Cells::System::Int32 freezedColumns)=0;
			 
			/// <summary>
			/// Unfreezes panes in the worksheet.
			/// </summary>
			/// 
			/// 
			 virtual void UnFreezePanes()=0;
			 
			/// <summary>
			/// Removes splitted window.
			/// </summary>
			/// 
			/// 
			 virtual void RemoveSplit()=0;
			/// <summary>
			/// Gets all ListObjects in this worksheet.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Tables::IListObjectCollection> 		GetIListObjects()=0;
			/// <summary>
			/// Gets the <see cref="IHorizontalPageBreakCollection" />
			///  collection. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IHorizontalPageBreakCollection> 		GetIHorizontalPageBreaks()=0;
			/// <summary>
			/// Gets the <see cref="IVerticalPageBreakCollection" />
			///  collection.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IVerticalPageBreakCollection> 		GetIVerticalPageBreaks()=0;
			/// <summary>
			/// Adds page break.
			/// </summary>
			/// 
			/// <param name="cellName" />
			/// 
			/// 
			 virtual void AddPageBreaks(intrusive_ptr<Aspose::Cells::System::String> cellName)=0;
			/// <summary>
			/// Gets the <see cref="IHyperlinkCollection" />
			///  collection.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IHyperlinkCollection> 		GetIHyperlinks()=0;
			/// <summary>
			/// Copies contents and formats from another worksheet.
			/// </summary>
			/// 
			/// <param name="sourceSheet" >Source worksheet.</param>
			/// 
			/// 
			 virtual void Copy(intrusive_ptr<Aspose::Cells::IWorksheet> sourceSheet)=0;
			/// <summary>
			/// Copies contents and formats from another worksheet.
			/// </summary>
			/// <param name="sourceSheet" >Source worksheet.</param>
			/// <param name="copyOptions" />
			/// 
			/// <remarks>You can copy data from another worksheet in the same file or another file. However, this method does not support to copy drawing objects, such as comments, images and charts.</remarks>
			 virtual void Copy(intrusive_ptr<Aspose::Cells::IWorksheet> sourceSheet , intrusive_ptr<Aspose::Cells::ICopyOptions> copyOptions)=0;
			/// <summary>
			/// Represents the page setup description in this sheet.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IPageSetup> 		GetIPageSetup()=0;
			 
			/// <summary>
			/// Represents auto filter for the specified worksheet.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IAutoFilter> 		GetIAutoFilter()=0;
			 
			/// <summary>
			/// Removes the auto filter of the worksheet.
			/// </summary>
			/// 
			/// 
			 virtual void RemoveAutoFilter()=0;
			 
			/// <summary>
			/// Indicates whether this worksheet has auto filter.
			/// </summary>
			/// 
			/// 
			 virtual bool HasAutofilter()=0;
			 
			/// <summary>
			/// Indicates whether the Transition Formula Evaluation (Lotus compatibility) option is enabled.
			/// </summary>
			/// 
			/// 
			 virtual bool GetTransitionEvaluation()=0;
			 
			/// <summary>
			/// Indicates whether the Transition Formula Evaluation (Lotus compatibility) option is enabled.
			/// </summary>
			/// 
			/// 
			 virtual void SetTransitionEvaluation(bool value)=0;
			 
			/// <summary>
			/// Indicates whether the Transition Formula Entry (Lotus compatibility) option is enabled.
			/// </summary>
			/// 
			/// 
			 virtual bool GetTransitionEntry()=0;
			 
			/// <summary>
			/// Indicates whether the Transition Formula Entry (Lotus compatibility) option is enabled.
			/// </summary>
			/// 
			/// 
			 virtual void SetTransitionEntry(bool value)=0;
			 
			/// <summary>
			/// Indicates the visible state for this sheet.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::VisibilityType GetVisibilityType()=0;
			 
			/// <summary>
			/// Indicates the visible state for this sheet.
			/// </summary>
			/// 
			/// 
			 virtual void SetVisibilityType(Aspose::Cells::VisibilityType value)=0;
			 
			/// <summary>
			/// Sets the visible options.
			/// </summary>
			/// 
			/// <param name="isVisible" >Whether the worksheet is visible</param>
			/// 
			/// <param name="ignoreError" >Whether to ignore error if this option is not valid.</param>
			/// 
			/// 
			 virtual void SetVisible(bool isVisible , bool ignoreError)=0;
			 
			/// <summary>
			/// Represents if the worksheet is visible.
			/// </summary>
			/// 
			/// 
			 virtual bool IsVisible()=0;
			 
			/// <summary>
			/// Represents if the worksheet is visible.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsVisible(bool value)=0;
			 
			/// <summary>
			/// Selects a range.
			/// </summary>
			/// 
			/// <param name="startRow" >The start row.
			/// </param>
			/// 
			/// <param name="startColumn" >The start column</param>
			/// 
			/// <param name="totalRows" >The number of rows.</param>
			/// 
			/// <param name="totalColumns" >The number of columns</param>
			/// 
			/// <param name="removeOthers" >True means removing other selected range and only select this range.
			/// </param>
			/// 
			/// 
			 virtual void SelectRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool removeOthers)=0;
			 
			/// <summary>
			/// Gets the index of sheet in the worksheet collection.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetIndex()=0;
			 
			/// <summary>
			/// Moves the sheet to another location in the spreadsheet.
			/// </summary>
			/// 
			/// <param name="index" >Destination sheet index.</param>
			/// 
			/// 
			 virtual void MoveTo(Aspose::Cells::System::Int32 index)=0;
			 
			/// <summary>
			/// Indicates if the worksheet is protected.
			/// </summary>
			/// 
			/// 
			 virtual bool IsProtected()=0;
			/// <summary>
			/// Gets the data validation setting collection in the worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IValidationCollection> 		GetIValidations()=0;
			/// <summary>
			/// Gets the allow edit range collection in the worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IProtectedRangeCollection> 		GetIProtectedRangeCollection()=0;
			/// <summary>
			/// Gets error check setting applied on certain ranges.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IErrorCheckOptionCollection> 		GetIErrorCheckOptions()=0;
			/// <summary>
			/// Gets the outline on this worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IOutline> 		GetIOutline()=0;
			/// <summary>
			/// Represents first visible row index.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetFirstVisibleRow()=0;
			 
			/// <summary>
			/// Represents first visible row index.
			/// </summary>
			/// 
			/// 
			 virtual void SetFirstVisibleRow(Aspose::Cells::System::Int32 value)=0;
			 
			/// <summary>
			/// Represents first visible column index.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetFirstVisibleColumn()=0;
			 
			/// <summary>
			/// Represents first visible column index.
			/// </summary>
			/// 
			/// 
			 virtual void SetFirstVisibleColumn(Aspose::Cells::System::Int32 value)=0;
			 
			/// <summary>
			/// Replaces all cells' text with a new string.
			/// </summary>
			/// 
			/// <param name="oldString" >Old string value.</param>
			/// 
			/// <param name="newString" >New string value.</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> oldString , intrusive_ptr<Aspose::Cells::System::String> newString)=0;
			 
			/// <summary>
			/// Represents the scaling factor in percentage. It should be between 10 and 400.
			/// </summary>
			/// 
			/// <remarks>Please set the view type first.</remarks>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetZoom()=0;
			 
			/// <summary>
			/// Represents the scaling factor in percentage. It should be between 10 and 400.
			/// </summary>
			/// 
			/// <remarks>Please set the view type first.</remarks>
			/// 
			/// 
			 virtual void SetZoom(Aspose::Cells::System::Int32 value)=0;
			 
			/// <summary>
			/// Gets and sets the view type.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::ViewType GetViewType()=0;
			 
			/// <summary>
			/// Gets and sets the view type.
			/// </summary>
			/// 
			/// 
			 virtual void SetViewType(Aspose::Cells::ViewType value)=0;
			 
			/// <summary>
			/// Indicates whether the specified worksheet is shown in normal view or page break preview.
			/// </summary>
			/// 
			/// 
			 virtual bool IsPageBreakPreview()=0;
			 
			/// <summary>
			/// Indicates whether the specified worksheet is shown in normal view or page break preview.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsPageBreakPreview(bool value)=0;
			 
			/// <summary>
			/// Indicates whether the ruler is visible. This property is only applied for page break preview.
			/// </summary>
			/// 
			/// 
			 virtual bool IsRulerVisible()=0;
			 
			/// <summary>
			/// Indicates whether the ruler is visible. This property is only applied for page break preview.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsRulerVisible(bool value)=0;
			 
			/// <summary>
			/// Gets selected ranges of cells in the designer spreadsheet.
			/// </summary>
			/// 
			/// <returns>An <see cref="ArrayList" />
			///  which contains selected ranges.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetSelectedRanges()=0;
			 
			/// <summary>
			/// Represents worksheet tab color.
			/// </summary>
			/// 
			/// <remarks>This feature is only supported in ExcelXP (Excel2002) and later versions. 
			/// If you save file as Excel97 or Excel2000 format, it will be omitted.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetTabColor()=0;
			 
			/// <summary>
			/// Represents worksheet tab color.
			/// </summary>
			/// 
			/// <remarks>This feature is only supported in ExcelXP (Excel2002) and later versions. 
			/// If you save file as Excel97 or Excel2000 format, it will be omitted.</remarks>
			/// 
			/// 
			 virtual void SetTabColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			 
			/// <summary>
			/// Gets worksheet code name.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetCodeName()=0;
			 
			/// <summary>
			/// Sets worksheet background image.
			/// </summary>
			/// 
			/// <param name="pictureData" >Picture data.</param>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete.</remarks>
			/// 
			/// 
			 virtual void SetBackground(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> pictureData)=0;
			/// <summary>
			/// Gets the ConditionalFormattings in the worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingCollection> 		GetIConditionalFormattings()=0;
			/// <summary>
			/// Gets the active cell in the worksheet. 
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetActiveCell()=0;
			 
			/// <summary>
			/// Sets the active cell in the worksheet. 
			/// </summary>
			/// 
			/// 
			 virtual void SetActiveCell(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets an object representing 
			/// the identifier information associated with a worksheet. 
			/// </summary>
			/// <remarks>
			/// GetICustomProperties() provide a preferred mechanism for storing arbitrary data. 
			/// It supports legacy third-party document components, as well as those situations that have a stringent need for binary parts. 
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Properties::ICustomPropertyCollection> 		GetICustomProperties()=0;
			/// <summary>
			/// Gets the collection of <see cref="IScenario" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IScenarioCollection> 		GetIScenarios()=0;
			/// <summary>
			/// Calculates a formula.
			/// </summary>
			/// 
			/// <param name="formula" >Formula to be calculated.</param>
			/// 
			/// <returns>Calculated formula result.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Object> CalculateFormula(intrusive_ptr<Aspose::Cells::System::String> formula)=0;
			/// <summary>
			/// Calculates a formula.
			/// </summary>
			/// <param name="formula" >Formula to be calculated.</param>
			/// <param name="opts" >Options for calculating formula</param>
			/// <returns>Calculated formula result.</returns>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> 		CalculateFormula(intrusive_ptr<Aspose::Cells::System::String> formula , intrusive_ptr<Aspose::Cells::ICalculationOptions> opts)=0;
			/// <summary>
			/// Refreshes all PivotTables in this Worksheet.
			/// </summary>
			  virtual void RefreshPivotTables()=0;
			/// <summary>
			/// Calculates all formulas in this worksheet.
			/// </summary>
			/// <param name="recursive" >True means if the worksheet' cells depend on the cells of other worksheets,
			///  the dependant cells in other worksheets will be calculated too.
			///  False means all the formulas in the worksheet have been calculated and the values are right.</param>
			/// <param name="ignoreError" >Indicates if hide the error in calculating formulas.
			/// The error may be unsupported function, external links, etc.</param>
			/// <param name="customFunction" >The custom formula calculation functions to extend the calculation engine.</param>
			  virtual void CalculateFormula(bool recursive , bool ignoreError , intrusive_ptr<Aspose::Cells::ICustomFunction> customFunction)=0;
			/// <summary>
			/// Calculates all formulas in this worksheet.
			/// </summary>
			/// <param name="options" >Options for calculation</param>
			/// <param name="recursive">True means if the worksheet' cells depend on the cells of other worksheets,
			///  the dependant cells in other worksheets will be calculated too.
			///  False means all the formulas in the worksheet have been calculated and the values are right.</param>
			 virtual void CalculateFormula(intrusive_ptr<Aspose::Cells::ICalculationOptions> options , bool recursive)=0;
			/// <summary>
			/// 
			/// </summary>
			  virtual void Dispose()=0;
public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}

	};
}
}
