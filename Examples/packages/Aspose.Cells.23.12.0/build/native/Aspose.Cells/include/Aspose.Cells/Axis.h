// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_AXIS_H
#define ASPOSE_CELLS_CHARTS_AXIS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/CategoryType.h"
#include "Aspose.Cells/CrossType.h"
#include "Aspose.Cells/DisplayUnitType.h"
#include "Aspose.Cells/TickLabelPositionType.h"
#include "Aspose.Cells/TickMarkType.h"
#include "Aspose.Cells/TimeUnit.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Area;
    class Line;
} } }

namespace Aspose { namespace Cells { namespace Charts {
    class TickLabels;
    class DisplayUnitLabel;
    class Title;
    class AxisBins;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class Axis_Impl;

/// <summary>
/// Encapsulates the object that represents an axis of chart.
/// </summary>
class Axis {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Axis_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Axis(Axis_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Axis(const Axis& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Axis();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Axis& operator=(const Axis& src);
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
    /// Gets the <see cref="Area"/>.
    /// </summary>
    ASPOSE_CELLS_API Area GetArea();
    /// <summary>
    /// Indicates whether the min value is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticMinValue();
    /// <summary>
    /// Indicates whether the min value is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutomaticMinValue(bool value);
    /// <summary>
    /// Indicates whether the max value is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticMaxValue();
    /// <summary>
    /// Indicates whether the max value is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutomaticMaxValue(bool value);
    /// <summary>
    /// Indicates whether the major unit of the axis is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticMajorUnit();
    /// <summary>
    /// Indicates whether the major unit of the axis is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutomaticMajorUnit(bool value);
    /// <summary>
    /// Represents the major units for the axis.
    /// </summary>
    /// <remarks> The major units must be greater than zero.</remarks>
    ASPOSE_CELLS_API double GetMajorUnit();
    /// <summary>
    /// Represents the major units for the axis.
    /// </summary>
    /// <remarks> The major units must be greater than zero.</remarks>
    ASPOSE_CELLS_API void SetMajorUnit(double value);
    /// <summary>
    /// Indicates whether the minor unit of the axis is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticMinorUnit();
    /// <summary>
    /// Indicates whether the minor unit of the axis is automatically assigned.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutomaticMinorUnit(bool value);
    /// <summary>
    /// Represents the minor units for the axis.
    /// </summary>
    /// <remarks> The minor units must be greater than zero.</remarks>
    ASPOSE_CELLS_API double GetMinorUnit();
    /// <summary>
    /// Represents the minor units for the axis.
    /// </summary>
    /// <remarks> The minor units must be greater than zero.</remarks>
    ASPOSE_CELLS_API void SetMinorUnit(double value);
    /// <summary>
    /// Gets the appearance of an Axis.
    /// </summary>
    ASPOSE_CELLS_API Line GetAxisLine();
    /// <summary>
    /// Represents the type of major tick mark for the specified axis.
    /// </summary>
    ASPOSE_CELLS_API TickMarkType GetMajorTickMark();
    /// <summary>
    /// Represents the type of major tick mark for the specified axis.
    /// </summary>
    ASPOSE_CELLS_API void SetMajorTickMark(TickMarkType value);
    /// <summary>
    /// Represents the type of minor tick mark for the specified axis.
    /// </summary>
    ASPOSE_CELLS_API TickMarkType GetMinorTickMark();
    /// <summary>
    /// Represents the type of minor tick mark for the specified axis.
    /// </summary>
    ASPOSE_CELLS_API void SetMinorTickMark(TickMarkType value);
    /// <summary>
    /// Represents the position of tick-mark labels on the specified axis.
    /// </summary>
    ASPOSE_CELLS_API TickLabelPositionType GetTickLabelPosition();
    /// <summary>
    /// Represents the position of tick-mark labels on the specified axis.
    /// </summary>
    ASPOSE_CELLS_API void SetTickLabelPosition(TickLabelPositionType value);
    /// <summary>
    /// Represents the point on the value axis where the category axis crosses it.
    /// </summary>
    /// <remarks>The number should be a integer when it applies to category axis.
    /// And the value must be between 1 and 31999.</remarks>
    ASPOSE_CELLS_API double GetCrossAt();
    /// <summary>
    /// Represents the point on the value axis where the category axis crosses it.
    /// </summary>
    /// <remarks>The number should be a integer when it applies to category axis.
    /// And the value must be between 1 and 31999.</remarks>
    ASPOSE_CELLS_API void SetCrossAt(double value);
    /// <summary>
    /// Represents the <see cref="CrossType"/> on the specified axis where the other axis crosses.
    /// </summary>
    ASPOSE_CELLS_API CrossType GetCrossType();
    /// <summary>
    /// Represents the <see cref="CrossType"/> on the specified axis where the other axis crosses.
    /// </summary>
    ASPOSE_CELLS_API void SetCrossType(CrossType value);
    /// <summary>
    /// Represents the logarithmic base. Default value is 10.Only applies for Excel2007.
    /// </summary>
    ASPOSE_CELLS_API double GetLogBase();
    /// <summary>
    /// Represents the logarithmic base. Default value is 10.Only applies for Excel2007.
    /// </summary>
    ASPOSE_CELLS_API void SetLogBase(double value);
    /// <summary>
    /// Represents if the value axis scale type is logarithmic or not.
    /// </summary>
    ASPOSE_CELLS_API bool IsLogarithmic();
    /// <summary>
    /// Represents if the value axis scale type is logarithmic or not.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLogarithmic(bool value);
    /// <summary>
    /// Represents if Microsoft Excel plots data points from last to first.
    /// </summary>
    ASPOSE_CELLS_API bool IsPlotOrderReversed();
    /// <summary>
    /// Represents if Microsoft Excel plots data points from last to first.
    /// </summary>
    ASPOSE_CELLS_API void SetIsPlotOrderReversed(bool value);
    /// <summary>
    /// Represents if the value axis crosses the category axis between categories.
    /// </summary>
    /// <remarks>This property applies only to category axes, and it doesn't apply to 3-D charts.
    /// </remarks>
    ASPOSE_CELLS_API bool GetAxisBetweenCategories();
    /// <summary>
    /// Represents if the value axis crosses the category axis between categories.
    /// </summary>
    /// <remarks>This property applies only to category axes, and it doesn't apply to 3-D charts.
    /// </remarks>
    ASPOSE_CELLS_API void SetAxisBetweenCategories(bool value);
    /// <summary>
    /// Returns a <see cref="TickLabels"/> object that represents the tick-mark labels for the specified axis.
    /// </summary>
    ASPOSE_CELLS_API TickLabels GetTickLabels();
    /// <summary>
    /// Represents the number of categories or series between tick-mark labels. Applies only to category and series axes.
    /// </summary>
    /// <remarks>The number must be between 1 and 31999.</remarks>
    ASPOSE_CELLS_API int32_t GetTickLabelSpacing();
    /// <summary>
    /// Represents the number of categories or series between tick-mark labels. Applies only to category and series axes.
    /// </summary>
    /// <remarks>The number must be between 1 and 31999.</remarks>
    ASPOSE_CELLS_API void SetTickLabelSpacing(int32_t value);
    /// <summary>
    /// Indicates whether the spacing of tick label is automatic
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoTickLabelSpacing();
    /// <summary>
    /// Indicates whether the spacing of tick label is automatic
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoTickLabelSpacing(bool value);
    /// <summary>
    /// Returns or sets the number of categories or series between tick marks. Applies only to category and series axes.
    /// </summary>
    /// <remarks>The number must be between 1 and 31999.</remarks>
    ASPOSE_CELLS_API int32_t GetTickMarkSpacing();
    /// <summary>
    /// Returns or sets the number of categories or series between tick marks. Applies only to category and series axes.
    /// </summary>
    /// <remarks>The number must be between 1 and 31999.</remarks>
    ASPOSE_CELLS_API void SetTickMarkSpacing(int32_t value);
    /// <summary>
    /// Represents the unit label for the specified axis.
    /// </summary>
    ASPOSE_CELLS_API DisplayUnitType GetDisplayUnit();
    /// <summary>
    /// Represents the unit label for the specified axis.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayUnit(DisplayUnitType value);
    /// <summary>
    /// Specifies a custom value for the display unit.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCustomUnit();
    /// <summary>
    /// Specifies a custom value for the display unit.
    /// </summary>
    ASPOSE_CELLS_API void SetCustomUnit(int32_t value);
    /// <summary>
    /// Represents a unit label on an axis in the specified chart.
    /// Unit labels are useful for charting large values— for example, in the millions or billions.
    /// </summary>
    ASPOSE_CELLS_API DisplayUnitLabel GetDisplayUnitLabel();
    /// <summary>
    /// Represents if the display unit label is shown on the specified axis.
    /// </summary>
    /// <remarks>The default value is True.</remarks>
    ASPOSE_CELLS_API bool IsDisplayUnitLabelShown();
    /// <summary>
    /// Represents if the display unit label is shown on the specified axis.
    /// </summary>
    /// <remarks>The default value is True.</remarks>
    ASPOSE_CELLS_API void SetIsDisplayUnitLabelShown(bool value);
    /// <summary>
    /// Gets the axis' title.
    /// </summary>
    ASPOSE_CELLS_API Title GetTitle();
    /// <summary>
    /// Represents the category axis type.
    /// </summary>
    ASPOSE_CELLS_API CategoryType GetCategoryType();
    /// <summary>
    /// Represents the category axis type.
    /// </summary>
    ASPOSE_CELLS_API void SetCategoryType(CategoryType value);
    /// <summary>
    /// Represents the base unit scale for the category axis.
    /// </summary>
    /// <remarks>Setting this property only takes effect when the CategoryType property is set to TimeScale.</remarks>
    ASPOSE_CELLS_API TimeUnit GetBaseUnitScale();
    /// <summary>
    /// Represents the base unit scale for the category axis.
    /// </summary>
    /// <remarks>Setting this property only takes effect when the CategoryType property is set to TimeScale.</remarks>
    ASPOSE_CELLS_API void SetBaseUnitScale(TimeUnit value);
    /// <summary>
    /// Represents the major unit scale for the category axis.
    /// </summary>
    ASPOSE_CELLS_API TimeUnit GetMajorUnitScale();
    /// <summary>
    /// Represents the major unit scale for the category axis.
    /// </summary>
    ASPOSE_CELLS_API void SetMajorUnitScale(TimeUnit value);
    /// <summary>
    /// Represents the major unit scale for the category axis.
    /// </summary>
    ASPOSE_CELLS_API TimeUnit GetMinorUnitScale();
    /// <summary>
    /// Represents the major unit scale for the category axis.
    /// </summary>
    ASPOSE_CELLS_API void SetMinorUnitScale(TimeUnit value);
    /// <summary>
    /// Represents if the axis is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Represents if the axis is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Represents major gridlines on a chart axis.
    /// </summary>
    ASPOSE_CELLS_API Line GetMajorGridLines();
    /// <summary>
    /// Represents minor gridlines on a chart axis.
    /// </summary>
    ASPOSE_CELLS_API Line GetMinorGridLines();
    /// <summary>
    /// Indicates whether the labels shall be shown as multi level.
    /// </summary>
    /// <remarks>
    /// Only valid for category axis.
    /// </remarks>
    ASPOSE_CELLS_API bool GetHasMultiLevelLabels();
    /// <summary>
    /// Indicates whether the labels shall be shown as multi level.
    /// </summary>
    /// <remarks>
    /// Only valid for category axis.
    /// </remarks>
    ASPOSE_CELLS_API void SetHasMultiLevelLabels(bool value);
    /// <summary>
    /// Gets the labels of the axis after call Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetAxisTexts();
    /// <summary>
    /// Represents bins on a chart(Histogram/Pareto) axis
    /// </summary>
    ASPOSE_CELLS_API AxisBins GetBins();
    
};

} } }

#endif
