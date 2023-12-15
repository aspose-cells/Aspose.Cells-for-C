// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_SPARKLINEGROUP_H
#define ASPOSE_CELLS_CHARTS_SPARKLINEGROUP_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PlotEmptyCellsType.h"
#include "Aspose.Cells/SparklineAxisMinMaxType.h"
#include "Aspose.Cells/SparklinePresetStyleType.h"
#include "Aspose.Cells/SparklineType.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Charts {
    class SparklineCollection;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class SparklineGroup_Impl;

/// <summary>
/// <see cref="Sparkline"/> is organized into sparkline group. A SparklineGroup contains a variable number of sparkline items.
/// A sparkline group specifies the type, display settings and axis settings for the sparklines.
/// </summary>
class SparklineGroup {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SparklineGroup_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SparklineGroup(SparklineGroup_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SparklineGroup(const SparklineGroup& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SparklineGroup();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SparklineGroup& operator=(const SparklineGroup& src);
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
    /// Resets the data range and location range of the sparkline group.
    /// This method will clear original sparkline items in the group and creates new sparkline items for the new ranges.
    /// </summary>
    /// <param name="dataRange">Specifies the new data range of the sparkline group.</param>
    /// <param name="isVertical">Specifies whether to plot the sparklines from the new data range by row or by column.</param>
    /// <param name="locationRange">Specifies where the sparklines to be placed.</param>
    ASPOSE_CELLS_API void ResetRanges(const U16String& dataRange, bool isVertical, const CellArea& locationRange);
    /// <summary>
    /// Resets the data range and location range of the sparkline group.
    /// This method will clear original sparkline items in the group and creates new sparkline items for the new ranges.
    /// </summary>
    /// <param name="dataRange">Specifies the new data range of the sparkline group.</param>
    /// <param name="isVertical">Specifies whether to plot the sparklines from the new data range by row or by column.</param>
    /// <param name="locationRange">Specifies where the sparklines to be placed.</param>
    ASPOSE_CELLS_API void ResetRanges(const char16_t* dataRange, bool isVertical, const CellArea& locationRange);
    /// <summary>
    /// Gets and sets the preset style type of the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API SparklinePresetStyleType GetPresetStyle();
    /// <summary>
    /// Gets and sets the preset style type of the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetPresetStyle(SparklinePresetStyleType value);
    /// <summary>
    /// Gets the collection of <see cref="Sparkline"/> object.
    /// </summary>
    ASPOSE_CELLS_API SparklineCollection GetSparklines();
    /// <summary>
    /// Indicates the sparkline type of the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API SparklineType GetType();
    /// <summary>
    /// Indicates the sparkline type of the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetType(SparklineType value);
    /// <summary>
    /// Indicates how to plot empty cells.
    /// </summary>
    ASPOSE_CELLS_API PlotEmptyCellsType GetPlotEmptyCellsType();
    /// <summary>
    /// Indicates how to plot empty cells.
    /// </summary>
    ASPOSE_CELLS_API void SetPlotEmptyCellsType(PlotEmptyCellsType value);
    /// <summary>
    /// Indicates whether to show data in hidden rows and columns.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayHidden();
    /// <summary>
    /// Indicates whether to show data in hidden rows and columns.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayHidden(bool value);
    /// <summary>
    /// Indicates whether to highlight the highest points of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowHighPoint();
    /// <summary>
    /// Indicates whether to highlight the highest points of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetShowHighPoint(bool value);
    /// <summary>
    /// Gets and sets the color of the highest points of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetHighPointColor();
    /// <summary>
    /// Gets and sets the color of the highest points of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetHighPointColor(const CellsColor& value);
    /// <summary>
    /// Indicates whether to highlight the lowest points of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowLowPoint();
    /// <summary>
    /// Indicates whether to highlight the lowest points of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetShowLowPoint(bool value);
    /// <summary>
    /// Gets and sets the color of the lowest points of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetLowPointColor();
    /// <summary>
    /// Gets and sets the color of the lowest points of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetLowPointColor(const CellsColor& value);
    /// <summary>
    /// Indicates whether to highlight the negative values on the sparkline group with a different color or marker.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowNegativePoints();
    /// <summary>
    /// Indicates whether to highlight the negative values on the sparkline group with a different color or marker.
    /// </summary>
    ASPOSE_CELLS_API void SetShowNegativePoints(bool value);
    /// <summary>
    /// Gets and sets the color of the negative values on the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetNegativePointsColor();
    /// <summary>
    /// Gets and sets the color of the negative values on the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetNegativePointsColor(const CellsColor& value);
    /// <summary>
    /// Indicates whether to highlight the first point of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowFirstPoint();
    /// <summary>
    /// Indicates whether to highlight the first point of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetShowFirstPoint(bool value);
    /// <summary>
    /// Gets and sets the color of the first point of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetFirstPointColor();
    /// <summary>
    /// Gets and sets the color of the first point of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstPointColor(const CellsColor& value);
    /// <summary>
    /// Indicates whether to highlight the last point of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowLastPoint();
    /// <summary>
    /// Indicates whether to highlight the last point of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetShowLastPoint(bool value);
    /// <summary>
    /// Gets and sets the color of the last point of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetLastPointColor();
    /// <summary>
    /// Gets and sets the color of the last point of data in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetLastPointColor(const CellsColor& value);
    /// <summary>
    /// Indicates whether to highlight each point in each line sparkline in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowMarkers();
    /// <summary>
    /// Indicates whether to highlight each point in each line sparkline in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetShowMarkers(bool value);
    /// <summary>
    /// Gets and sets the color of points in each line sparkline in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetMarkersColor();
    /// <summary>
    /// Gets and sets the color of points in each line sparkline in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetMarkersColor(const CellsColor& value);
    /// <summary>
    /// Gets and sets the color of the sparklines in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetSeriesColor();
    /// <summary>
    /// Gets and sets the color of the sparklines in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetSeriesColor(const CellsColor& value);
    /// <summary>
    /// Indicates whether the plot data is right to left.
    /// </summary>
    ASPOSE_CELLS_API bool GetPlotRightToLeft();
    /// <summary>
    /// Indicates whether the plot data is right to left.
    /// </summary>
    ASPOSE_CELLS_API void SetPlotRightToLeft(bool value);
    /// <summary>
    /// Gets and sets the line weight in each line sparkline in the sparkline group, in the unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetLineWeight();
    /// <summary>
    /// Gets and sets the line weight in each line sparkline in the sparkline group, in the unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetLineWeight(double value);
    /// <summary>
    /// Gets and sets the color of the horizontal axis in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetHorizontalAxisColor();
    /// <summary>
    /// Gets and sets the color of the horizontal axis in the sparkline group.
    /// </summary>
    ASPOSE_CELLS_API void SetHorizontalAxisColor(const CellsColor& value);
    /// <summary>
    /// Indicates whether to show the sparkline horizontal axis.
    /// The horizontal axis appears if the sparkline has data that crosses the zero axis.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowHorizontalAxis();
    /// <summary>
    /// Indicates whether to show the sparkline horizontal axis.
    /// The horizontal axis appears if the sparkline has data that crosses the zero axis.
    /// </summary>
    ASPOSE_CELLS_API void SetShowHorizontalAxis(bool value);
    /// <summary>
    /// Represents the range that contains the date values for the sparkline data.
    /// </summary>
    ASPOSE_CELLS_API U16String GetHorizontalAxisDateRange();
    /// <summary>
    /// Represents the range that contains the date values for the sparkline data.
    /// </summary>
    ASPOSE_CELLS_API void SetHorizontalAxisDateRange(const U16String& value);
    /// <summary>
    /// Represents the range that contains the date values for the sparkline data.
    /// </summary>
    ASPOSE_CELLS_API void SetHorizontalAxisDateRange(const char16_t* value);
    /// <summary>
    /// Represents the vertical axis maximum value type.
    /// </summary>
    ASPOSE_CELLS_API SparklineAxisMinMaxType GetVerticalAxisMaxValueType();
    /// <summary>
    /// Represents the vertical axis maximum value type.
    /// </summary>
    ASPOSE_CELLS_API void SetVerticalAxisMaxValueType(SparklineAxisMinMaxType value);
    /// <summary>
    /// Gets and sets the custom maximum value for the vertical axis.
    /// </summary>
    ASPOSE_CELLS_API double GetVerticalAxisMaxValue();
    /// <summary>
    /// Gets and sets the custom maximum value for the vertical axis.
    /// </summary>
    ASPOSE_CELLS_API void SetVerticalAxisMaxValue(double value);
    /// <summary>
    /// Represents the vertical axis minimum value type.
    /// </summary>
    ASPOSE_CELLS_API SparklineAxisMinMaxType GetVerticalAxisMinValueType();
    /// <summary>
    /// Represents the vertical axis minimum value type.
    /// </summary>
    ASPOSE_CELLS_API void SetVerticalAxisMinValueType(SparklineAxisMinMaxType value);
    /// <summary>
    /// Gets and sets the custom minimum value for the vertical axis.
    /// </summary>
    ASPOSE_CELLS_API double GetVerticalAxisMinValue();
    /// <summary>
    /// Gets and sets the custom minimum value for the vertical axis.
    /// </summary>
    ASPOSE_CELLS_API void SetVerticalAxisMinValue(double value);
    
};

} } }

#endif
