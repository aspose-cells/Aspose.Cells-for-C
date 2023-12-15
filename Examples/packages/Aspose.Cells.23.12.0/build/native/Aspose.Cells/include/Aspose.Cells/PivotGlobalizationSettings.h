// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SETTINGS_PIVOTGLOBALIZATIONSETTINGS_H
#define ASPOSE_CELLS_SETTINGS_PIVOTGLOBALIZATIONSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PivotFieldSubtotalType.h"

namespace Aspose { namespace Cells { namespace Settings {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Pivot;

class PivotGlobalizationSettings_Bridge;

/// <summary>
/// Represents the globalization settings for pivot tables.
/// </summary>
class ASPOSE_CELLS_API2 PivotGlobalizationSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotGlobalizationSettings_Bridge* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotGlobalizationSettings();
    ASPOSE_CELLS_API PivotGlobalizationSettings(const PivotGlobalizationSettings& src) = delete;
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotGlobalizationSettings();
    ASPOSE_CELLS_API PivotGlobalizationSettings& operator=(const PivotGlobalizationSettings& src) = delete;
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
    ASPOSE_CELLS_API virtual U16String GetTextOfTotal();
    /// <summary>
    /// Gets the text of "Grand Total" label in the PivotTable.
    /// </summary>
    /// <returns>The text of "Grand Total" label</returns>
    ASPOSE_CELLS_API virtual U16String GetTextOfGrandTotal();
    /// <summary>
    /// Gets the text of "(Multiple Items)" label in the PivotTable.
    /// </summary>
    /// <returns>The text of "(Multiple Items)" label</returns>
    ASPOSE_CELLS_API virtual U16String GetTextOfMultipleItems();
    /// <summary>
    /// Gets the text of "(All)" label in the PivotTable.
    /// </summary>
    /// <returns>The text of "(All)" label</returns>
    ASPOSE_CELLS_API virtual U16String GetTextOfAll();
    /// <summary>
    /// Gets the text for specified protected name.
    /// </summary>
    /// <param name="protectedName">The protected name in PivotTable.</param>
    /// <returns>The local prorected names of PivotTable.</returns>
    /// <remarks>In Ms Excel, some names are not allowed to be used as the name of PivotFields in PivotTable.
    /// They are different in different region, user may specify them explicitly according to the used region.
    /// </remarks>
    ASPOSE_CELLS_API virtual U16String GetTextOfProtectedName(const U16String& protectedName);
    /// <summary>
    /// Gets the text for specified protected name.
    /// </summary>
    /// <param name="protectedName">The protected name in PivotTable.</param>
    /// <returns>The local prorected names of PivotTable.</returns>
    /// <remarks>In Ms Excel, some names are not allowed to be used as the name of PivotFields in PivotTable.
    /// They are different in different region, user may specify them explicitly according to the used region.
    /// </remarks>
    ASPOSE_CELLS_API virtual U16String GetTextOfProtectedName(const char16_t* protectedName);
    /// <summary>
    /// Gets the text of "Column Labels" label in the PivotTable.
    /// </summary>
    /// <returns>The text of column labels</returns>
    ASPOSE_CELLS_API virtual U16String GetTextOfColumnLabels();
    /// <summary>
    /// Gets the text of "Row Labels" label in the PivotTable.
    /// </summary>
    /// <returns>The text of row labels</returns>
    ASPOSE_CELLS_API virtual U16String GetTextOfRowLabels();
    /// <summary>
    /// Gets the text of "(blank)" label in the PivotTable.
    /// </summary>
    /// <returns>The text of empty data</returns>
    ASPOSE_CELLS_API virtual U16String GetTextOfEmptyData();
    /// <summary>
    /// Gets the the text of the value area field header in the PivotTable.
    /// </summary>
    /// <returns>The text of data field header name</returns>
    ASPOSE_CELLS_API virtual U16String GetTextOfDataFieldHeader();
    /// <summary>
    /// Gets the text of <see cref="PivotFieldSubtotalType"/> type in the PivotTable.
    /// </summary>
    /// <param name="subTotalType">The <see cref="PivotFieldSubtotalType"/></param>
    /// <returns>The text of given type</returns>
    ASPOSE_CELLS_API virtual U16String GetTextOfSubTotal(PivotFieldSubtotalType subTotalType);
    
};

} } }

#endif
