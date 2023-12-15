// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTGLOBALIZATIONSETTINGS_H
#define ASPOSE_CELLS_CHARTS_CHARTGLOBALIZATIONSETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/DisplayUnitType.h"

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class ChartGlobalizationSettings_Bridge;

/// <summary>
/// Represents the globalization settings for chart.
/// </summary>
class ASPOSE_CELLS_API2 ChartGlobalizationSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartGlobalizationSettings_Bridge* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartGlobalizationSettings();
    ASPOSE_CELLS_API ChartGlobalizationSettings(const ChartGlobalizationSettings& src) = delete;
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartGlobalizationSettings();
    ASPOSE_CELLS_API ChartGlobalizationSettings& operator=(const ChartGlobalizationSettings& src) = delete;
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
    /// Gets the name of Series in the Chart.
    /// </summary>
    ASPOSE_CELLS_API virtual U16String GetSeriesName();
    /// <summary>
    /// Gets the name of Chart Title.
    /// </summary>
    ASPOSE_CELLS_API virtual U16String GetChartTitleName();
    /// <summary>
    /// Gets the name of increase for Legend.
    /// </summary>
    ASPOSE_CELLS_API virtual U16String GetLegendIncreaseName();
    /// <summary>
    /// Gets the name of Decrease for Legend.
    /// </summary>
    ASPOSE_CELLS_API virtual U16String GetLegendDecreaseName();
    /// <summary>
    /// Gets the name of Total for Legend.
    /// </summary>
    ASPOSE_CELLS_API virtual U16String GetLegendTotalName();
    /// <summary>
    /// Gets the name of Title for Axis.
    /// </summary>
    ASPOSE_CELLS_API virtual U16String GetAxisTitleName();
    /// <summary>
    /// Gets the name of "Other" labels for Chart.
    /// </summary>
    ASPOSE_CELLS_API virtual U16String GetOtherName();
    /// <summary>
    /// Gets the Name of Axis Unit.
    /// </summary>
    ASPOSE_CELLS_API virtual U16String GetAxisUnitName(DisplayUnitType type);
    
};

} } }

#endif
