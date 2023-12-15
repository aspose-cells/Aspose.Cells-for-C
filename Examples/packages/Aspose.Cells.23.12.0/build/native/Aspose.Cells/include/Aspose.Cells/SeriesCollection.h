// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_SERIESCOLLECTION_H
#define ASPOSE_CELLS_CHARTS_SERIESCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Charts {
    class Series;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class SeriesCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Series"/> objects.
/// </summary>
class SeriesCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SeriesCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SeriesCollection(SeriesCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SeriesCollection(const SeriesCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SeriesCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SeriesCollection& operator=(const SeriesCollection& src);
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
    /// Gets the <see cref="Series"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Series Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="Series"/> element by order.
    /// </summary>
    /// <param name="order">The order of series</param>
    /// <returns>The element series</returns>
    ASPOSE_CELLS_API Series GetSeriesByOrder(int32_t order);
    /// <summary>
    /// Remove at a series at the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Gets or sets the range of category Axis values.
    /// It can be a range of cells (such as, "d1:e10"),
    /// or a sequence of values (such as,"{2,6,8,10}").
    /// </summary>
    ASPOSE_CELLS_API U16String GetCategoryData();
    /// <summary>
    /// Gets or sets the range of category Axis values.
    /// It can be a range of cells (such as, "d1:e10"),
    /// or a sequence of values (such as,"{2,6,8,10}").
    /// </summary>
    ASPOSE_CELLS_API void SetCategoryData(const U16String& value);
    /// <summary>
    /// Gets or sets the range of category Axis values.
    /// It can be a range of cells (such as, "d1:e10"),
    /// or a sequence of values (such as,"{2,6,8,10}").
    /// </summary>
    ASPOSE_CELLS_API void SetCategoryData(const char16_t* value);
    /// <summary>
    /// Gets or sets the range of second category Axis values.
    /// It can be a range of cells (such as, "d1:e10"),
    /// or a sequence of values (such as,"{2,6,8,10}").
    /// Only effects when some ASerieses plot on the second axis.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSecondCategoryData();
    /// <summary>
    /// Gets or sets the range of second category Axis values.
    /// It can be a range of cells (such as, "d1:e10"),
    /// or a sequence of values (such as,"{2,6,8,10}").
    /// Only effects when some ASerieses plot on the second axis.
    /// </summary>
    ASPOSE_CELLS_API void SetSecondCategoryData(const U16String& value);
    /// <summary>
    /// Gets or sets the range of second category Axis values.
    /// It can be a range of cells (such as, "d1:e10"),
    /// or a sequence of values (such as,"{2,6,8,10}").
    /// Only effects when some ASerieses plot on the second axis.
    /// </summary>
    ASPOSE_CELLS_API void SetSecondCategoryData(const char16_t* value);
    /// <summary>
    /// Directly changes the orders of the two series.
    /// </summary>
    /// <param name="sourceIndex">The current index</param>
    /// <param name="destIndex">The dest index</param>
    ASPOSE_CELLS_API void ChangeSeriesOrder(int32_t sourceIndex, int32_t destIndex);
    /// <summary>
    /// Sets the name of all the serieses in the chart.
    /// </summary>
    /// <param name="startIndex">The index of the first series which you want to set the name.</param>
    /// <param name="area">Specifies the area for the series name.</param>
    /// <param name="isVertical">>Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <remarks>
    /// <br>If the start index is larger than the count of the serieses, it will return and do nothing.</br>
    /// <br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
    /// <br>If set data on contiguous cells, use comma to seperate them.For example, ($C$2,$D$5).</br></remarks>
    ASPOSE_CELLS_API void SetSeriesNames(int32_t startIndex, const U16String& area, bool isVertical);
    /// <summary>
    /// Sets the name of all the serieses in the chart.
    /// </summary>
    /// <param name="startIndex">The index of the first series which you want to set the name.</param>
    /// <param name="area">Specifies the area for the series name.</param>
    /// <param name="isVertical">>Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <remarks>
    /// <br>If the start index is larger than the count of the serieses, it will return and do nothing.</br>
    /// <br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
    /// <br>If set data on contiguous cells, use comma to seperate them.For example, ($C$2,$D$5).</br></remarks>
    ASPOSE_CELLS_API void SetSeriesNames(int32_t startIndex, const char16_t* area, bool isVertical);
    /// <summary>
    /// Adds the <see cref="SeriesCollection"/> collection to a chart.
    /// </summary>
    /// <param name="area">Specifies values from which to plot the data series</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <returns>Return the first index of the added ASeries in the NSeries.</returns>
    /// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, R[1]C[1]:R[3]C[2].</br>
    /// <br>If set data on contiguous cells, use comma to seperate them.For example,(R[1]C[1],R[3]C[2]).</br></remarks>
    ASPOSE_CELLS_API int32_t AddR1C1(const U16String& area, bool isVertical);
    /// <summary>
    /// Adds the <see cref="SeriesCollection"/> collection to a chart.
    /// </summary>
    /// <param name="area">Specifies values from which to plot the data series</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <returns>Return the first index of the added ASeries in the NSeries.</returns>
    /// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, R[1]C[1]:R[3]C[2].</br>
    /// <br>If set data on contiguous cells, use comma to seperate them.For example,(R[1]C[1],R[3]C[2]).</br></remarks>
    ASPOSE_CELLS_API int32_t AddR1C1(const char16_t* area, bool isVertical);
    /// <summary>
    /// Adds the <see cref="SeriesCollection"/> collection to a chart.
    /// </summary>
    /// <param name="area">Specifies values from which to plot the data series</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <returns>Return the first index of the added ASeries in the NSeries.</returns>
    /// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
    /// <br>If set data on non contiguous cells, use comma to seperate them.For example: ($C$2,$D$5).</br></remarks>
    ASPOSE_CELLS_API int32_t Add(const U16String& area, bool isVertical);
    /// <summary>
    /// Adds the <see cref="SeriesCollection"/> collection to a chart.
    /// </summary>
    /// <param name="area">Specifies values from which to plot the data series</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <returns>Return the first index of the added ASeries in the NSeries.</returns>
    /// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
    /// <br>If set data on non contiguous cells, use comma to seperate them.For example: ($C$2,$D$5).</br></remarks>
    ASPOSE_CELLS_API int32_t Add(const char16_t* area, bool isVertical);
    /// <summary>
    /// Adds the <see cref="SeriesCollection"/> collection to a chart.
    /// </summary>
    /// <param name="area">Specifies values from which to plot the data series</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <param name="checkLabels">Indicates whether the range contains series's name</param>
    /// <returns>Return the first index of the added ASeries in the NSeries.</returns>
    /// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
    /// <br>If set data on non contiguous cells, use comma to seperate them.For example, ($C$2,$D$5).</br></remarks>
    ASPOSE_CELLS_API int32_t Add(const U16String& area, bool isVertical, bool checkLabels);
    /// <summary>
    /// Adds the <see cref="SeriesCollection"/> collection to a chart.
    /// </summary>
    /// <param name="area">Specifies values from which to plot the data series</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <param name="checkLabels">Indicates whether the range contains series's name</param>
    /// <returns>Return the first index of the added ASeries in the NSeries.</returns>
    /// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
    /// <br>If set data on non contiguous cells, use comma to seperate them.For example, ($C$2,$D$5).</br></remarks>
    ASPOSE_CELLS_API int32_t Add(const char16_t* area, bool isVertical, bool checkLabels);
    /// <summary>
    /// Represents if the color of points is varied.
    /// </summary>
    ASPOSE_CELLS_API bool IsColorVaried();
    /// <summary>
    /// Represents if the color of points is varied.
    /// </summary>
    ASPOSE_CELLS_API void SetIsColorVaried(bool value);
    /// <summary>
    /// Clears the collection
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
