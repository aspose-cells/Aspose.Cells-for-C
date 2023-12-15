// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VERTICALPAGEBREAKCOLLECTION_H
#define ASPOSE_CELLS_VERTICALPAGEBREAKCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class VerticalPageBreak;
} }

namespace Aspose { namespace Cells {

class VerticalPageBreakCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="VerticalPageBreak"/> objects.
/// </summary>
class VerticalPageBreakCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    VerticalPageBreakCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API VerticalPageBreakCollection(VerticalPageBreakCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API VerticalPageBreakCollection(const VerticalPageBreakCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~VerticalPageBreakCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API VerticalPageBreakCollection& operator=(const VerticalPageBreakCollection& src);
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
    /// Gets the <see cref="VerticalPageBreak"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API VerticalPageBreak Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="VerticalPageBreak"/> element with the specified cell name.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns>The element with the specified cell name.</returns>
    ASPOSE_CELLS_API VerticalPageBreak Get(const U16String& cellName);
    /// <summary>
    /// Gets the <see cref="VerticalPageBreak"/> element with the specified cell name.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns>The element with the specified cell name.</returns>
    ASPOSE_CELLS_API VerticalPageBreak Get(const char16_t* cellName);
    /// <summary>
    /// Adds a vertical page break to the collection.
    /// </summary>
    /// <param name="startRow">Start row index, zero based.</param>
    /// <param name="endRow">End row index, zero based.</param>
    /// <param name="column">Column index, zero based.</param>
    /// <returns><see cref="VerticalPageBreak"/> object index.</returns>
    /// <remarks>This method is used to add a vertical pagebreak within a print area.</remarks>
    ASPOSE_CELLS_API int32_t Add(int32_t startRow, int32_t endRow, int32_t column);
    /// <summary>
    /// Adds a vertical page break to the collection.
    /// </summary>
    /// <param name="column">Cell column index, zero based.</param>
    /// <returns><see cref="VerticalPageBreak"/> object index.</returns>
    /// <remarks>Page break is added in the top left of the cell.
    /// Please set a horizontal page break and a vertical page break concurrently.</remarks>
    ASPOSE_CELLS_API int32_t Add(int32_t column);
    /// <summary>
    /// Adds a vertical page break to the collection.
    /// </summary>
    /// <param name="row">Cell row index, zero based.</param>
    /// <param name="column">Cell column index, zero based.</param>
    /// <returns><see cref="VerticalPageBreak"/> object index.</returns>
    /// <remarks>Page break is added in the top left of the cell.
    /// Please set a horizontal page break and a vertical page break concurrently.</remarks>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column);
    /// <summary>
    /// Adds a vertical page break to the collection.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns><see cref="VerticalPageBreak"/> object index.</returns>
    /// <remarks>Page break is added in the top left of the cell.
    /// Please set a horizontal page break and a vertical page break concurrently.</remarks>
    ASPOSE_CELLS_API int32_t Add(const U16String& cellName);
    /// <summary>
    /// Adds a vertical page break to the collection.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns><see cref="VerticalPageBreak"/> object index.</returns>
    /// <remarks>Page break is added in the top left of the cell.
    /// Please set a horizontal page break and a vertical page break concurrently.</remarks>
    ASPOSE_CELLS_API int32_t Add(const char16_t* cellName);
    /// <summary>
    /// Removes the VPageBreak element at a specified name.
    /// </summary>
    /// <param name="index">Element index, zero based.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
