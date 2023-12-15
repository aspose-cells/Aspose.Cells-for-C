// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WORKBOOKSETTINGS_H
#define ASPOSE_CELLS_WORKBOOKSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/CountryCode.h"
#include "Aspose.Cells/DisplayDrawingObjects.h"
#include "Aspose.Cells/FontSchemeType.h"
#include "Aspose.Cells/MemorySetting.h"
#include "Aspose.Cells/OoxmlCompliance.h"
#include "Aspose.Cells/PageOrientationType.h"
#include "Aspose.Cells/PaperSizeType.h"
#include "Aspose.Cells/ProtectionType.h"
#include "Aspose.Cells/UpdateLinksType.h"

namespace Aspose { namespace Cells {
    class GlobalizationSettings;
    class WriteProtection;
    class IWarningCallback;
    class FormulaSettings;
} }

namespace Aspose { namespace Cells {

class WorkbookSettings_Impl;

/// <summary>
/// Represents all settings of the workbook.
/// </summary>
class WorkbookSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WorkbookSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WorkbookSettings(WorkbookSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WorkbookSettings(const WorkbookSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WorkbookSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WorkbookSettings& operator=(const WorkbookSettings& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Releases resources.
    /// </summary>
    ASPOSE_CELLS_API void Dispose();
    /// <summary>
    /// Gets the default theme font name.
    /// </summary>
    /// <param name="type">The scheme type of the font.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetThemeFont(FontSchemeType type);
    /// <summary>
    /// Gets and sets the author of the file.
    /// </summary>
    /// <remarks>
    /// It''s not set, check  <see cref="BuiltInDocumentPropertyCollection.Author"/> first, then check the user of Environment.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetAuthor();
    /// <summary>
    /// Gets and sets the author of the file.
    /// </summary>
    /// <remarks>
    /// It''s not set, check  <see cref="BuiltInDocumentPropertyCollection.Author"/> first, then check the user of Environment.
    /// </remarks>
    ASPOSE_CELLS_API void SetAuthor(const U16String& value);
    /// <summary>
    /// Gets and sets the author of the file.
    /// </summary>
    /// <remarks>
    /// It''s not set, check  <see cref="BuiltInDocumentPropertyCollection.Author"/> first, then check the user of Environment.
    /// </remarks>
    ASPOSE_CELLS_API void SetAuthor(const char16_t* value);
    /// <summary>
    /// Indicates whether checking custom number format when setting Style.Custom.
    /// </summary>
    ASPOSE_CELLS_API bool GetCheckCustomNumberFormat();
    /// <summary>
    /// Indicates whether checking custom number format when setting Style.Custom.
    /// </summary>
    ASPOSE_CELLS_API void SetCheckCustomNumberFormat(bool value);
    /// <summary>
    /// Enable macros;
    /// </summary>
    /// <remarks>
    /// Now it only works when copying a worksheet to other worksheet in a workbook.
    /// </remarks>
    ASPOSE_CELLS_API bool GetEnableMacros();
    /// <summary>
    /// Enable macros;
    /// </summary>
    /// <remarks>
    /// Now it only works when copying a worksheet to other worksheet in a workbook.
    /// </remarks>
    ASPOSE_CELLS_API void SetEnableMacros(bool value);
    /// <summary>
    /// Gets or sets a value which represents if the workbook uses the 1904 date system.
    /// </summary>
    ASPOSE_CELLS_API bool GetDate1904();
    /// <summary>
    /// Gets or sets a value which represents if the workbook uses the 1904 date system.
    /// </summary>
    ASPOSE_CELLS_API void SetDate1904(bool value);
    /// <summary>
    /// Gets the protection type of the workbook.
    /// </summary>
    ASPOSE_CELLS_API ProtectionType GetProtectionType();
    /// <summary>
    /// Indicates whether and how to show objects in the workbook.
    /// </summary>
    ASPOSE_CELLS_API DisplayDrawingObjects GetDisplayDrawingObjects();
    /// <summary>
    /// Indicates whether and how to show objects in the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayDrawingObjects(DisplayDrawingObjects value);
    /// <summary>
    /// Width of worksheet tab bar (in 1/1000 of window width).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSheetTabBarWidth();
    /// <summary>
    /// Width of worksheet tab bar (in 1/1000 of window width).
    /// </summary>
    ASPOSE_CELLS_API void SetSheetTabBarWidth(int32_t value);
    /// <summary>
    /// Get or sets a value whether the Workbook tabs are displayed.
    /// </summary>
    /// <remarks>The default value is true.</remarks>
    ASPOSE_CELLS_API bool GetShowTabs();
    /// <summary>
    /// Get or sets a value whether the Workbook tabs are displayed.
    /// </summary>
    /// <remarks>The default value is true.</remarks>
    ASPOSE_CELLS_API void SetShowTabs(bool value);
    /// <summary>
    /// Gets or sets the first visible worksheet tab.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstVisibleTab();
    /// <summary>
    /// Gets or sets the first visible worksheet tab.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstVisibleTab(int32_t value);
    /// <summary>
    /// Gets or sets a value indicating whether the generated spreadsheet will contain a horizontal scroll bar.
    /// </summary>
    /// <remarks>The default value is true.</remarks>
    ASPOSE_CELLS_API bool IsHScrollBarVisible();
    /// <summary>
    /// Gets or sets a value indicating whether the generated spreadsheet will contain a horizontal scroll bar.
    /// </summary>
    /// <remarks>The default value is true.</remarks>
    ASPOSE_CELLS_API void SetIsHScrollBarVisible(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether the generated spreadsheet will contain a vertical scroll bar.
    /// </summary>
    /// <remarks>The default value is true.</remarks>
    ASPOSE_CELLS_API bool IsVScrollBarVisible();
    /// <summary>
    /// Gets or sets a value indicating whether the generated spreadsheet will contain a vertical scroll bar.
    /// </summary>
    /// <remarks>The default value is true.</remarks>
    ASPOSE_CELLS_API void SetIsVScrollBarVisible(bool value);
    /// <summary>
    /// Gets or sets a value that indicates whether the Workbook is shared.
    /// </summary>
    /// <remarks>The default value is false.</remarks>
    ASPOSE_CELLS_API bool GetShared();
    /// <summary>
    /// Gets or sets a value that indicates whether the Workbook is shared.
    /// </summary>
    /// <remarks>The default value is false.</remarks>
    ASPOSE_CELLS_API void SetShared(bool value);
    /// <summary>
    /// Gets or sets the user interface language of the Workbook version based on CountryCode that has saved the file.
    /// </summary>
    ASPOSE_CELLS_API CountryCode GetLanguageCode();
    /// <summary>
    /// Gets or sets the user interface language of the Workbook version based on CountryCode that has saved the file.
    /// </summary>
    ASPOSE_CELLS_API void SetLanguageCode(CountryCode value);
    /// <summary>
    /// Gets or sets the regional settings for workbook.
    /// </summary>
    /// <remarks>
    /// 1. Regional settings used by Aspose.Cells component for a workbook loaded from template file:
    /// i). For an XLS file, there are fields defined for regional settings and MS Excel does save regional settings data into the file when saving the XLS file.
    /// So, we use the saved region in the template file for the workbook.
    /// If you do not want to use the region saved in the XLS file, please reset it to the expected one (such as, CountryCode.Default) after loading the template file.
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
    ASPOSE_CELLS_API CountryCode GetRegion();
    /// <summary>
    /// Gets or sets the regional settings for workbook.
    /// </summary>
    /// <remarks>
    /// 1. Regional settings used by Aspose.Cells component for a workbook loaded from template file:
    /// i). For an XLS file, there are fields defined for regional settings and MS Excel does save regional settings data into the file when saving the XLS file.
    /// So, we use the saved region in the template file for the workbook.
    /// If you do not want to use the region saved in the XLS file, please reset it to the expected one (such as, CountryCode.Default) after loading the template file.
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
    ASPOSE_CELLS_API void SetRegion(CountryCode value);
    /// <summary>
    /// Gets and sets the globalization settings.
    /// </summary>
    ASPOSE_CELLS_API GlobalizationSettings* GetGlobalizationSettings();
    /// <summary>
    /// Gets and sets the globalization settings.
    /// </summary>
    ASPOSE_CELLS_API void SetGlobalizationSettings(GlobalizationSettings* value);
    /// <summary>
    /// Gets or sets the decimal separator for formatting/parsing numeric values. Default is the decimal separator of current Region.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetNumberDecimalSeparator();
    /// <summary>
    /// Gets or sets the decimal separator for formatting/parsing numeric values. Default is the decimal separator of current Region.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberDecimalSeparator(char16_t value);
    /// <summary>
    /// Gets or sets the character that separates groups of digits to the left of the decimal in numeric values. Default is the group separator of current Region.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetNumberGroupSeparator();
    /// <summary>
    /// Gets or sets the character that separates groups of digits to the left of the decimal in numeric values. Default is the group separator of current Region.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberGroupSeparator(char16_t value);
    /// <summary>
    /// Represents Workbook file encryption password.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPassword();
    /// <summary>
    /// Represents Workbook file encryption password.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const U16String& value);
    /// <summary>
    /// Represents Workbook file encryption password.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const char16_t* value);
    /// <summary>
    /// Provides access to the workbook write protection options.
    /// </summary>
    ASPOSE_CELLS_API WriteProtection GetWriteProtection();
    /// <summary>
    /// Gets a value that indicates whether a password is required to open this workbook.
    /// </summary>
    ASPOSE_CELLS_API bool IsEncrypted();
    /// <summary>
    /// Gets a value that indicates whether the structure or window of the Workbook is protected.
    /// </summary>
    ASPOSE_CELLS_API bool IsProtected();
    /// <summary>
    /// Indicates whether encrypting the workbook with default password if Structure and Windows of the workbook are locked.
    /// </summary>
    /// <remarks>
    /// The default value is false now. It's same as MS Excel 2013.
    /// </remarks>
    ASPOSE_CELLS_API bool IsDefaultEncrypted();
    /// <summary>
    /// Indicates whether encrypting the workbook with default password if Structure and Windows of the workbook are locked.
    /// </summary>
    /// <remarks>
    /// The default value is false now. It's same as MS Excel 2013.
    /// </remarks>
    ASPOSE_CELLS_API void SetIsDefaultEncrypted(bool value);
    /// <summary>
    /// Represents whether the generated spreadsheet will be opened Minimized.
    /// </summary>
    ASPOSE_CELLS_API bool IsMinimized();
    /// <summary>
    /// Represents whether the generated spreadsheet will be opened Minimized.
    /// </summary>
    ASPOSE_CELLS_API void SetIsMinimized(bool value);
    /// <summary>
    /// Indicates whether this workbook is hidden.
    /// </summary>
    ASPOSE_CELLS_API bool IsHidden();
    /// <summary>
    /// Indicates whether this workbook is hidden.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHidden(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates the application automatically compressed pictures in the workbook.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoCompressPictures();
    /// <summary>
    /// Specifies a boolean value that indicates the application automatically compressed pictures in the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoCompressPictures(bool value);
    /// <summary>
    /// True if personal information can be removed from the specified workbook.
    /// </summary>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API bool GetRemovePersonalInformation();
    /// <summary>
    /// True if personal information can be removed from the specified workbook.
    /// </summary>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API void SetRemovePersonalInformation(bool value);
    /// <summary>
    /// Gets and sets whether hide the field list for the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API bool GetHidePivotFieldList();
    /// <summary>
    /// Gets and sets whether hide the field list for the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API void SetHidePivotFieldList(bool value);
    /// <summary>
    /// Gets and sets how updates external links when the workbook is opened.
    /// </summary>
    ASPOSE_CELLS_API UpdateLinksType GetUpdateLinksType();
    /// <summary>
    /// Gets and sets how updates external links when the workbook is opened.
    /// </summary>
    ASPOSE_CELLS_API void SetUpdateLinksType(UpdateLinksType value);
    /// <summary>
    /// Set the type of  print orientation for the whole workbook.
    /// </summary>
    /// <param name="pageOrientationType">The page orientation type</param>
    ASPOSE_CELLS_API void SetPageOrientationType(PageOrientationType pageOrientationType);
    /// <summary>
    /// Gets the max row index, zero-based.
    /// </summary>
    /// <remarks>
    /// Returns 65535 if the file format is Excel97-2003;
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetMaxRow();
    /// <summary>
    /// Gets the max column index, zero-based.
    /// </summary>
    /// <remarks>
    /// Returns 255 if the file format is Excel97-2003;
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetMaxColumn();
    /// <summary>
    /// The distance from the left edge of the client area to the left edge of the window, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowLeft();
    /// <summary>
    /// The distance from the left edge of the client area to the left edge of the window, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowLeft(double value);
    /// <summary>
    /// The distance from the left edge of the client area to the left edge of the window.
    /// In unit of inch.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowLeftInch();
    /// <summary>
    /// The distance from the left edge of the client area to the left edge of the window.
    /// In unit of inch.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowLeftInch(double value);
    /// <summary>
    /// The distance from the left edge of the client area to the left edge of the window.
    /// In unit of centimeter.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowLeftCM();
    /// <summary>
    /// The distance from the left edge of the client area to the left edge of the window.
    /// In unit of centimeter.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowLeftCM(double value);
    /// <summary>
    /// The distance from the top edge of the client area to the top edge of the window, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowTop();
    /// <summary>
    /// The distance from the top edge of the client area to the top edge of the window, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowTop(double value);
    /// <summary>
    /// The distance from the top edge of the client area to the top edge of the window, in unit of inch.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowTopInch();
    /// <summary>
    /// The distance from the top edge of the client area to the top edge of the window, in unit of inch.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowTopInch(double value);
    /// <summary>
    /// The distance from the top edge of the client area to the top edge of the window, in unit of centimeter.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowTopCM();
    /// <summary>
    /// The distance from the top edge of the client area to the top edge of the window, in unit of centimeter.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowTopCM(double value);
    /// <summary>
    /// The width of the window, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowWidth();
    /// <summary>
    /// The width of the window, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowWidth(double value);
    /// <summary>
    /// The width of the window, in unit of inch.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowWidthInch();
    /// <summary>
    /// The width of the window, in unit of inch.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowWidthInch(double value);
    /// <summary>
    /// The width of the window, in unit of centimeter.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowWidthCM();
    /// <summary>
    /// The width of the window, in unit of centimeter.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowWidthCM(double value);
    /// <summary>
    /// The height of the window, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowHeight();
    /// <summary>
    /// The height of the window, in unit of point.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowHeight(double value);
    /// <summary>
    /// The height of the window, in unit of inch.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowHeightInch();
    /// <summary>
    /// The height of the window, in unit of inch.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowHeightInch(double value);
    /// <summary>
    /// The height of the window, in unit of centimeter.
    /// </summary>
    ASPOSE_CELLS_API double GetWindowHeightCM();
    /// <summary>
    /// The height of the window, in unit of centimeter.
    /// </summary>
    ASPOSE_CELLS_API void SetWindowHeightCM(double value);
    /// <summary>
    /// Indicates whether update adjacent cells' border.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// For example: the bottom border of the cell A1 is update,
    /// the top border of the cell A2 should be changed too.
    /// </remarks>
    ASPOSE_CELLS_API bool GetUpdateAdjacentCellsBorder();
    /// <summary>
    /// Indicates whether update adjacent cells' border.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// For example: the bottom border of the cell A1 is update,
    /// the top border of the cell A2 should be changed too.
    /// </remarks>
    ASPOSE_CELLS_API void SetUpdateAdjacentCellsBorder(bool value);
    /// <summary>
    /// Gets and sets the number of significant digits.
    /// The default value is <see cref="CellsHelper.SignificantDigits"/>.
    /// </summary>
    /// <remarks>
    /// Only could be 15 or 17 now.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetSignificantDigits();
    /// <summary>
    /// Gets and sets the number of significant digits.
    /// The default value is <see cref="CellsHelper.SignificantDigits"/>.
    /// </summary>
    /// <remarks>
    /// Only could be 15 or 17 now.
    /// </remarks>
    ASPOSE_CELLS_API void SetSignificantDigits(int32_t value);
    /// <summary>
    /// Indicates whether check compatibility with earlier versions when saving workbook.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// Only for Excel97-2003 xls or xlt files.
    /// </remarks>
    ASPOSE_CELLS_API bool GetCheckCompatibility();
    /// <summary>
    /// Indicates whether check compatibility with earlier versions when saving workbook.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// Only for Excel97-2003 xls or xlt files.
    /// </remarks>
    ASPOSE_CELLS_API void SetCheckCompatibility(bool value);
    /// <summary>
    /// Whether check restriction of excel file when user modify cells related objects.
    /// For example, excel does not allow inputting string value longer than 32K.
    /// When you input a value longer than 32K such as by Cell.PutValue(string), if this property is true, you will get an Exception.
    /// If this property is false, we will accept your input string value as the cell's value so that later
    /// you can output the complete string value for other file formats such as CSV.
    /// However, if you have set such kind of value that is invalid for excel file format,
    /// you should not save the workbook as excel file format later. Otherwise there may be unexpected error for the generated excel file.
    /// </summary>
    ASPOSE_CELLS_API bool GetCheckExcelRestriction();
    /// <summary>
    /// Whether check restriction of excel file when user modify cells related objects.
    /// For example, excel does not allow inputting string value longer than 32K.
    /// When you input a value longer than 32K such as by Cell.PutValue(string), if this property is true, you will get an Exception.
    /// If this property is false, we will accept your input string value as the cell's value so that later
    /// you can output the complete string value for other file formats such as CSV.
    /// However, if you have set such kind of value that is invalid for excel file format,
    /// you should not save the workbook as excel file format later. Otherwise there may be unexpected error for the generated excel file.
    /// </summary>
    ASPOSE_CELLS_API void SetCheckExcelRestriction(bool value);
    /// <summary>
    /// Indicates whether the file is mark for auto-recovery.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoRecover();
    /// <summary>
    /// Indicates whether the file is mark for auto-recovery.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoRecover(bool value);
    /// <summary>
    /// indicates whether the application last saved the workbook file after a crash.
    /// </summary>
    ASPOSE_CELLS_API bool GetCrashSave();
    /// <summary>
    /// indicates whether the application last saved the workbook file after a crash.
    /// </summary>
    ASPOSE_CELLS_API void SetCrashSave(bool value);
    /// <summary>
    /// indicates whether the application last opened the workbook for data recovery.
    /// </summary>
    ASPOSE_CELLS_API bool GetDataExtractLoad();
    /// <summary>
    /// indicates whether the application last opened the workbook for data recovery.
    /// </summary>
    ASPOSE_CELLS_API void SetDataExtractLoad(bool value);
    /// <summary>
    /// Indicates whether the application last opened the workbook in safe or repair mode.
    /// </summary>
    ASPOSE_CELLS_API bool GetRepairLoad();
    /// <summary>
    /// Indicates whether the application last opened the workbook in safe or repair mode.
    /// </summary>
    ASPOSE_CELLS_API void SetRepairLoad(bool value);
    /// <summary>
    /// Specifies the incremental public release of the application.
    /// </summary>
    ASPOSE_CELLS_API U16String GetBuildVersion();
    /// <summary>
    /// Specifies the incremental public release of the application.
    /// </summary>
    ASPOSE_CELLS_API void SetBuildVersion(const U16String& value);
    /// <summary>
    /// Specifies the incremental public release of the application.
    /// </summary>
    ASPOSE_CELLS_API void SetBuildVersion(const char16_t* value);
    /// <summary>
    /// Gets or sets the memory usage options. The new option will be taken as the default option for newly created worksheets but does not take effect for existing worksheets.
    /// </summary>
    ASPOSE_CELLS_API MemorySetting GetMemorySetting();
    /// <summary>
    /// Gets or sets the memory usage options. The new option will be taken as the default option for newly created worksheets but does not take effect for existing worksheets.
    /// </summary>
    ASPOSE_CELLS_API void SetMemorySetting(MemorySetting value);
    /// <summary>
    /// Gets and sets the default print paper size.
    /// </summary>
    /// <remarks>
    /// If there is no setting about paper size,MS Excel will use default printer's setting.
    /// </remarks>
    ASPOSE_CELLS_API PaperSizeType GetPaperSize();
    /// <summary>
    /// Gets and sets the default print paper size.
    /// </summary>
    /// <remarks>
    /// If there is no setting about paper size,MS Excel will use default printer's setting.
    /// </remarks>
    ASPOSE_CELLS_API void SetPaperSize(PaperSizeType value);
    /// <summary>
    /// Gets or sets warning callback.
    /// </summary>
    ASPOSE_CELLS_API void SetWarningCallback(IWarningCallback* value);
    /// <summary>
    /// Gets or sets warning callback.
    /// </summary>
    ASPOSE_CELLS_API IWarningCallback* GetWarningCallback();
    /// <summary>
    /// Gets and sets the max row number of shared formula.
    /// </summary>
    /// <remarks>
    /// If the number is too large, the autofilter works very slow in MS Excel 2013.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetMaxRowsOfSharedFormula();
    /// <summary>
    /// Gets and sets the max row number of shared formula.
    /// </summary>
    /// <remarks>
    /// If the number is too large, the autofilter works very slow in MS Excel 2013.
    /// </remarks>
    ASPOSE_CELLS_API void SetMaxRowsOfSharedFormula(int32_t value);
    /// <summary>
    /// Specifies the OOXML version for the output document. The default value is Ecma376_2006.
    /// </summary>
    /// <remarks>
    /// Only for .xlsx files.
    /// </remarks>
    ASPOSE_CELLS_API OoxmlCompliance GetCompliance();
    /// <summary>
    /// Specifies the OOXML version for the output document. The default value is Ecma376_2006.
    /// </summary>
    /// <remarks>
    /// Only for .xlsx files.
    /// </remarks>
    ASPOSE_CELLS_API void SetCompliance(OoxmlCompliance value);
    /// <summary>
    /// Indicates whether setting <see cref="Style.QuotePrefix"/> property when entering the string value(which starts  with single quote mark ) to the cell
    /// </summary>
    ASPOSE_CELLS_API bool GetQuotePrefixToStyle();
    /// <summary>
    /// Indicates whether setting <see cref="Style.QuotePrefix"/> property when entering the string value(which starts  with single quote mark ) to the cell
    /// </summary>
    ASPOSE_CELLS_API void SetQuotePrefixToStyle(bool value);
    /// <summary>
    /// Gets the settings for formula-related features.
    /// </summary>
    ASPOSE_CELLS_API FormulaSettings GetFormulaSettings();
    
};

} }

#endif
