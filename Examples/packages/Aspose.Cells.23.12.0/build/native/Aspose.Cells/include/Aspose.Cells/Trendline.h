// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_TRENDLINE_H
#define ASPOSE_CELLS_CHARTS_TRENDLINE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Line.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/TrendlineType.h"

namespace Aspose { namespace Cells { namespace Charts {
    class DataLabels;
    class LegendEntry;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class Trendline_Impl;

/// <summary>
/// Represents a trendline in a chart.
/// </summary>
class Trendline : public Line {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Trendline_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Trendline(Trendline_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Trendline(const Trendline& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API Trendline(const Line& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Trendline();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Trendline& operator=(const Trendline& src);
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
    /// Returns if Microsoft Excel automatically determines the name of the trendline.
    /// </summary>
    ASPOSE_CELLS_API bool IsNameAuto();
    /// <summary>
    /// Returns if Microsoft Excel automatically determines the name of the trendline.
    /// </summary>
    ASPOSE_CELLS_API void SetIsNameAuto(bool value);
    /// <summary>
    /// Returns the trendline type.
    /// </summary>
    ASPOSE_CELLS_API TrendlineType GetType();
    /// <summary>
    /// Returns the name of the trendline.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Returns the name of the trendline.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Returns the name of the trendline.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Returns or sets the trendline order (an integer greater than 1) when the trendline type is Polynomial.
    /// The order must be between 2 and 6.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetOrder();
    /// <summary>
    /// Returns or sets the trendline order (an integer greater than 1) when the trendline type is Polynomial.
    /// The order must be between 2 and 6.
    /// </summary>
    ASPOSE_CELLS_API void SetOrder(int32_t value);
    /// <summary>
    /// Returns or sets the period for the moving-average trendline.
    /// </summary>
    /// <remarks>This value should be between 2 and 255.
    /// And it must be less than the number of the chart points in the series</remarks>
    ASPOSE_CELLS_API int32_t GetPeriod();
    /// <summary>
    /// Returns or sets the period for the moving-average trendline.
    /// </summary>
    /// <remarks>This value should be between 2 and 255.
    /// And it must be less than the number of the chart points in the series</remarks>
    ASPOSE_CELLS_API void SetPeriod(int32_t value);
    /// <summary>
    /// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends forward.
    /// The number of periods must be greater than or equal to zero.
    /// </summary>
    ASPOSE_CELLS_API double GetForward();
    /// <summary>
    /// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends forward.
    /// The number of periods must be greater than or equal to zero.
    /// </summary>
    ASPOSE_CELLS_API void SetForward(double value);
    /// <summary>
    /// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends backward.
    /// The number of periods must be greater than or equal to zero.
    /// If the chart type is column ,the number of periods must be between 0 and 0.5
    /// </summary>
    ASPOSE_CELLS_API double GetBackward();
    /// <summary>
    /// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends backward.
    /// The number of periods must be greater than or equal to zero.
    /// If the chart type is column ,the number of periods must be between 0 and 0.5
    /// </summary>
    ASPOSE_CELLS_API void SetBackward(double value);
    /// <summary>
    /// Represents if the equation for the trendline is displayed on the chart (in the same data label as the R-squared value). Setting this property to True automatically turns on data labels.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayEquation();
    /// <summary>
    /// Represents if the equation for the trendline is displayed on the chart (in the same data label as the R-squared value). Setting this property to True automatically turns on data labels.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayEquation(bool value);
    /// <summary>
    /// Represents if the R-squared value of the trendline is displayed on the chart (in the same data label as the equation). Setting this property to True automatically turns on data labels.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayRSquared();
    /// <summary>
    /// Represents if the R-squared value of the trendline is displayed on the chart (in the same data label as the equation). Setting this property to True automatically turns on data labels.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayRSquared(bool value);
    /// <summary>
    /// Returns or sets the point where the trendline crosses the value axis.
    /// </summary>
    ASPOSE_CELLS_API double GetIntercept();
    /// <summary>
    /// Returns or sets the point where the trendline crosses the value axis.
    /// </summary>
    ASPOSE_CELLS_API void SetIntercept(double value);
    /// <summary>
    /// Represents the DataLabels object for the specified series.
    /// </summary>
    ASPOSE_CELLS_API DataLabels GetDataLabels();
    /// <summary>
    /// Gets the legend entry according to this trendline
    /// </summary>
    ASPOSE_CELLS_API LegendEntry GetLegendEntry();
    
};

} } }

#endif
