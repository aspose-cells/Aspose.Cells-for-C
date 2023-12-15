// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HYPERLINKCOLLECTION_H
#define ASPOSE_CELLS_HYPERLINKCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Hyperlink;
} }

namespace Aspose { namespace Cells {

class HyperlinkCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Hyperlink"/> objects.
/// </summary>
class HyperlinkCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    HyperlinkCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API HyperlinkCollection(HyperlinkCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API HyperlinkCollection(const HyperlinkCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~HyperlinkCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API HyperlinkCollection& operator=(const HyperlinkCollection& src);
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
    /// Adds a hyperlink to a specified cell or a range of cells.
    /// </summary>
    /// <param name="firstRow">First row of the hyperlink range.</param>
    /// <param name="firstColumn">First column of the hyperlink range.</param>
    /// <param name="totalRows">Number of rows in this hyperlink range.</param>
    /// <param name="totalColumns">Number of columns of this hyperlink range.</param>
    /// <param name="address">Address of the hyperlink.</param>
    /// <returns><see cref="Hyperlink"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t firstRow, int32_t firstColumn, int32_t totalRows, int32_t totalColumns, const U16String& address);
    /// <summary>
    /// Adds a hyperlink to a specified cell or a range of cells.
    /// </summary>
    /// <param name="firstRow">First row of the hyperlink range.</param>
    /// <param name="firstColumn">First column of the hyperlink range.</param>
    /// <param name="totalRows">Number of rows in this hyperlink range.</param>
    /// <param name="totalColumns">Number of columns of this hyperlink range.</param>
    /// <param name="address">Address of the hyperlink.</param>
    /// <returns><see cref="Hyperlink"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t firstRow, int32_t firstColumn, int32_t totalRows, int32_t totalColumns, const char16_t* address);
    /// <summary>
    /// Adds a hyperlink to a specified cell or a range of cells.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <param name="totalRows">Number of rows in this hyperlink range.</param>
    /// <param name="totalColumns">Number of columns of this hyperlink range.</param>
    /// <param name="address">Address of the hyperlink.</param>
    /// <returns><see cref="Hyperlink"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& cellName, int32_t totalRows, int32_t totalColumns, const U16String& address);
    /// <summary>
    /// Adds a hyperlink to a specified cell or a range of cells.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <param name="totalRows">Number of rows in this hyperlink range.</param>
    /// <param name="totalColumns">Number of columns of this hyperlink range.</param>
    /// <param name="address">Address of the hyperlink.</param>
    /// <returns><see cref="Hyperlink"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* cellName, int32_t totalRows, int32_t totalColumns, const char16_t* address);
    /// <summary>
    /// Adds a hyperlink to a specified cell or a range of cells.
    /// </summary>
    /// <param name="startCellName">The top-left cell of the range.</param>
    /// <param name="endCellName">The bottom-right cell of the range.</param>
    /// <param name="address">Address of the hyperlink.</param>
    /// <param name="textToDisplay">The text to be displayed for the specified hyperlink.</param>
    /// <param name="screenTip">The screenTip text for the specified hyperlink.</param>
    /// <returns><see cref="Hyperlink"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& startCellName, const U16String& endCellName, const U16String& address, const U16String& textToDisplay, const U16String& screenTip);
    /// <summary>
    /// Adds a hyperlink to a specified cell or a range of cells.
    /// </summary>
    /// <param name="startCellName">The top-left cell of the range.</param>
    /// <param name="endCellName">The bottom-right cell of the range.</param>
    /// <param name="address">Address of the hyperlink.</param>
    /// <param name="textToDisplay">The text to be displayed for the specified hyperlink.</param>
    /// <param name="screenTip">The screenTip text for the specified hyperlink.</param>
    /// <returns><see cref="Hyperlink"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* startCellName, const char16_t* endCellName, const char16_t* address, const char16_t* textToDisplay, const char16_t* screenTip);
    /// <summary>
    /// Gets the <see cref="Hyperlink"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Hyperlink Get(int32_t index);
    /// <summary>
    /// Remove the hyperlink  at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Clears all hyperlinks.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
