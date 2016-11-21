#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "System/String.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Char.h"

namespace Aspose {
	namespace Cells {
		enum ProtectionType;
		enum DisplayDrawingObjects;
		enum CalcModeType;
		enum CountryCode;
		class IWriteProtection;
		enum UpdateLinksType;
		enum MemorySetting;
		enum PaperSizeType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents all settings of the workbook.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IWorkbookSettings : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Enable macros;
			/// </summary>
			/// 
			/// <remarks>
			/// Now it only works when copying a worksheet to other worksheet in a workbook.
			/// </remarks>
			/// 
			/// 
			 virtual bool GetEnableMacros()=0;
			/// <summary>
			/// Enable macros;
			/// </summary>
			/// 
			/// <remarks>
			/// Now it only works when copying a worksheet to other worksheet in a workbook.
			/// </remarks>
			/// 
			/// 
			 virtual void SetEnableMacros(bool value)=0;
			/// <summary>
			/// Gets a value which represents if the workbook uses the 1904 date system.
			/// </summary>
			/// 
			/// 
			 virtual bool GetDate1904()=0;
			/// <summary>
			/// Sets a value which represents if the workbook uses the 1904 date system.
			/// </summary>
			/// 
			/// 
			 virtual void SetDate1904(bool value)=0;
			/// <summary>
			/// Gets the protection type of the workbook.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::ProtectionType GetProtectionType()=0;
			/// <summary>
			/// True if calculations in this workbook will be done using only the precision of the numbers as they're displayed
			/// </summary>
			/// 
			/// 
			 virtual bool GetPrecisionAsDisplayed()=0;
			/// <summary>
			/// True if calculations in this workbook will be done using only the precision of the numbers as they're displayed
			/// </summary>
			/// 
			/// 
			 virtual void SetPrecisionAsDisplayed(bool value)=0;
			/// <summary>
			/// Indicates whether re-calculate all formulas on opening file.
			/// </summary>
			/// 
			/// 
			 virtual bool GetReCalculateOnOpen()=0;
			/// <summary>
			/// Indicates whether re-calculate all formulas on opening file.
			/// </summary>
			/// 
			/// 
			 virtual void SetReCalculateOnOpen(bool value)=0;
			/// <summary>
			/// Indicates whether create calculated formulas chain.
			/// </summary>
			/// 
			/// 
			 virtual bool GetCreateCalcChain()=0;
			/// <summary>
			/// Indicates whether create calculated formulas chain.
			/// </summary>
			/// 
			/// 
			 virtual void SetCreateCalcChain(bool value)=0;
			/// <summary>
			/// Indicates whether and how to show objects in the workbook.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::DisplayDrawingObjects GetDisplayDrawingObjects()=0;
			/// <summary>
			/// Indicates whether and how to show objects in the workbook.
			/// </summary>
			/// 
			/// 
			 virtual void SetDisplayDrawingObjects(Aspose::Cells::DisplayDrawingObjects value)=0;
			/// <summary>
			/// Indicates if Aspose.Cells will use iteration to resolve circular references.
			/// </summary>
			/// 
			/// 
			 virtual bool GetIteration()=0;
			/// <summary>
			/// Indicates if Aspose.Cells will use iteration to resolve circular references.
			/// </summary>
			/// 
			/// 
			 virtual void SetIteration(bool value)=0;
			/// <summary>
			/// Returns or sets the maximum number of iterations that Aspose.Cells can use to resolve a circular reference.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetMaxIteration()=0;
			/// <summary>
			/// Returns or sets the maximum number of iterations that Aspose.Cells can use to resolve a circular reference.
			/// </summary>
			/// 
			/// 
			 virtual void SetMaxIteration(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Returns or sets the maximum number of change that Microsoft Excel can use to resolve a circular reference.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetMaxChange()=0;
			/// <summary>
			/// Returns or sets the maximum number of change that Microsoft Excel can use to resolve a circular reference.
			/// </summary>
			/// 
			/// 
			 virtual void SetMaxChange(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// It specifies whether to calculate formulas manually,
			/// automatically or automatically except for multiple table operations.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::CalcModeType GetCalcMode()=0;
			/// <summary>
			/// It specifies whether to calculate formulas manually,
			/// automatically or automatically except for multiple table operations.
			/// </summary>
			/// 
			/// 
			 virtual void SetCalcMode(Aspose::Cells::CalcModeType value)=0;
			/// <summary>
			/// Specifies the version of the calculation engine used to calculate values in the workbook.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetCalculationId()=0;
			/// <summary>
			/// Specifies the version of the calculation engine used to calculate values in the workbook.
			/// </summary>
			/// 
			/// 
			 virtual void SetCalculationId(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Specifies the stack size for calculating cells recursively.
			/// The large value for this size will give better performance when there are lots of cells need to be calculated recursively.
			/// On the other hand, larger value will raise the risk of StackOverflowException.
			/// If user gets StackOverflowException when calculating formulas, this value should be decreased.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetCalcStackSize()=0;
			/// <summary>
			/// Specifies the stack size for calculating cells recursively.
			/// The large value for this size will give better performance when there are lots of cells need to be calculated recursively.
			/// On the other hand, larger value will raise the risk of StackOverflowException.
			/// If user gets StackOverflowException when calculating formulas, this value should be decreased.
			/// </summary>
			/// 
			/// 
			 virtual void SetCalcStackSize(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Indicates whether to recalculate before saving the document.
			/// </summary>
			/// 
			/// 
			 virtual bool GetRecalculateBeforeSave()=0;
			/// <summary>
			/// Indicates whether to recalculate before saving the document.
			/// </summary>
			/// 
			/// 
			 virtual void SetRecalculateBeforeSave(bool value)=0;
			/// <summary>
			/// Width of worksheet tab bar (in 1/1000 of window width).
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetSheetTabBarWidth()=0;
			/// <summary>
			/// Width of worksheet tab bar (in 1/1000 of window width).
			/// </summary>
			/// 
			/// 
			 virtual void SetSheetTabBarWidth(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Get a value whether the Workbook tabs are displayed.
			/// </summary>
			/// 
			/// <remarks>The default value is true.</remarks>
			/// 
			/// 
			 virtual bool GetShowTabs()=0;
			/// <summary>
			/// Sets a value whether the Workbook tabs are displayed.
			/// </summary>
			/// 
			/// <remarks>The default value is true.</remarks>
			/// 
			/// <example>The following code hides the Sheet Tabs and Tab Scrolling Buttons for the spreadsheet.
			/// <code>
			/// [C++]
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// // Hide the spreadsheet tabs.
			/// workbook->GetISettings()->SetShowTabs(false);
			///  
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual void SetShowTabs(bool value)=0;
			/// <summary>
			/// Gets the first visible worksheet tab.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetFirstVisibleTab()=0;
			/// <summary>
			/// Sets the first visible worksheet tab.
			/// </summary>
			/// 
			/// 
			 virtual void SetFirstVisibleTab(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets a value indicating whether the generated spreadsheet will contain a horizontal scroll bar.
			/// </summary>
			/// 
			/// <remarks>The default value is true.</remarks>
			/// 
			/// 
			/// 
			 virtual bool IsHScrollBarVisible()=0;
			/// <summary>
			/// Sets a value indicating whether the generated spreadsheet will contain a horizontal scroll bar.
			/// </summary>
			/// 
			/// <remarks>The default value is true.</remarks>
			/// 
			/// <example>
			/// The following code makes the horizontal scroll bar invisible for the spreadsheet.
			/// <code>
			/// [C++]
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// // Hide the horizontal scroll bar of the Excel file.
			/// workbook->GetISettings()->SetIsHScrollBarVisible(false);
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual void SetIsHScrollBarVisible(bool value)=0;
			/// <summary>
			///  Gets a value indicating whether the generated spreadsheet will contain a vertical scroll bar.
			///  </summary>
			/// 
			/// <remarks>The default value is true.</remarks>
			/// 
			/// 
			/// 
			 virtual bool IsVScrollBarVisible()=0;
			/// <summary>
			///  Sets a value indicating whether the generated spreadsheet will contain a vertical scroll bar.
			///  </summary>
			/// 
			/// <remarks>The default value is true.</remarks>
			/// 
			/// <example>The following code makes the vertical scroll bar invisible for the spreadsheet.
			///  <code>
			///  [C++]
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			///  // Hide the vertical scroll bar of the Excel file.
			///  workbook->GetISettings()->SetIsVScrollBarVisible(false);
			///  
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
			 virtual void SetIsVScrollBarVisible(bool value)=0;
			/// <summary>
			/// Gets a value that indicates whether the Workbook is shared. 
			/// </summary>
			/// 
			/// <remarks>The default value is false.</remarks>
			/// 
			/// 
			 virtual bool GetShared()=0;
			/// <summary>
			/// Sets a value that indicates whether the Workbook is shared. 
			/// </summary>
			/// 
			/// <remarks>The default value is false.</remarks>
			/// 
			/// 
			 virtual void SetShared(bool value)=0;
			/// <summary>
			/// Gets the user interface language of the Workbook version based on CountryCode that has saved the file. 
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::CountryCode GetLanguageCode()=0;
			/// <summary>
			/// Sets the user interface language of the Workbook version based on CountryCode that has saved the file. 
			/// </summary>
			/// 
			/// 
			 virtual void SetLanguageCode(Aspose::Cells::CountryCode value)=0;
			/// <summary>
			/// Gets the regional settings for workbook.
			/// </summary>
			/// 
			/// <remarks>
			/// 1. Regional settings used by Aspose.Cells component for a workbook loaded from template file:
			/// i). For an XLS file, there are fields defined for regional settings and MS Excel does save regional settings data into the file when saving the XLS file.
			/// So, we use the saved region in the template file for the workbook.
			/// If you do not want to use the region saved in the XLS file, please reset it to the expected one (such as, CountryCode_Default) after loading the template file.
			/// And, we save the user specified value (by this method) into the file too when saving an XLS file.
			/// ii). For other file formats, such as, XLSX, XLSB...etc., there is no field defined for regional settings in the file format specification.
			/// So, we use the regional settings of application's environment for the workbook.
			/// And, the user specified value (by this method) cannot be kept for the generated files with those file formats.
			/// 2. For the view effect in MS Excel:
			/// The applied regional settings here can take effect only at runtime with Aspose.Cells component and not when viewing the generated file with MS Excel.
			/// Even for the generated XLS file in which the specified regional settings data has been saved, when viewing/editing it with MS Excel,
			/// the used region to perform formatting by MS Excel is always the default regional settings of the environment where MS Excel is running,
			/// not the one saved in the file. It is MS Excel's behavior and cannot be changed by code.
			/// </remarks>
			/// 
			/// 
			 virtual Aspose::Cells::CountryCode GetRegion()=0;
			/// <summary>
			/// Sets the regional settings for workbook.
			/// </summary>
			/// 
			/// <remarks>
			/// 1. Regional settings used by Aspose.Cells component for a workbook loaded from template file:
			/// i). For an XLS file, there are fields defined for regional settings and MS Excel does save regional settings data into the file when saving the XLS file.
			/// So, we use the saved region in the template file for the workbook.
			/// If you do not want to use the region saved in the XLS file, please reset it to the expected one (such as, CountryCode_Default) after loading the template file.
			/// And, we save the user specified value (by this method) into the file too when saving an XLS file.
			/// ii). For other file formats, such as, XLSX, XLSB...etc., there is no field defined for regional settings in the file format specification.
			/// So, we use the regional settings of application's environment for the workbook.
			/// And, the user specified value (by this method) cannot be kept for the generated files with those file formats.
			/// 2. For the view effect in MS Excel:
			/// The applied regional settings here can take effect only at runtime with Aspose.Cells component and not when viewing the generated file with MS Excel.
			/// Even for the generated XLS file in which the specified regional settings data has been saved, when viewing/editing it with MS Excel,
			/// the used region to perform formatting by MS Excel is always the default regional settings of the environment where MS Excel is running,
			/// not the one saved in the file. It is MS Excel's behavior and cannot be changed by code.
			/// </remarks>
			/// 
			/// 
			 virtual void SetRegion(Aspose::Cells::CountryCode value)=0;
			/// <summary>
			/// Gets the system culture info.
			/// </summary>
			/// 
			/// <remarks>
			/// Returns null if culture info is not set and GetRegion() of IWorkbookSettings return null. 
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> GetCultureInfo()=0;
			/// <summary>
			/// Sets the system culture info.
			/// </summary>
			/// 
			/// <remarks>
			/// </remarks>
			/// 
			/// 
			 virtual void SetCultureInfo(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> value)=0;
			/// <summary>
			/// Gets the decimal separator for formatting/parsing numeric values. Default is the decimal separator of current Region.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Char GetNumberDecimalSeparator()=0;
			/// <summary>
			/// Sets the decimal separator for formatting/parsing numeric values. Default is the decimal separator of current Region.
			/// </summary>
			/// 
			/// 
			 virtual void SetNumberDecimalSeparator(Aspose::Cells::System::Char value)=0;
			/// <summary>
			/// Gets the character that separates groups of digits to the left of the decimal in numeric values. Default is the group separator of current Region.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Char GetNumberGroupSeparator()=0;
			/// <summary>
			/// Sets the character that separates groups of digits to the left of the decimal in numeric values. Default is the group separator of current Region.
			/// </summary>
			/// 
			/// 
			 virtual void SetNumberGroupSeparator(Aspose::Cells::System::Char value)=0;
			/// <summary>
			/// Represents Workbook file encryption password.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetPassword()=0;
			/// <summary>
			/// Represents Workbook file encryption password.
			/// </summary>
			/// 
			/// 
			 virtual void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Provides access to the workbook write protection options. 
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWriteProtection> 		GetIWriteProtection()=0;
			/// <summary>
			/// Indicates if the Read Only Recommended option is selected.
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use GetIWriteProtection()->GetRecommendReadOnly() method.</remarks>
			/// 
			/// 
			 virtual bool GetRecommendReadOnly()=0;
			/// <summary>
			/// Indicates if the Read Only Recommended option is selected.
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use GetIWriteProtection()->SetRecommendReadOnly() method.</remarks>
			/// 
			/// 
			 virtual void SetRecommendReadOnly(bool value)=0;
			/// <summary>
			/// Indicates whether this workbook is write protected.
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use GetIWriteProtection()->IsWriteProtected() method.</remarks>
			/// 
			/// 
			 virtual bool IsWriteProtected()=0;
			/// <summary>
			/// Indicates whether this workbook is write protected.
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use GetIWriteProtection()->IsWriteProtected() method.</remarks>
			/// 
			/// 
			 virtual void SetIsWriteProtected(bool value)=0;
			/// <summary>
			/// Sets the protected password to modify the file.
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use GetIWriteProtection()->SetPassword() method.</remarks>
			/// 
			/// 
			 virtual void SetWriteProtectedPassword(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets a value that indicates whether a password is required to open this workbook.
			/// </summary>
			/// 
			/// 
			 virtual bool IsEncrypted()=0;
			/// <summary>
			/// Gets a value that indicates whether the structure or window of the Workbook is protected. 
			/// </summary>
			/// 
			/// 
			 virtual bool IsProtected()=0;
			/// <summary>
			/// Indicates whether encrypting the workbook with default password if Structure and Windows of the workbook are locked.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false now. It's same as MS Excel 2013.
			/// </remarks>
			/// 
			/// 
			 virtual bool IsDefaultEncrypted()=0;
			/// <summary>
			/// Indicates whether encrypting the workbook with default password if Structure and Windows of the workbook are locked.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false now. It's same as MS Excel 2013.
			/// </remarks>
			/// 
			/// 
			 virtual void SetIsDefaultEncrypted(bool value)=0;
			/// <summary>
			/// Represents whether the generated spreadsheet will be opened Minimized.
			/// </summary>
			/// 
			/// 
			 virtual bool IsMinimized()=0;
			/// <summary>
			/// Represents whether the generated spreadsheet will be opened Minimized.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsMinimized(bool value)=0;
			/// <summary>
			/// Indicates whether this workbook is hidden.
			/// </summary>
			/// 
			/// 
			 virtual bool IsHidden()=0;
			/// <summary>
			/// Indicates whether this workbook is hidden.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsHidden(bool value)=0;
			/// <summary>
			/// Specifies a boolean value that indicates the application automatically compressed pictures in the workbook.
			/// </summary>
			/// 
			/// 
			 virtual bool GetAutoCompressPictures()=0;
			/// <summary>
			/// Specifies a boolean value that indicates the application automatically compressed pictures in the workbook.
			/// </summary>
			/// 
			/// 
			 virtual void SetAutoCompressPictures(bool value)=0;
			/// <summary>
			/// True if personal information can be removed from the specified workbook. 
			/// </summary>
			/// 
			/// 
			 virtual bool GetRemovePersonalInformation()=0;
			/// <summary>
			/// True if personal information can be removed from the specified workbook. 
			/// </summary>
			/// 
			/// 
			 virtual void SetRemovePersonalInformation(bool value)=0;
			/// <summary>
			/// Gets and sets whether hide the field list for the PivotTable.
			/// </summary>
			/// 
			/// 
			 virtual bool GetHidePivotFieldList()=0;
			/// <summary>
			/// Gets and sets whether hide the field list for the PivotTable.
			/// </summary>
			/// 
			/// 
			 virtual void SetHidePivotFieldList(bool value)=0;
			/// <summary>
			/// Gets and sets how updates external links when the workbook is opened.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::UpdateLinksType GetUpdateLinksType()=0;
			/// <summary>
			/// Gets and sets how updates external links when the workbook is opened.
			/// </summary>
			/// 
			/// 
			 virtual void SetUpdateLinksType(Aspose::Cells::UpdateLinksType value)=0;
			/// <summary>
			/// Indicates whether parsing the formula when reading the file.
			/// </summary>
			/// 
			/// <remarks>
			/// Only applies for Excel Xlsx, Xltx, Xltm, Xlsm file
			/// because the formulas in the files are stored with a string formula.
			/// </remarks>
			/// 
			/// 
			 virtual bool GetParsingFormulaOnOpen()=0;
			/// <summary>
			/// Indicates whether parsing the formula when reading the file.
			/// </summary>
			/// 
			/// <remarks>
			/// Only applies for Excel Xlsx, Xltx, Xltm, Xlsm file
			/// because the formulas in the files are stored with a string formula.
			/// </remarks>
			/// 
			/// 
			 virtual void SetParsingFormulaOnOpen(bool value)=0;
			/// <summary>
			/// The distance from the left edge of the client area to the left edge of the window, in unit of point.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowLeft()=0;
			/// <summary>
			/// The distance from the left edge of the client area to the left edge of the window, in unit of point.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowLeft(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The distance from the left edge of the client area to the left edge of the window.
			/// In unit of inch.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowLeftInch()=0;
			/// <summary>
			/// The distance from the left edge of the client area to the left edge of the window.
			/// In unit of inch.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowLeftInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The distance from the left edge of the client area to the left edge of the window.
			/// In unit of centimeter.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowLeftCM()=0;
			/// <summary>
			/// The distance from the left edge of the client area to the left edge of the window.
			/// In unit of centimeter.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowLeftCM(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The distance from the top edge of the client area to the top edge of the window, in unit of point.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowTop()=0;
			/// <summary>
			/// The distance from the top edge of the client area to the top edge of the window, in unit of point.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowTop(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The distance from the top edge of the client area to the top edge of the window, in unit of inch.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowTopInch()=0;
			/// <summary>
			/// The distance from the top edge of the client area to the top edge of the window, in unit of inch.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowTopInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The distance from the top edge of the client area to the top edge of the window, in unit of centimeter.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowTopCM()=0;
			/// <summary>
			/// The distance from the top edge of the client area to the top edge of the window, in unit of centimeter.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowTopCM(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The width of the window, in unit of point.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowWidth()=0;
			/// <summary>
			/// The width of the window, in unit of point.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowWidth(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The width of the window, in unit of inch.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowWidthInch()=0;
			/// <summary>
			/// The width of the window, in unit of inch.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowWidthInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The width of the window, in unit of centimeter.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowWidthCM()=0;
			/// <summary>
			/// The width of the window, in unit of centimeter.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowWidthCM(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The height of the window, in unit of point.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowHeight()=0;
			/// <summary>
			/// The height of the window, in unit of point.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowHeight(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The height of the window, in unit of inch.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowHeightInch()=0;
			/// <summary>
			/// The height of the window, in unit of inch.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowHeightInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// The height of the window, in unit of centimeter.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWindowHeightCM()=0;
			/// <summary>
			/// The height of the window, in unit of centimeter.
			/// </summary>
			/// 
			/// 
			 virtual void SetWindowHeightCM(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Indicates whether update adjacent cells' border.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false.
			/// For example: the bottom border of the cell A1 is update, 
			/// the top border of the cell A2 should be changed too. 
			/// </remarks>
			/// 
			/// 
			 virtual bool GetUpdateAdjacentCellsBorder()=0;
			/// <summary>
			/// Indicates whether update adjacent cells' border.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false.
			/// For example: the bottom border of the cell A1 is update, 
			/// the top border of the cell A2 should be changed too. 
			/// </remarks>
			/// 
			/// 
			 virtual void SetUpdateAdjacentCellsBorder(bool value)=0;
			/// <summary>
			/// Indicates whether check compatibility when saving workbook.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is true.
			/// </remarks>
			/// 
			/// 
			 virtual bool GetCheckComptiliblity()=0;
			/// <summary>
			/// Indicates whether check compatibility when saving workbook.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is true.
			/// </remarks>
			/// 
			/// 
			 virtual void SetCheckComptiliblity(bool value)=0;
			/// <summary>
			/// Whether check restriction of excel file when user modify cells related objects.
			/// For example, excel does not allow inputting string value longer than 32K.
			/// When you input a value longer than 32K such as by PutValue(string) of ICell, if this property is true, you will get an Exception.
			/// If this property is false, we will accept your input string value as the cell's value so that later
			/// you can output the complete string value for other file formats such as CSV.
			/// However, if you have set such kind of value that is invalid for excel file format,
			/// you should not save the workbook as excel file format later. Otherwise there may be unexpected error for the generated excel file.
			/// </summary>
			/// 
			/// 
			 virtual bool GetCheckExcelRestriction()=0;
			/// <summary>
			/// Whether check restriction of excel file when user modify cells related objects.
			/// For example, excel does not allow inputting string value longer than 32K.
			/// When you input a value longer than 32K such as by PutValue(string) of ICell, if this property is true, you will get an Exception.
			/// If this property is false, we will accept your input string value as the cell's value so that later
			/// you can output the complete string value for other file formats such as CSV.
			/// However, if you have set such kind of value that is invalid for excel file format,
			/// you should not save the workbook as excel file format later. Otherwise there may be unexpected error for the generated excel file.
			/// </summary>
			/// 
			/// 
			 virtual void SetCheckExcelRestriction(bool value)=0;
			/// <summary>
			/// Indicates whether the file is mark for auto-recovery.
			/// </summary>
			/// 
			/// 
			 virtual bool GetAutoRecover()=0;
			/// <summary>
			/// Indicates whether the file is mark for auto-recovery.
			/// </summary>
			/// 
			/// 
			 virtual void SetAutoRecover(bool value)=0;
			/// <summary>
			/// indicates whether the application last saved the workbook file after a crash.
			/// </summary>
			/// 
			/// 
			 virtual bool GetCrashSave()=0;
			/// <summary>
			/// indicates whether the application last saved the workbook file after a crash.
			/// </summary>
			/// 
			/// 
			 virtual void SetCrashSave(bool value)=0;
			/// <summary>
			/// indicates whether the application last opened the workbook for data recovery.
			/// </summary>
			/// 
			/// 
			 virtual bool GetDataExtractLoad()=0;
			/// <summary>
			/// indicates whether the application last opened the workbook for data recovery.
			/// </summary>
			/// 
			/// 
			 virtual void SetDataExtractLoad(bool value)=0;
			/// <summary>
			/// Indicates whether the application last opened the workbook in safe or repair mode.
			/// </summary>
			/// 
			/// 
			 virtual bool GetRepairLoad()=0;
			/// <summary>
			/// Indicates whether the application last opened the workbook in safe or repair mode.
			/// </summary>
			/// 
			/// 
			 virtual void SetRepairLoad(bool value)=0;
			/// <summary>
			/// Specifies the incremental public release of the application.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetBuildVersion()=0;
			/// <summary>
			/// Specifies the incremental public release of the application.
			/// </summary>
			/// 
			/// 
			 virtual void SetBuildVersion(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the memory usage options. The new option will be taken as the default option for newly created worksheets but does not take effect for existing worksheets.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::MemorySetting GetMemorySetting()=0;
			/// <summary>
			/// Sets the memory usage options. The new option will be taken as the default option for newly created worksheets but does not take effect for existing worksheets.
			/// </summary>
			/// 
			/// 
			 virtual void SetMemorySetting(Aspose::Cells::MemorySetting value)=0;
			/// <summary>
			/// Gets and sets the default print paper size.
			/// </summary>
			/// 
			/// <remarks>
			/// If there is no setting about paper size,MS Excel will use default printer's setting.
			/// </remarks>
			/// 
			/// 
			 virtual Aspose::Cells::PaperSizeType GetPaperSize()=0;
			/// <summary>
			/// Gets and sets the default print paper size.
			/// </summary>
			/// 
			/// <remarks>
			/// If there is no setting about paper size,MS Excel will use default printer's setting.
			/// </remarks>
			/// 
			/// 
			 virtual void SetPaperSize(Aspose::Cells::PaperSizeType value)=0;

	};
}
}
