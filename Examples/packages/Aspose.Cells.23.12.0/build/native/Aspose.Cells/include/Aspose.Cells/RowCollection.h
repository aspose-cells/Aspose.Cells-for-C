// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ROWCOLLECTION_H
#define ASPOSE_CELLS_ROWCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"

namespace Aspose { namespace Cells {
    class Row;
} }

namespace Aspose { namespace Cells {

class RowCollection_Impl;

/// <summary>
/// Collects the <see cref="Row"/> objects that represent the individual rows in a worksheet.
/// </summary>
class RowCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RowCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RowCollection(RowCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RowCollection(const RowCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RowCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RowCollection& operator=(const RowCollection& src);
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
    /// Gets the number of rows in this collection.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Gets an enumerator that iterates rows through this collection
    /// </summary>
    /// <returns>enumerator</returns>
    ASPOSE_CELLS_API Enumerator<Row> GetEnumerator();
    /// <summary>
    /// Gets an enumerator that iterates rows through this collection
    /// </summary>
    /// <param name="reversed">whether enumerate rows in reversed order</param>
    /// <param name="sync">whether the returned enumerator should check the modification of row collection
    /// and keep synchronized with it.</param>
    /// <returns>The row enumerator</returns>
    /// <remarks>If the row collection will be modified(by operations that may cause new Row be instantiated or
    /// existing Row be removed) during the traversal with the enumerator,
    /// synchronized enumerator should be used instead of normal enumerator so that the traversal can continue
    /// from the position just after the one has been traversed by the last MoveNext().
    /// However, together with the advantage that no element be skipped or traversed repeatedly,
    /// the disadvantage for synchronized enumerator is that the performance will be degraded a bit
    /// when comparing with normal enumerator.</remarks>
    ASPOSE_CELLS_API Enumerator<Row> GetEnumerator(bool reversed, bool sync);
    /// <summary>
    /// Gets the row object by the position in the list.
    /// </summary>
    /// <param name="index">The position.</param>
    /// <returns>The Row object at given position.</returns>
    ASPOSE_CELLS_API Row GetRowByIndex(int32_t index);
    /// <summary>
    /// Gets a <see cref="Row"/> object by given row index. The Row object of given row index will be instantiated if it does not exist before.
    /// </summary>
    ASPOSE_CELLS_API Row Get(int32_t rowIndex);
    /// <summary>
    /// Clear all rows and cells.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Remove the row at the specified index
    /// </summary>
    /// <param name="index">zero-based row index</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    
};

} }

#endif
