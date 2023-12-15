// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTPOINTCOLLECTION_H
#define ASPOSE_CELLS_CHARTS_CHARTPOINTCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"

namespace Aspose { namespace Cells { namespace Charts {
    class ChartPoint;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class ChartPointCollection_Impl;

/// <summary>
/// Represents a collection that contains all the points in one series.
/// </summary>
class ChartPointCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartPointCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ChartPointCollection(ChartPointCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartPointCollection(const ChartPointCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartPointCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ChartPointCollection& operator=(const ChartPointCollection& src);
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
    /// Returns an enumerator for the entire <see cref="ChartPointCollection"/>.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Enumerator<ChartPoint> GetEnumerator();
    /// <summary>
    /// Remove all setting of the chart points.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Removes point at the index of the series..
    /// </summary>
    /// <param name="index">The index of the point.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Gets the count of the chart point.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Gets the <see cref="ChartPoint"/> element at the specified index in the series.
    /// </summary>
    /// <param name="index">The index of chart point in the series.</param>
    /// <returns>The ChartPoint object.</returns>
    ASPOSE_CELLS_API ChartPoint Get(int32_t index);
    
};

} } }

#endif
