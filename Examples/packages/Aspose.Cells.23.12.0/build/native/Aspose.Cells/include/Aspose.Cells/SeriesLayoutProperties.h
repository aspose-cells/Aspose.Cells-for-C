// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_SERIESLAYOUTPROPERTIES_H
#define ASPOSE_CELLS_CHARTS_SERIESLAYOUTPROPERTIES_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/MapChartLabelLayout.h"
#include "Aspose.Cells/MapChartProjectionType.h"
#include "Aspose.Cells/MapChartRegionType.h"
#include "Aspose.Cells/QuartileCalculationType.h"

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class SeriesLayoutProperties_Impl;

/// <summary>
/// Represents the properties of series layout.
/// </summary>
class SeriesLayoutProperties {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SeriesLayoutProperties_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SeriesLayoutProperties();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SeriesLayoutProperties(SeriesLayoutProperties_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SeriesLayoutProperties(const SeriesLayoutProperties& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SeriesLayoutProperties();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SeriesLayoutProperties& operator=(const SeriesLayoutProperties& src);
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
    /// Indicates whether showing connector lines between data points.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowConnectorLines();
    /// <summary>
    /// Indicates whether showing connector lines between data points.
    /// </summary>
    ASPOSE_CELLS_API void SetShowConnectorLines(bool value);
    /// <summary>
    /// Indicates whether showing the line connecting all mean points.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowMeanLine();
    /// <summary>
    /// Indicates whether showing the line connecting all mean points.
    /// </summary>
    ASPOSE_CELLS_API void SetShowMeanLine(bool value);
    /// <summary>
    /// Indicates whether showing outlier data points.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowOutlierPoints();
    /// <summary>
    /// Indicates whether showing outlier data points.
    /// </summary>
    ASPOSE_CELLS_API void SetShowOutlierPoints(bool value);
    /// <summary>
    /// Indicates whether showing markers denoting the mean.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowMeanMarker();
    /// <summary>
    /// Indicates whether showing markers denoting the mean.
    /// </summary>
    ASPOSE_CELLS_API void SetShowMeanMarker(bool value);
    /// <summary>
    /// Indicates whether showing non-outlier data points.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowInnerPoints();
    /// <summary>
    /// Indicates whether showing non-outlier data points.
    /// </summary>
    ASPOSE_CELLS_API void SetShowInnerPoints(bool value);
    /// <summary>
    /// Represents the index of a subtotal data point.
    /// </summary>
    ASPOSE_CELLS_API Vector<int32_t> GetSubtotals();
    /// <summary>
    /// Represents the index of a subtotal data point.
    /// </summary>
    ASPOSE_CELLS_API void SetSubtotals(const Vector<int32_t>& value);
    /// <summary>
    /// Represents the statistical properties for the series.
    /// </summary>
    ASPOSE_CELLS_API QuartileCalculationType GetQuartileCalculation();
    /// <summary>
    /// Represents the statistical properties for the series.
    /// </summary>
    ASPOSE_CELLS_API void SetQuartileCalculation(QuartileCalculationType value);
    /// <summary>
    /// Gets and sets the layout of map labels.
    /// </summary>
    ASPOSE_CELLS_API MapChartLabelLayout GetMapLabelLayout();
    /// <summary>
    /// Gets and sets the layout of map labels.
    /// </summary>
    ASPOSE_CELLS_API void SetMapLabelLayout(MapChartLabelLayout value);
    /// <summary>
    /// Indicates whether the interval is closed on the left side.
    /// </summary>
    ASPOSE_CELLS_API bool IsIntervalLeftClosed();
    /// <summary>
    /// Indicates whether the interval is closed on the left side.
    /// </summary>
    ASPOSE_CELLS_API void SetIsIntervalLeftClosed(bool value);
    /// <summary>
    /// Gets and sets the region type of the map.
    /// </summary>
    ASPOSE_CELLS_API MapChartRegionType GetMapChartRegionType();
    /// <summary>
    /// Gets and sets the region type of the map.
    /// </summary>
    ASPOSE_CELLS_API void SetMapChartRegionType(MapChartRegionType value);
    /// <summary>
    /// Gets and sets the projection type of the map.
    /// </summary>
    ASPOSE_CELLS_API MapChartProjectionType GetMapChartProjectionType();
    /// <summary>
    /// Gets and sets the projection type of the map.
    /// </summary>
    ASPOSE_CELLS_API void SetMapChartProjectionType(MapChartProjectionType value);
    
};

} } }

#endif
