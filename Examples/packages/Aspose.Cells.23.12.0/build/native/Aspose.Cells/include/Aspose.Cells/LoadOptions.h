// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_LOADOPTIONS_H
#define ASPOSE_CELLS_LOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/CountryCode.h"
#include "Aspose.Cells/LoadFormat.h"
#include "Aspose.Cells/MemorySetting.h"
#include "Aspose.Cells/PaperSizeType.h"

namespace Aspose { namespace Cells {
    class DefaultStyleSettings;
    class AbstractInterruptMonitor;
    class LoadFilter;
    class LightCellsDataHandler;
    class IWarningCallback;
    class AutoFitterOptions;
    class IndividualFontConfigs;
} }

namespace Aspose { namespace Cells {

class LoadOptions_Impl;

/// <summary>
/// Represents the options of loading the file.
/// </summary>
class LoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    LoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates an options of loading the file.
    /// </summary>
    ASPOSE_CELLS_API LoadOptions();
    /// <summary>
    /// Creates an options of loading the file.
    /// </summary>
    /// <param name="loadFormat">The loading format.</param>
    ASPOSE_CELLS_API explicit LoadOptions(LoadFormat loadFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API LoadOptions(LoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API LoadOptions(const LoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~LoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API LoadOptions& operator=(const LoadOptions& src);
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
    /// Gets the load format.
    /// </summary>
    ASPOSE_CELLS_API LoadFormat GetLoadFormat();
    /// <summary>
    /// Gets and set the password of the workbook.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPassword();
    /// <summary>
    /// Gets and set the password of the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const U16String& value);
    /// <summary>
    /// Gets and set the password of the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const char16_t* value);
    /// <summary>
    /// Indicates whether parsing the formula when reading the file.
    /// </summary>
    /// <remarks>
    /// Only applies for Excel Xlsx, Xltx, Xltm and Xlsm file
    /// because the formulas in the files are stored with a string formula.
    /// </remarks>
    ASPOSE_CELLS_API bool GetParsingFormulaOnOpen();
    /// <summary>
    /// Indicates whether parsing the formula when reading the file.
    /// </summary>
    /// <remarks>
    /// Only applies for Excel Xlsx, Xltx, Xltm and Xlsm file
    /// because the formulas in the files are stored with a string formula.
    /// </remarks>
    ASPOSE_CELLS_API void SetParsingFormulaOnOpen(bool value);
    /// <summary>
    /// Indicates whether parsing pivot cached records when loading the file.
    /// The default value is false.
    /// </summary>
    /// <remarks>
    /// Only applies for Excel Xlsx, Xltx, Xltm , Xlsm and xlsb file</remarks>
    ASPOSE_CELLS_API bool GetParsingPivotCachedRecords();
    /// <summary>
    /// Indicates whether parsing pivot cached records when loading the file.
    /// The default value is false.
    /// </summary>
    /// <remarks>
    /// Only applies for Excel Xlsx, Xltx, Xltm , Xlsm and xlsb file</remarks>
    ASPOSE_CELLS_API void SetParsingPivotCachedRecords(bool value);
    /// <summary>
    /// Sets the default print paper size from default printer's setting.
    /// </summary>
    /// <param name="type">The default paper size.</param>
    /// <remarks>
    /// If there is no setting about paper size,MS Excel will use default printer's setting.
    /// </remarks>
    ASPOSE_CELLS_API void SetPaperSize(PaperSizeType type);
    /// <summary>
    /// Gets or sets the user interface language of the Workbook version based on CountryCode that has saved the file.
    /// </summary>
    ASPOSE_CELLS_API CountryCode GetLanguageCode();
    /// <summary>
    /// Gets or sets the user interface language of the Workbook version based on CountryCode that has saved the file.
    /// </summary>
    ASPOSE_CELLS_API void SetLanguageCode(CountryCode value);
    /// <summary>
    /// Gets or sets the system regional settings based on CountryCode at the time the file was loaded.
    /// </summary>
    /// <remarks>If you do not want to use the region  saved in the file,
    /// please reset it after reading the file.</remarks>
    ASPOSE_CELLS_API CountryCode GetRegion();
    /// <summary>
    /// Gets or sets the system regional settings based on CountryCode at the time the file was loaded.
    /// </summary>
    /// <remarks>If you do not want to use the region  saved in the file,
    /// please reset it after reading the file.</remarks>
    ASPOSE_CELLS_API void SetRegion(CountryCode value);
    /// <summary>
    /// Gets the default style settings for initializing styles of the workbook
    /// </summary>
    ASPOSE_CELLS_API DefaultStyleSettings GetDefaultStyleSettings();
    /// <summary>
    /// Gets and sets the interrupt monitor.
    /// </summary>
    ASPOSE_CELLS_API AbstractInterruptMonitor* GetInterruptMonitor();
    /// <summary>
    /// Gets and sets the interrupt monitor.
    /// </summary>
    ASPOSE_CELLS_API void SetInterruptMonitor(AbstractInterruptMonitor* value);
    /// <summary>
    /// Ignore the data which are not printed if directly printing the file
    /// </summary>
    /// <remarks>
    /// Only for xlsx file.
    /// </remarks>
    ASPOSE_CELLS_API bool GetIgnoreNotPrinted();
    /// <summary>
    /// Ignore the data which are not printed if directly printing the file
    /// </summary>
    /// <remarks>
    /// Only for xlsx file.
    /// </remarks>
    ASPOSE_CELLS_API void SetIgnoreNotPrinted(bool value);
    /// <summary>
    /// Check whether data is valid in the template file.
    /// </summary>
    ASPOSE_CELLS_API bool GetCheckDataValid();
    /// <summary>
    /// Check whether data is valid in the template file.
    /// </summary>
    ASPOSE_CELLS_API void SetCheckDataValid(bool value);
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
    /// Whether keep the unparsed data in memory for the Workbook when it is loaded from template file. Default is true.
    /// </summary>
    /// <remarks>
    /// For scenarios that user only needs to read some contents from template file and does not need to save the workbook back,
    /// set this property as false may improve performance, especially when using it together with some kind of LoadFilter,
    /// </remarks>
    ASPOSE_CELLS_API bool GetKeepUnparsedData();
    /// <summary>
    /// Whether keep the unparsed data in memory for the Workbook when it is loaded from template file. Default is true.
    /// </summary>
    /// <remarks>
    /// For scenarios that user only needs to read some contents from template file and does not need to save the workbook back,
    /// set this property as false may improve performance, especially when using it together with some kind of LoadFilter,
    /// </remarks>
    ASPOSE_CELLS_API void SetKeepUnparsedData(bool value);
    /// <summary>
    /// The filter to denote how to load data.
    /// </summary>
    ASPOSE_CELLS_API LoadFilter* GetLoadFilter();
    /// <summary>
    /// The filter to denote how to load data.
    /// </summary>
    ASPOSE_CELLS_API void SetLoadFilter(LoadFilter* value);
    /// <summary>
    /// The data handler for processing cells data when reading template file.
    /// </summary>
    ASPOSE_CELLS_API LightCellsDataHandler* GetLightCellsDataHandler();
    /// <summary>
    /// The data handler for processing cells data when reading template file.
    /// </summary>
    ASPOSE_CELLS_API void SetLightCellsDataHandler(LightCellsDataHandler* value);
    /// <summary>
    /// Gets or sets the memory usage options.
    /// </summary>
    ASPOSE_CELLS_API MemorySetting GetMemorySetting();
    /// <summary>
    /// Gets or sets the memory usage options.
    /// </summary>
    ASPOSE_CELLS_API void SetMemorySetting(MemorySetting value);
    /// <summary>
    /// Gets or sets warning callback.
    /// </summary>
    ASPOSE_CELLS_API void SetWarningCallback(IWarningCallback* value);
    /// <summary>
    /// Gets or sets warning callback.
    /// </summary>
    ASPOSE_CELLS_API IWarningCallback* GetWarningCallback();
    /// <summary>
    /// Gets and sets the auto fitter options
    /// </summary>
    /// <remarks>
    /// Only for xlsx ,spreadsheetML file now.
    /// </remarks>
    ASPOSE_CELLS_API AutoFitterOptions GetAutoFitterOptions();
    /// <summary>
    /// Gets and sets the auto fitter options
    /// </summary>
    /// <remarks>
    /// Only for xlsx ,spreadsheetML file now.
    /// </remarks>
    ASPOSE_CELLS_API void SetAutoFitterOptions(const AutoFitterOptions& value);
    /// <summary>
    /// Indicates whether auto filtering the data when loading the files.
    /// </summary>
    /// <remarks>
    /// Sometimes although autofilter is set, the corresponding rows is not hidden in the file.
    /// Now only works for SpreadSheetML file.
    /// </remarks>
    ASPOSE_CELLS_API bool GetAutoFilter();
    /// <summary>
    /// Indicates whether auto filtering the data when loading the files.
    /// </summary>
    /// <remarks>
    /// Sometimes although autofilter is set, the corresponding rows is not hidden in the file.
    /// Now only works for SpreadSheetML file.
    /// </remarks>
    ASPOSE_CELLS_API void SetAutoFilter(bool value);
    /// <summary>
    /// Gets and sets individual font configs.
    /// Only works for the <see cref="Workbook"/> which uses this <see cref="LoadOptions"/> to load.
    /// </summary>
    ASPOSE_CELLS_API IndividualFontConfigs GetFontConfigs();
    /// <summary>
    /// Gets and sets individual font configs.
    /// Only works for the <see cref="Workbook"/> which uses this <see cref="LoadOptions"/> to load.
    /// </summary>
    ASPOSE_CELLS_API void SetFontConfigs(const IndividualFontConfigs& value);
    /// <summary>
    /// Indicates whether ignoring useless shapes.
    /// </summary>
    /// <remarks>
    /// Only works for xlsx,xlsb, and xlsm files.
    /// There are many overlapping identical shapes which are useless in some files,
    /// we can ingore them when loading files.
    /// </remarks>
    ASPOSE_CELLS_API bool GetIgnoreUselessShapes();
    /// <summary>
    /// Indicates whether ignoring useless shapes.
    /// </summary>
    /// <remarks>
    /// Only works for xlsx,xlsb, and xlsm files.
    /// There are many overlapping identical shapes which are useless in some files,
    /// we can ingore them when loading files.
    /// </remarks>
    ASPOSE_CELLS_API void SetIgnoreUselessShapes(bool value);
    /// <summary>
    /// Indicates whether preserve those spaces and line breaks that are padded between formula tokens
    /// while getting and setting formulas.
    /// Default value is false.
    /// </summary>
    /// <remarks>
    /// After loading workbook from template file with this option, <see cref="FormulaSettings.PreservePaddingSpaces"/>
    /// will be set to the same value with this property.
    /// </remarks>
    ASPOSE_CELLS_API bool GetPreservePaddingSpacesInFormula();
    /// <summary>
    /// Indicates whether preserve those spaces and line breaks that are padded between formula tokens
    /// while getting and setting formulas.
    /// Default value is false.
    /// </summary>
    /// <remarks>
    /// After loading workbook from template file with this option, <see cref="FormulaSettings.PreservePaddingSpaces"/>
    /// will be set to the same value with this property.
    /// </remarks>
    ASPOSE_CELLS_API void SetPreservePaddingSpacesInFormula(bool value);
    
};

} }

#endif
