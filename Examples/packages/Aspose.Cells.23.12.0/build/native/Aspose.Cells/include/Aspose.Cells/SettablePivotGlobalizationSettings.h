// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SETTABLEPIVOTGLOBALIZATIONSETTINGS_H
#define ASPOSE_CELLS_SETTABLEPIVOTGLOBALIZATIONSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PivotFieldSubtotalType.h"

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Pivot;

class SettablePivotGlobalizationSettings_Impl;

/// <summary>
/// Implementation of PivotGlobalizationSettings that supports user to set/change pre-defined texts.
/// </summary>
class SettablePivotGlobalizationSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SettablePivotGlobalizationSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SettablePivotGlobalizationSettings();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SettablePivotGlobalizationSettings(SettablePivotGlobalizationSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SettablePivotGlobalizationSettings(const SettablePivotGlobalizationSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SettablePivotGlobalizationSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SettablePivotGlobalizationSettings& operator=(const SettablePivotGlobalizationSettings& src);
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
    /// Gets the text of "Total" label in the PivotTable.
    /// You need to override this method when the PivotTable contains two or more PivotFields in the data area.
    /// </summary>
    /// <returns>The text of "Total" label</returns>
    ASPOSE_CELLS_API U16String GetTextOfTotal();
    /// <summary>
    /// Sets the text of "Total" label in the PivotTable.
    /// </summary>
    /// <param name="text">custom text</param>
    ASPOSE_CELLS_API void SetTextOfTotal(const U16String& text);
    /// <summary>
    /// Sets the text of "Total" label in the PivotTable.
    /// </summary>
    /// <param name="text">custom text</param>
    ASPOSE_CELLS_API void SetTextOfTotal(const char16_t* text);
    /// <summary>
    /// Gets the text of "Grand Total" label in the PivotTable.
    /// </summary>
    /// <returns>The text of "Grand Total" label</returns>
    ASPOSE_CELLS_API U16String GetTextOfGrandTotal();
    /// <summary>
    /// Sets the text of "Grand Total" label in the PivotTable.
    /// </summary>
    /// <param name="text">custom text</param>
    ASPOSE_CELLS_API void SetTextOfGrandTotal(const U16String& text);
    /// <summary>
    /// Sets the text of "Grand Total" label in the PivotTable.
    /// </summary>
    /// <param name="text">custom text</param>
    ASPOSE_CELLS_API void SetTextOfGrandTotal(const char16_t* text);
    /// <summary>
    /// Gets the text of "(Multiple Items)" label in the PivotTable.
    /// </summary>
    /// <returns>The text of "(Multiple Items)" label</returns>
    ASPOSE_CELLS_API U16String GetTextOfMultipleItems();
    /// <summary>
    /// Sets the text of "(Multiple Items)" label in the PivotTable.
    /// </summary>
    /// <param name="text">custom text</param>
    ASPOSE_CELLS_API void SetTextOfMultipleItems(const U16String& text);
    /// <summary>
    /// Sets the text of "(Multiple Items)" label in the PivotTable.
    /// </summary>
    /// <param name="text">custom text</param>
    ASPOSE_CELLS_API void SetTextOfMultipleItems(const char16_t* text);
    /// <summary>
    /// Gets the text of "(All)" label in the PivotTable.
    /// </summary>
    /// <returns>The text of "(All)" label</returns>
    ASPOSE_CELLS_API U16String GetTextOfAll();
    /// <summary>
    /// Sets the text of "(All)" label in the PivotTable.
    /// </summary>
    /// <param name="text">custom text</param>
    ASPOSE_CELLS_API void SetTextOfAll(const U16String& text);
    /// <summary>
    /// Sets the text of "(All)" label in the PivotTable.
    /// </summary>
    /// <param name="text">custom text</param>
    ASPOSE_CELLS_API void SetTextOfAll(const char16_t* text);
    /// <summary>
    /// Gets the text for specified protected name.
    /// </summary>
    /// <param name="protectedName">The protected name in PivotTable.</param>
    /// <returns>The local prorected names of PivotTable.</returns>
    /// <remarks>In Ms Excel, some names are not allowed to be used as the name of PivotFields in PivotTable.
    /// They are different in different region, user may specify them explicitly according to the used region.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetTextOfProtectedName(const U16String& protectedName);
    /// <summary>
    /// Gets the text for specified protected name.
    /// </summary>
    /// <param name="protectedName">The protected name in PivotTable.</param>
    /// <returns>The local prorected names of PivotTable.</returns>
    /// <remarks>In Ms Excel, some names are not allowed to be used as the name of PivotFields in PivotTable.
    /// They are different in different region, user may specify them explicitly according to the used region.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetTextOfProtectedName(const char16_t* protectedName);
    /// <summary>
    /// Sets the text for specific protected name.
    /// </summary>
    /// <param name="protectedName">The protected name in PivotTable.</param>
    /// <param name="text">The local prorected names of PivotTable.</param>
    ASPOSE_CELLS_API void SetTextOfProtectedName(const U16String& protectedName, const U16String& text);
    /// <summary>
    /// Sets the text for specific protected name.
    /// </summary>
    /// <param name="protectedName">The protected name in PivotTable.</param>
    /// <param name="text">The local prorected names of PivotTable.</param>
    ASPOSE_CELLS_API void SetTextOfProtectedName(const char16_t* protectedName, const char16_t* text);
    /// <summary>
    /// Gets the text of "Column Labels" label in the PivotTable.
    /// </summary>
    /// <returns>The text of column labels</returns>
    ASPOSE_CELLS_API U16String GetTextOfColumnLabels();
    /// <summary>
    /// Gets the text of "Column Labels" label in the PivotTable.
    /// </summary>
    /// <param name="text">The text of column labels</param>
    ASPOSE_CELLS_API void SetTextOfColumnLabels(const U16String& text);
    /// <summary>
    /// Gets the text of "Column Labels" label in the PivotTable.
    /// </summary>
    /// <param name="text">The text of column labels</param>
    ASPOSE_CELLS_API void SetTextOfColumnLabels(const char16_t* text);
    /// <summary>
    /// Gets the text of "Row Labels" label in the PivotTable.
    /// </summary>
    /// <returns>The text of row labels</returns>
    ASPOSE_CELLS_API U16String GetTextOfRowLabels();
    /// <summary>
    /// Sets the text of "Row Labels" label in the PivotTable.
    /// </summary>
    /// <param name="text">The text of row labels</param>
    ASPOSE_CELLS_API void SetTextOfRowLabels(const U16String& text);
    /// <summary>
    /// Sets the text of "Row Labels" label in the PivotTable.
    /// </summary>
    /// <param name="text">The text of row labels</param>
    ASPOSE_CELLS_API void SetTextOfRowLabels(const char16_t* text);
    /// <summary>
    /// Gets the text of "(blank)" label in the PivotTable.
    /// </summary>
    /// <returns>The text of empty data</returns>
    ASPOSE_CELLS_API U16String GetTextOfEmptyData();
    /// <summary>
    /// Sets the text of "(blank)" label in the PivotTable.
    /// </summary>
    /// <param name="text">The text of empty data</param>
    ASPOSE_CELLS_API void SetTextOfEmptyData(const U16String& text);
    /// <summary>
    /// Sets the text of "(blank)" label in the PivotTable.
    /// </summary>
    /// <param name="text">The text of empty data</param>
    ASPOSE_CELLS_API void SetTextOfEmptyData(const char16_t* text);
    /// <summary>
    /// Gets the the text of the value area field header in the PivotTable.
    /// </summary>
    /// <returns>The text of data field header name</returns>
    ASPOSE_CELLS_API U16String GetTextOfDataFieldHeader();
    /// <summary>
    /// Sets the the text of the value area field header in the PivotTable.
    /// </summary>
    /// <param name="text">The text of data field header name</param>
    ASPOSE_CELLS_API void SetTextOfDataFieldHeader(const U16String& text);
    /// <summary>
    /// Sets the the text of the value area field header in the PivotTable.
    /// </summary>
    /// <param name="text">The text of data field header name</param>
    ASPOSE_CELLS_API void SetTextOfDataFieldHeader(const char16_t* text);
    /// <summary>
    /// Gets the text of <see cref="PivotFieldSubtotalType"/> type in the PivotTable.
    /// </summary>
    /// <param name="subTotalType">The <see cref="PivotFieldSubtotalType"/></param>
    /// <returns>The text of given type</returns>
    ASPOSE_CELLS_API U16String GetTextOfSubTotal(PivotFieldSubtotalType subTotalType);
    /// <summary>
    /// Sets the text of <see cref="PivotFieldSubtotalType"/> type in the PivotTable.
    /// </summary>
    /// <param name="subTotalType">The <see cref="PivotFieldSubtotalType"/></param>
    /// <param name="text">The text of given type</param>
    ASPOSE_CELLS_API void SetTextOfSubTotal(PivotFieldSubtotalType subTotalType, const U16String& text);
    /// <summary>
    /// Sets the text of <see cref="PivotFieldSubtotalType"/> type in the PivotTable.
    /// </summary>
    /// <param name="subTotalType">The <see cref="PivotFieldSubtotalType"/></param>
    /// <param name="text">The text of given type</param>
    ASPOSE_CELLS_API void SetTextOfSubTotal(PivotFieldSubtotalType subTotalType, const char16_t* text);
    
};

} }

#endif
