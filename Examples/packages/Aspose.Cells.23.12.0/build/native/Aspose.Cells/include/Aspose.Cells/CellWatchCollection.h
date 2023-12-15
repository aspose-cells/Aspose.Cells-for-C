// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLWATCHCOLLECTION_H
#define ASPOSE_CELLS_CELLWATCHCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class CellWatch;
} }

namespace Aspose { namespace Cells {

class CellWatchCollection_Impl;

/// <summary>
/// Represents the collection of cells on this worksheet being watched in the 'watch window'.
/// </summary>
class CellWatchCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CellWatchCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CellWatchCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CellWatchCollection(CellWatchCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CellWatchCollection(const CellWatchCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CellWatchCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CellWatchCollection& operator=(const CellWatchCollection& src);
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
    /// Adds <see cref="CellWatch"/> with row and column.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns>Returns the position of this item in the collection. </returns>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column);
    /// <summary>
    /// Adds <see cref="CellWatch"/> with the name the of cell.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& cellName);
    /// <summary>
    /// Adds <see cref="CellWatch"/> with the name the of cell.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* cellName);
    /// <summary>
    /// Gets and sets <see cref="CellWatch"/> by index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API CellWatch Get(int32_t index);
    /// <summary>
    /// Gets and sets <see cref="CellWatch"/> by the name of the cell.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API CellWatch Get(const U16String& cellName);
    /// <summary>
    /// Gets and sets <see cref="CellWatch"/> by the name of the cell.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API CellWatch Get(const char16_t* cellName);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
