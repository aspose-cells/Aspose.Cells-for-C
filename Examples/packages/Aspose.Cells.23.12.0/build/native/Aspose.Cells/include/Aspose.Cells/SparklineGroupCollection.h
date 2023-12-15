// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_SPARKLINEGROUPCOLLECTION_H
#define ASPOSE_CELLS_CHARTS_SPARKLINEGROUPCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/SparklineType.h"

namespace Aspose { namespace Cells { namespace Charts {
    class SparklineGroup;
} } }

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class SparklineGroupCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="SparklineGroup"/> objects.
/// </summary>
class SparklineGroupCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SparklineGroupCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SparklineGroupCollection(SparklineGroupCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SparklineGroupCollection(const SparklineGroupCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SparklineGroupCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SparklineGroupCollection& operator=(const SparklineGroupCollection& src);
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
    /// Gets the <see cref="SparklineGroup"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API SparklineGroup Get(int32_t index);
    /// <summary>
    /// Adds an <see cref="SparklineGroup"/> item to the collection.
    /// </summary>
    /// <param name="type">Specifies the type of the Sparkline group.</param>
    /// <param name="dataRange">Specifies the data range of the sparkline group.</param>
    /// <param name="isVertical">Specifies whether to plot the sparklines from the data range by row or by column.</param>
    /// <param name="locationRange">Specifies where the sparklines to be placed.</param>
    /// <returns><see cref="SparklineGroup"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(SparklineType type, const U16String& dataRange, bool isVertical, const CellArea& locationRange);
    /// <summary>
    /// Adds an <see cref="SparklineGroup"/> item to the collection.
    /// </summary>
    /// <param name="type">Specifies the type of the Sparkline group.</param>
    /// <param name="dataRange">Specifies the data range of the sparkline group.</param>
    /// <param name="isVertical">Specifies whether to plot the sparklines from the data range by row or by column.</param>
    /// <param name="locationRange">Specifies where the sparklines to be placed.</param>
    /// <returns><see cref="SparklineGroup"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(SparklineType type, const char16_t* dataRange, bool isVertical, const CellArea& locationRange);
    /// <summary>
    /// Clears the sparklines that is inside an area of cells.
    /// </summary>
    /// <param name="cellArea">Specifies the area of cells</param>
    ASPOSE_CELLS_API void ClearSparklines(const CellArea& cellArea);
    /// <summary>
    /// Clears the sparkline groups that overlaps an area of cells.
    /// </summary>
    /// <param name="cellArea">Specifies the area of cells</param>
    ASPOSE_CELLS_API void ClearSparklineGroups(const CellArea& cellArea);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
