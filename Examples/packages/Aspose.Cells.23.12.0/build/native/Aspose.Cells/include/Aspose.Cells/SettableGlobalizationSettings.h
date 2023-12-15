// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SETTABLEGLOBALIZATIONSETTINGS_H
#define ASPOSE_CELLS_SETTABLEGLOBALIZATIONSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/CommentTitleType.h"
#include "Aspose.Cells/ConsolidationFunction.h"

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Rendering;

class SettableGlobalizationSettings_Impl;

/// <summary>
/// Implementation of GlobalizationSettings that supports user to set/change pre-defined texts.
/// </summary>
class SettableGlobalizationSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SettableGlobalizationSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SettableGlobalizationSettings();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SettableGlobalizationSettings(SettableGlobalizationSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SettableGlobalizationSettings(const SettableGlobalizationSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SettableGlobalizationSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SettableGlobalizationSettings& operator=(const SettableGlobalizationSettings& src);
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
    /// Gets the total name of specific function.
    /// </summary>
    /// <param name="functionType">The function type.</param>
    /// <returns>The total name of the function.</returns>
    ASPOSE_CELLS_API U16String GetTotalName(ConsolidationFunction functionType);
    /// <summary>
    /// Sets the total name of specific function.
    /// </summary>
    /// <param name="functionType">The function type.</param>
    /// <param name="name">The total name of the function.</param>
    ASPOSE_CELLS_API void SetTotalName(ConsolidationFunction functionType, const U16String& name);
    /// <summary>
    /// Sets the total name of specific function.
    /// </summary>
    /// <param name="functionType">The function type.</param>
    /// <param name="name">The total name of the function.</param>
    ASPOSE_CELLS_API void SetTotalName(ConsolidationFunction functionType, const char16_t* name);
    /// <summary>
    /// Gets the grand total name of the function.
    /// </summary>
    /// <param name="functionType">The function type.</param>
    /// <returns>The grand total name of the function.</returns>
    ASPOSE_CELLS_API U16String GetGrandTotalName(ConsolidationFunction functionType);
    /// <summary>
    /// Sets the grand total name of specific function.
    /// </summary>
    /// <param name="functionType">The function type.</param>
    /// <param name="name">The grand total name of the function.</param>
    ASPOSE_CELLS_API void SetGrandTotalName(ConsolidationFunction functionType, const U16String& name);
    /// <summary>
    /// Sets the grand total name of specific function.
    /// </summary>
    /// <param name="functionType">The function type.</param>
    /// <param name="name">The grand total name of the function.</param>
    ASPOSE_CELLS_API void SetGrandTotalName(ConsolidationFunction functionType, const char16_t* name);
    /// <summary>
    /// Gets the type name of table rows that consists of the table header.
    /// Default is "Headers", so in formula "#Headers" represents the table header.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API U16String GetTableRowTypeOfHeaders();
    /// <summary>
    /// Sets the type name of table rows that consists of the table header.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfHeaders(const U16String& name);
    /// <summary>
    /// Sets the type name of table rows that consists of the table header.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfHeaders(const char16_t* name);
    /// <summary>
    /// Gets the type name of table rows that consists of data region of referenced table.
    /// Default is "Data", so in formula "#Data" represents the data region of the table.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API U16String GetTableRowTypeOfData();
    /// <summary>
    /// Sets the type name of table rows that consists of data region of referenced table.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfData(const U16String& name);
    /// <summary>
    /// Sets the type name of table rows that consists of data region of referenced table.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfData(const char16_t* name);
    /// <summary>
    /// Gets the type name of table rows that consists of all rows in referenced table.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API U16String GetTableRowTypeOfAll();
    /// <summary>
    /// Sets the type name of table rows that consists of all rows in referenced table.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfAll(const U16String& name);
    /// <summary>
    /// Sets the type name of table rows that consists of all rows in referenced table.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfAll(const char16_t* name);
    /// <summary>
    /// Gets the type name of table rows that consists of the total row of referenced table.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API U16String GetTableRowTypeOfTotals();
    /// <summary>
    /// Sets the type name of table rows that consists of the total row of referenced table.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfTotals(const U16String& name);
    /// <summary>
    /// Sets the type name of table rows that consists of the total row of referenced table.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfTotals(const char16_t* name);
    /// <summary>
    /// Gets the type name of table rows that consists of the current row in referenced table.
    /// </summary>
    /// <returns>the type name of table rows</returns>
    ASPOSE_CELLS_API U16String GetTableRowTypeOfCurrent();
    /// <summary>
    /// Sets the type name of table rows that consists of the current row in referenced table.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfCurrent(const U16String& name);
    /// <summary>
    /// Sets the type name of table rows that consists of the current row in referenced table.
    /// </summary>
    /// <param name="name">the type name of table rows</param>
    ASPOSE_CELLS_API void SetTableRowTypeOfCurrent(const char16_t* name);
    /// <summary>
    /// Gets the display string value for cell's error value
    /// </summary>
    /// <param name="err">error values such as #VALUE!,#NAME?</param>
    /// <returns>By default returns the error value itself</returns>
    ASPOSE_CELLS_API U16String GetErrorValueString(const U16String& err);
    /// <summary>
    /// Gets the display string value for cell's error value
    /// </summary>
    /// <param name="err">error values such as #VALUE!,#NAME?</param>
    /// <returns>By default returns the error value itself</returns>
    ASPOSE_CELLS_API U16String GetErrorValueString(const char16_t* err);
    /// <summary>
    /// Gets the display string value for cell's boolean value
    /// </summary>
    /// <param name="bv">boolean value</param>
    /// <returns>By default returns "TRUE" for true value and "FALSE" for false value.</returns>
    ASPOSE_CELLS_API U16String GetBooleanValueString(bool bv);
    /// <summary>
    /// Sets the display string value for cell's boolean value
    /// </summary>
    /// <param name="bv">boolean value</param>
    /// <param name="name">string value of the boolean value</param>
    ASPOSE_CELLS_API void SetBooleanValueString(bool bv, const U16String& name);
    /// <summary>
    /// Sets the display string value for cell's boolean value
    /// </summary>
    /// <param name="bv">boolean value</param>
    /// <param name="name">string value of the boolean value</param>
    ASPOSE_CELLS_API void SetBooleanValueString(bool bv, const char16_t* name);
    /// <summary>
    /// Gets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <returns>Locale dependent function name. The locale was specified by the Workbook for which this settings is used.</returns>
    ASPOSE_CELLS_API U16String GetLocalFunctionName(const U16String& standardName);
    /// <summary>
    /// Gets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <returns>Locale dependent function name. The locale was specified by the Workbook for which this settings is used.</returns>
    ASPOSE_CELLS_API U16String GetLocalFunctionName(const char16_t* standardName);
    /// <summary>
    /// Sets the locale dependent function name corresponding to given standard function name.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <param name="localName">Locale dependent function name</param>
    /// <param name="bidirectional">Whether map the local function name to standard function name automatically.
    /// If true, the local name will be mapped to standard name automatically
    /// so user does not need to call <see cref="SetStandardFunctionName(string, string, bool)"/> again
    /// for the same standard and local names pair</param>
    ASPOSE_CELLS_API void SetLocalFunctionName(const U16String& standardName, const U16String& localName, bool bidirectional);
    /// <summary>
    /// Sets the locale dependent function name corresponding to given standard function name.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <param name="localName">Locale dependent function name</param>
    /// <param name="bidirectional">Whether map the local function name to standard function name automatically.
    /// If true, the local name will be mapped to standard name automatically
    /// so user does not need to call <see cref="SetStandardFunctionName(string, string, bool)"/> again
    /// for the same standard and local names pair</param>
    ASPOSE_CELLS_API void SetLocalFunctionName(const char16_t* standardName, const char16_t* localName, bool bidirectional);
    /// <summary>
    /// Gets the standard function name according to given locale dependent function name.
    /// </summary>
    /// <param name="localName">Locale dependent function name. The locale was specified by the Workbook for which this settings is used.</param>
    /// <returns>Standard(en-US locale) function name.</returns>
    ASPOSE_CELLS_API U16String GetStandardFunctionName(const U16String& localName);
    /// <summary>
    /// Gets the standard function name according to given locale dependent function name.
    /// </summary>
    /// <param name="localName">Locale dependent function name. The locale was specified by the Workbook for which this settings is used.</param>
    /// <returns>Standard(en-US locale) function name.</returns>
    ASPOSE_CELLS_API U16String GetStandardFunctionName(const char16_t* localName);
    /// <summary>
    /// Sets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="localName">Locale dependent function name</param>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <param name="bidirectional">Whether map the standard function name to local function name automatically.
    /// If true, the standar name will be mapped to local name automatically
    /// so user does not need to call <see cref="SetLocalFunctionName(string, string, bool)"/> again
    /// for the same standard and local names pair</param>
    ASPOSE_CELLS_API void SetStandardFunctionName(const U16String& localName, const U16String& standardName, bool bidirectional);
    /// <summary>
    /// Sets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="localName">Locale dependent function name</param>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <param name="bidirectional">Whether map the standard function name to local function name automatically.
    /// If true, the standar name will be mapped to local name automatically
    /// so user does not need to call <see cref="SetLocalFunctionName(string, string, bool)"/> again
    /// for the same standard and local names pair</param>
    ASPOSE_CELLS_API void SetStandardFunctionName(const char16_t* localName, const char16_t* standardName, bool bidirectional);
    /// <summary>
    /// Gets the locale dependent text for built-in Name according to given standard text.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) text of built-in Name.</param>
    /// <returns>Locale dependent text. The locale was specified by the Workbook for which this settings is used.</returns>
    ASPOSE_CELLS_API U16String GetLocalBuiltInName(const U16String& standardName);
    /// <summary>
    /// Gets the locale dependent text for built-in Name according to given standard text.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) text of built-in Name.</param>
    /// <returns>Locale dependent text. The locale was specified by the Workbook for which this settings is used.</returns>
    ASPOSE_CELLS_API U16String GetLocalBuiltInName(const char16_t* standardName);
    /// <summary>
    /// Sets the locale dependent text for the built-in name with given standard name text.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) name text of built-in name.</param>
    /// <param name="localName">Locale dependent name text</param>
    /// <param name="bidirectional">Whether map the local name text to standard name text automatically.
    /// If true, the local name text will be mapped to standard name text automatically
    /// so user does not need to call <see cref="SetStandardBuiltInName(string, string, bool)"/> again
    /// for the same standard and local names pair</param>
    ASPOSE_CELLS_API void SetLocalBuiltInName(const U16String& standardName, const U16String& localName, bool bidirectional);
    /// <summary>
    /// Sets the locale dependent text for the built-in name with given standard name text.
    /// </summary>
    /// <param name="standardName">Standard(en-US locale) name text of built-in name.</param>
    /// <param name="localName">Locale dependent name text</param>
    /// <param name="bidirectional">Whether map the local name text to standard name text automatically.
    /// If true, the local name text will be mapped to standard name text automatically
    /// so user does not need to call <see cref="SetStandardBuiltInName(string, string, bool)"/> again
    /// for the same standard and local names pair</param>
    ASPOSE_CELLS_API void SetLocalBuiltInName(const char16_t* standardName, const char16_t* localName, bool bidirectional);
    /// <summary>
    /// Gets the standard text of built-in Name according to given locale dependent text.
    /// </summary>
    /// <param name="localName">Locale dependent text of built-in Name. The locale was specified by the Workbook for which this settings is used.</param>
    /// <returns>Standard(en-US locale) text.</returns>
    ASPOSE_CELLS_API U16String GetStandardBuiltInName(const U16String& localName);
    /// <summary>
    /// Gets the standard text of built-in Name according to given locale dependent text.
    /// </summary>
    /// <param name="localName">Locale dependent text of built-in Name. The locale was specified by the Workbook for which this settings is used.</param>
    /// <returns>Standard(en-US locale) text.</returns>
    ASPOSE_CELLS_API U16String GetStandardBuiltInName(const char16_t* localName);
    /// <summary>
    /// Sets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="localName">Locale dependent function name</param>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <param name="bidirectional">Whether map the standard name text to local name text automatically.
    /// If true, the standar name text will be mapped to local name text automatically
    /// so user does not need to call <see cref="SetLocalBuiltInName(string, string, bool)"/> again
    /// for the same standard and local names pair</param>
    ASPOSE_CELLS_API void SetStandardBuiltInName(const U16String& localName, const U16String& standardName, bool bidirectional);
    /// <summary>
    /// Sets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="localName">Locale dependent function name</param>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    /// <param name="bidirectional">Whether map the standard name text to local name text automatically.
    /// If true, the standar name text will be mapped to local name text automatically
    /// so user does not need to call <see cref="SetLocalBuiltInName(string, string, bool)"/> again
    /// for the same standard and local names pair</param>
    ASPOSE_CELLS_API void SetStandardBuiltInName(const char16_t* localName, const char16_t* standardName, bool bidirectional);
    /// <summary>
    /// Gets the separator for list, parameters of function, ...etc.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetListSeparator();
    /// <summary>
    /// Sets the separator for list, parameters of function, ...etc.
    /// </summary>
    /// <param name="c">the specified separator</param>
    ASPOSE_CELLS_API void SetListSeparator(char16_t c);
    /// <summary>
    /// Gets the separator for rows in array data in formula.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetRowSeparatorOfFormulaArray();
    /// <summary>
    /// Sets the separator for rows in array data in formula.
    /// </summary>
    /// <param name="c">the specified separator</param>
    ASPOSE_CELLS_API void SetRowSeparatorOfFormulaArray(char16_t c);
    /// <summary>
    /// Gets the separator for the items in array's row data in formula.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetColumnSeparatorOfFormulaArray();
    /// <summary>
    /// Sets the separator for the items in array's row data in formula.
    /// </summary>
    /// <param name="c">the specified separator</param>
    ASPOSE_CELLS_API void SetColumnSeparatorOfFormulaArray(char16_t c);
    /// <summary>
    /// Gets standard English font style name(Regular, Bold, Italic) for Header/Footer according to given locale font style name.
    /// </summary>
    /// <param name="localfontStyleName">Locale font style name for Header/Footer.</param>
    /// <returns>Standard English font style name(Regular, Bold, Italic)</returns>
    ASPOSE_CELLS_API U16String GetStandardHeaderFooterFontStyleName(const U16String& localfontStyleName);
    /// <summary>
    /// Gets standard English font style name(Regular, Bold, Italic) for Header/Footer according to given locale font style name.
    /// </summary>
    /// <param name="localfontStyleName">Locale font style name for Header/Footer.</param>
    /// <returns>Standard English font style name(Regular, Bold, Italic)</returns>
    ASPOSE_CELLS_API U16String GetStandardHeaderFooterFontStyleName(const char16_t* localfontStyleName);
    /// <summary>
    /// Sets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="localfontStyleName">Locale font style name for Header/Footer.</param>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    ASPOSE_CELLS_API void SetStandardHeaderFooterFontStyleName(const U16String& localfontStyleName, const U16String& standardName);
    /// <summary>
    /// Sets the locale dependent function name according to given standard function name.
    /// </summary>
    /// <param name="localfontStyleName">Locale font style name for Header/Footer.</param>
    /// <param name="standardName">Standard(en-US locale) function name.</param>
    ASPOSE_CELLS_API void SetStandardHeaderFooterFontStyleName(const char16_t* localfontStyleName, const char16_t* standardName);
    /// <summary>
    /// Gets the locale dependent comment title name according to comment title type.
    /// </summary>
    /// <param name="type">type of comment title</param>
    /// <returns>locale dependent comment title name</returns>
    ASPOSE_CELLS_API U16String GetCommentTitleName(CommentTitleType type);
    /// <summary>
    /// Gets the locale dependent comment title name according to comment title type.
    /// </summary>
    /// <param name="type">type of comment title</param>
    /// <param name="name">locale dependent comment title name</param>
    ASPOSE_CELLS_API void SetCommentTitleName(CommentTitleType type, const U16String& name);
    /// <summary>
    /// Gets the locale dependent comment title name according to comment title type.
    /// </summary>
    /// <param name="type">type of comment title</param>
    /// <param name="name">locale dependent comment title name</param>
    ASPOSE_CELLS_API void SetCommentTitleName(CommentTitleType type, const char16_t* name);
    
};

} }

#endif
