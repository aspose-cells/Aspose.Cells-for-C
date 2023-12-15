// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTCOLLECTION_H
#define ASPOSE_CELLS_CHARTS_CHARTCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ChartType.h"

namespace Aspose { namespace Cells { namespace Charts {
    class Chart;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class ChartCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Chart"/> objects.
/// </summary>
class ChartCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ChartCollection(ChartCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartCollection(const ChartCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ChartCollection& operator=(const ChartCollection& src);
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
    /// Adds a chart to the collection.
    /// </summary>
    /// <param name="type">Chart type</param>
    /// <param name="left">The x offset to corner</param>
    /// <param name="top">The y offset to corner</param>
    /// <param name="width">The chart width</param>
    /// <param name="height">The chart height</param>
    /// <returns><see cref="Chart"/> object index.</returns>
    ASPOSE_CELLS_API int32_t AddFloatingChart(ChartType type, int32_t left, int32_t top, int32_t width, int32_t height);
    /// <summary>
    /// Adds a chart to the collection.
    /// </summary>
    /// <param name="type">Chart type</param>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="lowerRightRow">Lower right row index</param>
    /// <param name="lowerRightColumn">Lower right column index</param>
    /// <returns><see cref="Chart"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(ChartType type, int32_t upperLeftRow, int32_t upperLeftColumn, int32_t lowerRightRow, int32_t lowerRightColumn);
    /// <summary>
    /// Adds a chart with preset template.
    /// </summary>
    /// <param name="data">The data of chart template file(.crtx).
    /// </param>
    /// <param name="dataRange">Specifies the data range of the chart</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <param name="topRow">Upper left row index.</param>
    /// <param name="leftColumn">Upper left column index.</param>
    /// <param name="rightRow">Lower right row index</param>
    /// <param name="bottomColumn">Lower right column index</param>
    /// <returns><see cref="Chart"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const Vector<uint8_t>& data, const U16String& dataRange, bool isVertical, int32_t topRow, int32_t leftColumn, int32_t rightRow, int32_t bottomColumn);
    /// <summary>
    /// Adds a chart with preset template.
    /// </summary>
    /// <param name="data">The data of chart template file(.crtx).
    /// </param>
    /// <param name="dataRange">Specifies the data range of the chart</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <param name="topRow">Upper left row index.</param>
    /// <param name="leftColumn">Upper left column index.</param>
    /// <param name="rightRow">Lower right row index</param>
    /// <param name="bottomColumn">Lower right column index</param>
    /// <returns><see cref="Chart"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const Vector<uint8_t>& data, const char16_t* dataRange, bool isVertical, int32_t topRow, int32_t leftColumn, int32_t rightRow, int32_t bottomColumn);
    /// <summary>
    /// Adds a chart to the collection.
    /// </summary>
    /// <param name="type">Chart type</param>
    /// <param name="dataRange">Specifies the data range of the chart</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <param name="topRow">Upper left row index.</param>
    /// <param name="leftColumn">Upper left column index.</param>
    /// <param name="rightRow">Lower right row index</param>
    /// <param name="bottomColumn">Lower right column index</param>
    /// <returns><see cref="Chart"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(ChartType type, const U16String& dataRange, bool isVertical, int32_t topRow, int32_t leftColumn, int32_t rightRow, int32_t bottomColumn);
    /// <summary>
    /// Adds a chart to the collection.
    /// </summary>
    /// <param name="type">Chart type</param>
    /// <param name="dataRange">Specifies the data range of the chart</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    /// <param name="topRow">Upper left row index.</param>
    /// <param name="leftColumn">Upper left column index.</param>
    /// <param name="rightRow">Lower right row index</param>
    /// <param name="bottomColumn">Lower right column index</param>
    /// <returns><see cref="Chart"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(ChartType type, const char16_t* dataRange, bool isVertical, int32_t topRow, int32_t leftColumn, int32_t rightRow, int32_t bottomColumn);
    /// <summary>
    /// Gets the <see cref="Chart"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Chart Get(int32_t index);
    /// <summary>
    /// Gets the chart by the name.
    /// </summary>
    /// <param name="name"> The chart name.</param>
    /// <returns>The chart.</returns>
    /// <remarks>
    /// The default chart name is null. So you have to explicitly set the name of the chart.
    /// </remarks>
    ASPOSE_CELLS_API Chart Get(const U16String& name);
    /// <summary>
    /// Gets the chart by the name.
    /// </summary>
    /// <param name="name"> The chart name.</param>
    /// <returns>The chart.</returns>
    /// <remarks>
    /// The default chart name is null. So you have to explicitly set the name of the chart.
    /// </remarks>
    ASPOSE_CELLS_API Chart Get(const char16_t* name);
    /// <summary>
    /// Remove a chart at the specific index.
    /// </summary>
    /// <param name="index">The chart index.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Clear all charts.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
