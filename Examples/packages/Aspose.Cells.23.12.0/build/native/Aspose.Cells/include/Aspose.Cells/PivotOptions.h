// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_PIVOTOPTIONS_H
#define ASPOSE_CELLS_CHARTS_PIVOTOPTIONS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Charts {

class PivotOptions_Impl;

/// <summary>
/// Represents a complex type that specifies the pivot controls that appear on the chart
/// </summary>
class PivotOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotOptions(PivotOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotOptions(const PivotOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotOptions& operator=(const PivotOptions& src);
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
    /// Specifies whether a control for each PivotTable field on the PivotTable page axis
    /// of the source PivotTable appears on the chart when dropZonesVisible is set to true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDropZoneFilter();
    /// <summary>
    /// Specifies whether a control for each PivotTable field on the PivotTable page axis
    /// of the source PivotTable appears on the chart when dropZonesVisible is set to true.
    /// </summary>
    ASPOSE_CELLS_API void SetDropZoneFilter(bool value);
    /// <summary>
    /// Specifies whether a control for each PivotTable field on the PivotTable row axis
    /// of the source PivotTable appears on the chart when dropZonesVisible is set to true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDropZoneCategories();
    /// <summary>
    /// Specifies whether a control for each PivotTable field on the PivotTable row axis
    /// of the source PivotTable appears on the chart when dropZonesVisible is set to true.
    /// </summary>
    ASPOSE_CELLS_API void SetDropZoneCategories(bool value);
    /// <summary>
    /// Specifies whether a control for each PivotTable field on the PivotTable data axis
    /// of the source PivotTable appears on the chart when dropZonesVisible is set to true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDropZoneData();
    /// <summary>
    /// Specifies whether a control for each PivotTable field on the PivotTable data axis
    /// of the source PivotTable appears on the chart when dropZonesVisible is set to true.
    /// </summary>
    ASPOSE_CELLS_API void SetDropZoneData(bool value);
    /// <summary>
    /// Specifies whether a control for each PivotTable field on the PivotTable column axis
    /// of the source PivotTable appears on the chart when dropZonesVisible is set to true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDropZoneSeries();
    /// <summary>
    /// Specifies whether a control for each PivotTable field on the PivotTable column axis
    /// of the source PivotTable appears on the chart when dropZonesVisible is set to true.
    /// </summary>
    ASPOSE_CELLS_API void SetDropZoneSeries(bool value);
    /// <summary>
    /// Specifies whether any pivot controls can appear on the pivot chart.
    /// </summary>
    ASPOSE_CELLS_API bool GetDropZonesVisible();
    /// <summary>
    /// Specifies whether any pivot controls can appear on the pivot chart.
    /// </summary>
    ASPOSE_CELLS_API void SetDropZonesVisible(bool value);
    
};

} } }

#endif
