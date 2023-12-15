// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HORIZONTALPAGEBREAKCOLLECTION_H
#define ASPOSE_CELLS_HORIZONTALPAGEBREAKCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class HorizontalPageBreak;
} }

namespace Aspose { namespace Cells {

class HorizontalPageBreakCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="HorizontalPageBreak"/> objects.
/// </summary>
class HorizontalPageBreakCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    HorizontalPageBreakCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API HorizontalPageBreakCollection(HorizontalPageBreakCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API HorizontalPageBreakCollection(const HorizontalPageBreakCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~HorizontalPageBreakCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API HorizontalPageBreakCollection& operator=(const HorizontalPageBreakCollection& src);
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
    /// Gets the <see cref="HorizontalPageBreak"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API HorizontalPageBreak Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="HorizontalPageBreak"/> element with the specified cell name.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns>The element with the specified cell name.</returns>
    ASPOSE_CELLS_API HorizontalPageBreak Get(const U16String& cellName);
    /// <summary>
    /// Gets the <see cref="HorizontalPageBreak"/> element with the specified cell name.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns>The element with the specified cell name.</returns>
    ASPOSE_CELLS_API HorizontalPageBreak Get(const char16_t* cellName);
    /// <summary>
    /// Adds a horizontal page break to the collection.
    /// </summary>
    /// <param name="row">Row index, zero based.</param>
    /// <param name="startColumn">Start column index, zero based.</param>
    /// <param name="endColumn">End column index, zero based.</param>
    /// <returns><see cref="HorizontalPageBreak"/> object index.</returns>
    /// <remarks>This method is used to add a horizontal pagebreak within a print area.</remarks>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t startColumn, int32_t endColumn);
    /// <summary>
    /// Adds a horizontal page break to the collection.
    /// </summary>
    /// <param name="row">Cell row index, zero based.</param>
    /// <returns><see cref="HorizontalPageBreak"/> object index.</returns>
    /// <remarks>Page break is added in the top left of the cell.
    /// Please set a horizontal page break and a vertical page break concurrently.</remarks>
    ASPOSE_CELLS_API int32_t Add(int32_t row);
    /// <summary>
    /// Adds a horizontal page break to the collection.
    /// </summary>
    /// <param name="row">Cell row index, zero based.</param>
    /// <param name="column">Cell column index, zero based.</param>
    /// <returns><see cref="HorizontalPageBreak"/> object index.</returns>
    /// <remarks>Page break is added in the top left of the cell.
    /// Please set a horizontal page break and a vertical page break concurrently.</remarks>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column);
    /// <summary>
    /// Adds a horizontal page break to the collection.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns><see cref="HorizontalPageBreak"/> object index.</returns>
    /// <remarks>Page break is added in the top left of the cell.
    /// Please set a horizontal page break and a vertical page break concurrently.</remarks>
    ASPOSE_CELLS_API int32_t Add(const U16String& cellName);
    /// <summary>
    /// Adds a horizontal page break to the collection.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns><see cref="HorizontalPageBreak"/> object index.</returns>
    /// <remarks>Page break is added in the top left of the cell.
    /// Please set a horizontal page break and a vertical page break concurrently.</remarks>
    ASPOSE_CELLS_API int32_t Add(const char16_t* cellName);
    /// <summary>
    /// Removes the HPageBreak element at a specified name.
    /// </summary>
    /// <param name="index">Element index, zero based.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
