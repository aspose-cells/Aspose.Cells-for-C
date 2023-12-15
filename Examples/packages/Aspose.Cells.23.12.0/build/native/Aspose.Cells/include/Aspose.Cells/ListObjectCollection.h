// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_LISTOBJECTCOLLECTION_H
#define ASPOSE_CELLS_TABLES_LISTOBJECTCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Tables {
    class ListObject;
} } }

namespace Aspose { namespace Cells { namespace Tables {

using namespace Aspose::Cells;

class ListObjectCollection_Impl;

/// <summary>
/// Represents a collection of <see cref="ListObject"/> objects in the worksheet.
/// </summary>
class ListObjectCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ListObjectCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ListObjectCollection(ListObjectCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ListObjectCollection(const ListObjectCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ListObjectCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ListObjectCollection& operator=(const ListObjectCollection& src);
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
    /// Gets the ListObject by index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The ListObject</returns>
    ASPOSE_CELLS_API ListObject Get(int32_t index);
    /// <summary>
    /// Gets the ListObject by specified name.
    /// </summary>
    /// <param name="tableName">ListObject name.</param>
    /// <returns>The ListObject</returns>
    ASPOSE_CELLS_API ListObject Get(const U16String& tableName);
    /// <summary>
    /// Gets the ListObject by specified name.
    /// </summary>
    /// <param name="tableName">ListObject name.</param>
    /// <returns>The ListObject</returns>
    ASPOSE_CELLS_API ListObject Get(const char16_t* tableName);
    /// <summary>
    /// Adds a ListObject to the worksheet.
    /// </summary>
    /// <param name="startRow">The start row of the list range.</param>
    /// <param name="startColumn">The start row of the list range.</param>
    /// <param name="endRow">The start row of the list range.</param>
    /// <param name="endColumn">The start row of the list range.</param>
    /// <param name="hasHeaders">Whether the range has headers.</param>
    /// <returns>The index of the new ListObject</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn, bool hasHeaders);
    /// <summary>
    /// Adds a ListObject to the worksheet.
    /// </summary>
    /// <param name="startCell">The start cell of the list range.</param>
    /// <param name="endCell">The end cell of the list range.</param>
    /// <param name="hasHeaders">Whether the range has headers.</param>
    /// <returns>The index of the new ListObject</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& startCell, const U16String& endCell, bool hasHeaders);
    /// <summary>
    /// Adds a ListObject to the worksheet.
    /// </summary>
    /// <param name="startCell">The start cell of the list range.</param>
    /// <param name="endCell">The end cell of the list range.</param>
    /// <param name="hasHeaders">Whether the range has headers.</param>
    /// <returns>The index of the new ListObject</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* startCell, const char16_t* endCell, bool hasHeaders);
    /// <summary>
    /// Update all column name of the tables.
    /// </summary>
    ASPOSE_CELLS_API void UpdateColumnName();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
