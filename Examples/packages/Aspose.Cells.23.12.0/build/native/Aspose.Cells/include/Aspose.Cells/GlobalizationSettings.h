// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_GLOBALIZATIONSETTINGS_H
#define ASPOSE_CELLS_GLOBALIZATIONSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/CommentTitleType.h"
#include "Aspose.Cells/ConsolidationFunction.h"

namespace Aspose { namespace Cells { namespace Charts {
    class ChartGlobalizationSettings;
} } }

namespace Aspose { namespace Cells { namespace Settings {
    class PivotGlobalizationSettings;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Charts;
using namespace Aspose::Cells::Rendering;
using namespace Aspose::Cells::Settings;

class GlobalizationSettings_Bridge;

/// <summary>
/// Represents the globalization settings.
/// </summary>
class ASPOSE_CELLS_API2 GlobalizationSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    GlobalizationSettings_Bridge* _impl;

public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API GlobalizationSettings();
    ASPOSE_CELLS_API GlobalizationSettings(const GlobalizationSettings& src) = delete;
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~GlobalizationSettings();
    ASPOSE_CELLS_API GlobalizationSettings& operator=(const GlobalizationSettings& src) = delete;
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
    /// Gets the globalization settings for Chart.
    /// </summary>
    ASPOSE_CELLS_API ChartGlobalizationSettings* GetChartSettings();
    /// <summary>
    /// Sets the globalization settings for Chart.
    /// </summary>
    ASPOSE_CELLS_API void SetChartSettings(ChartGlobalizationSettings* value);
    /// <summary>
    /// Gets the globalization settings for pivot table.
    /// </summary>
    ASPOSE_CELLS_API PivotGlobalizationSettings* GetPivotSettings();
    /// <summary>
    /// Sets the globalization settings for pivot table.
    /// </summary>
    ASPOSE_CELLS_API void SetPivotSettings(PivotGlobalizationSettings* value);
    /// <summary>
    /// Gets the total name of the function.
    /// </summary>
    /// <param name="functionType">The function type.</param>
    /// <returns>The total name of the function.</returns>
    ASPOSE_CELLS_API virtual U16String GetTotalName(ConsolidationFunction functionType);
    /// <summary>
    /// Gets the grand total name of the function.
    /// </summary>
    /// <param name="functionType">The function type.</param>
    /// <returns>The grand total name of the function.</returns>
    ASPOSE_CELLS_API virtual U16String GetGrandTotalName(ConsolidationFunction functionType);
    /// <summary>
    /// Gets the default sheet name for adding worksheet automatically.
    /// Default is "Sheet".
    /// </summary>
    /// <returns>the default sheet name for adding worksheet automatically</returns>
    /// <remarks>The automatically added(such as by <see cref="WorksheetCollection.Add()"/>)
    /// sheet's name will be the specified name plus sequence number.
    /// For example, for Germany user maybe wants the sheet name to be "Tabellenblatt2" instead of "Sheet2". 
    /// Then user may implement this method to return "Tabellenblatt".</remarks>
    ASPOSE_CELLS_API virtual U16String GetDefaultSheetName();
    /// <summary>
    /// Gets the type name of table rows that consists of the table header.
    /// Default is "Headers", so in formula "#Headers" represents the table header.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API virtual U16String GetTableRowTypeOfHeaders();
    /// <summary>
    /// Gets the type name of table rows that consists of data region of referenced table.
    /// Default is "Data", so in formula "#Data" represents the data region of the table.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API virtual U16String GetTableRowTypeOfData();
    /// <summary>
    /// Gets the type name of table rows that consists of all rows in referenced table.
    /// Default is "All", so in formula "#All" represents all rows in referenced table.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API virtual U16String GetTableRowTypeOfAll();
    /// <summary>
    /// Gets the type name of table rows that consists of the total row of referenced table.
    /// Default is "Totals", so in formula "#Totals" represents the total row of referenced table.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API virtual U16String GetTableRowTypeOfTotals();
    /// <summary>
    /// Gets the type name of table rows that consists of the current row in referenced table.
    /// Default is "This Row", so in formula "#This Row" represents the current row in referenced table.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API virtual U16String GetTableRowTypeOfCurrent();
    /// <summary>
    /// Gets the display string value for cell's error value
    /// </summary>
    /// <param name="err">error values such as #VALUE!,#NAME?</param>
    /// <returns>By default returns the error value itself</returns>
    ASPOSE_CELLS_API virtual U16String GetErrorValueString(const U16String& err);
    /// <summary>
    /// Gets the display string value for cell's error value
    /// </summary>
    /// <param name="err">error values such as #VALUE!,#NAME?</param>
    /// <returns>By default returns the error value itself</returns>
    ASPOSE_CELLS_API virtual U16String GetErrorValueString(const char16_t* err);
    /// <summary>
    /// Gets the display string value for cell's boolean value
    /// </summary>
    /// <param name="bv">boolean value</param>
    /// <returns>By default returns "TRUE" for true value and "FALSE" for false value.</returns>
    ASPOSE_CELLS_API virtual U16String GetBooleanValueString(bool bv);
    /// <summary>
    /// Gets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <returns>Locale dependent function name. The locale was specified by the Workbook for which this settings is used.</returns>
    ASPOSE_CELLS_API virtual U16String GetLocalFunctionName(const U16String& standardName);
    /// <summary>
    /// Gets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <returns>Locale dependent function name. The locale was specified by the Workbook for which this settings is used.</returns>
    ASPOSE_CELLS_API virtual U16String GetLocalFunctionName(const char16_t* standardName);
    /// <summary>
    /// Gets the standard function name according to given locale dependent function name.
    /// </summary>
    /// <param name="localName">Locale dependent function name. The locale was specified by the Workbook for which this settings is used.</param>
    ASPOSE_CELLS_API virtual U16String GetStandardFunctionName(const U16String& localName);
    /// <summary>
    /// Gets the standard function name according to given locale dependent function name.
    /// </summary>
    /// <param name="localName">Locale dependent function name. The locale was specified by the Workbook for which this settings is used.</param>
    ASPOSE_CELLS_API virtual U16String GetStandardFunctionName(const char16_t* localName);
    /// <summary>
    /// Gets the locale dependent text for built-in Name according to given standard text.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) text of built-in Name.</param>
    /// <returns>Locale dependent text. The locale was specified by the Workbook for which this settings is used.</returns>
    ASPOSE_CELLS_API virtual U16String GetLocalBuiltInName(const U16String& standardName);
    /// <summary>
    /// Gets the locale dependent text for built-in Name according to given standard text.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) text of built-in Name.</param>
    /// <returns>Locale dependent text. The locale was specified by the Workbook for which this settings is used.</returns>
    ASPOSE_CELLS_API virtual U16String GetLocalBuiltInName(const char16_t* standardName);
    /// <summary>
    /// Gets the standard text of built-in Name according to given locale dependent text.
    /// </summary>
    /// <param name="localName">Locale dependent text of built-in Name. The locale was specified by the Workbook for which this settings is used.</param>
    /// <returns>Standard(en-US locale) text.</returns>
    ASPOSE_CELLS_API virtual U16String GetStandardBuiltInName(const U16String& localName);
    /// <summary>
    /// Gets the standard text of built-in Name according to given locale dependent text.
    /// </summary>
    /// <param name="localName">Locale dependent text of built-in Name. The locale was specified by the Workbook for which this settings is used.</param>
    /// <returns>Standard(en-US locale) text.</returns>
    ASPOSE_CELLS_API virtual U16String GetStandardBuiltInName(const char16_t* localName);
    /// <summary>
    /// Gets the separator for list, parameters of function, ...etc.
    /// </summary>
    ASPOSE_CELLS_API virtual char16_t GetListSeparator();
    /// <summary>
    /// Gets the separator for rows in array data in formula.
    /// </summary>
    ASPOSE_CELLS_API virtual char16_t GetRowSeparatorOfFormulaArray();
    /// <summary>
    /// Gets the separator for the items in array's row data in formula.
    /// </summary>
    ASPOSE_CELLS_API virtual char16_t GetColumnSeparatorOfFormulaArray();
    /// <summary>
    /// Gets standard English font style name(Regular, Bold, Italic) for Header/Footer according to given locale font style name.
    /// </summary>
    /// <param name="localfontStyleName">Locale font style name for Header/Footer.</param>
    /// <returns>Standard English font style name(Regular, Bold, Italic)</returns>
    ASPOSE_CELLS_API virtual U16String GetStandardHeaderFooterFontStyleName(const U16String& localfontStyleName);
    /// <summary>
    /// Gets standard English font style name(Regular, Bold, Italic) for Header/Footer according to given locale font style name.
    /// </summary>
    /// <param name="localfontStyleName">Locale font style name for Header/Footer.</param>
    /// <returns>Standard English font style name(Regular, Bold, Italic)</returns>
    ASPOSE_CELLS_API virtual U16String GetStandardHeaderFooterFontStyleName(const char16_t* localfontStyleName);
    /// <summary>
    /// Gets the locale dependent comment title name according to comment title type.
    /// </summary>
    /// <param name="type"></param>
    ASPOSE_CELLS_API virtual U16String GetCommentTitleName(CommentTitleType type);
    /// <summary>
    /// Compares two string values according to certain collation rules.
    /// </summary>
    /// <param name="v1">the first string</param>
    /// <param name="v2">the second string</param>
    /// <param name="ignoreCase">whether ignore case when comparing values</param>
    /// <returns>Integer that indicates the lexical relationship between the two comparands</returns>
    ASPOSE_CELLS_API virtual int32_t Compare(const U16String& v1, const U16String& v2, bool ignoreCase);
    /// <summary>
    /// Compares two string values according to certain collation rules.
    /// </summary>
    /// <param name="v1">the first string</param>
    /// <param name="v2">the second string</param>
    /// <param name="ignoreCase">whether ignore case when comparing values</param>
    /// <returns>Integer that indicates the lexical relationship between the two comparands</returns>
    ASPOSE_CELLS_API virtual int32_t Compare(const char16_t* v1, const char16_t* v2, bool ignoreCase);

};

} }

#endif
