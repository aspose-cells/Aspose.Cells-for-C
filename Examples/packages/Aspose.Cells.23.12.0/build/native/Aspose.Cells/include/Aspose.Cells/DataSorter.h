// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATASORTER_H
#define ASPOSE_CELLS_DATASORTER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/SortOnType.h"
#include "Aspose.Cells/SortOrder.h"

namespace Aspose { namespace Cells {
    class DataSorterKeyCollection;
    class Cells;
    class CellArea;
} }

namespace Aspose { namespace Cells {

class DataSorter_Impl;

/// <summary>
/// Summary description for DataSorter.
/// </summary>
class DataSorter {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataSorter_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataSorter(DataSorter_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataSorter(const DataSorter& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataSorter();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataSorter& operator=(const DataSorter& src);
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
    /// Gets the key list of data sorter.
    /// </summary>
    ASPOSE_CELLS_API DataSorterKeyCollection GetKeys();
    /// <summary>
    /// Clear all settings.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Represents whether the range has headers.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasHeaders();
    /// <summary>
    /// Represents whether the range has headers.
    /// </summary>
    ASPOSE_CELLS_API void SetHasHeaders(bool value);
    /// <summary>
    /// Adds sorted column index and sort order.
    /// </summary>
    /// <param name="key">The sorted column index(absolute position, column A is 0, B is 1, ...)</param>
    /// <param name="order">The sort order</param>
    ASPOSE_CELLS_API void AddKey(int32_t key, SortOrder order);
    /// <summary>
    /// Adds sorted column index and sort order with custom sort list.
    /// </summary>
    /// <param name="key">The sorted column index(absolute position, column A is 0, B is 1, ...)</param>
    /// <param name="order">The sort order.</param>
    /// <param name="customList">The custom sort list.</param>
    ASPOSE_CELLS_API void AddKey(int32_t key, SortOrder order, const U16String& customList);
    /// <summary>
    /// Adds sorted column index and sort order with custom sort list.
    /// </summary>
    /// <param name="key">The sorted column index(absolute position, column A is 0, B is 1, ...)</param>
    /// <param name="order">The sort order.</param>
    /// <param name="customList">The custom sort list.</param>
    ASPOSE_CELLS_API void AddKey(int32_t key, SortOrder order, const char16_t* customList);
    /// <summary>
    /// Adds sorted column index and sort order with custom sort list.
    /// </summary>
    /// <param name="key">The sorted column index(absolute position, column A is 0, B is 1, ...)</param>
    /// <param name="order">The sort order.</param>
    /// <param name="customList">The custom sort list.</param>
    ASPOSE_CELLS_API void AddKey(int32_t key, SortOrder order, const Vector<U16String>& customList);
    /// <summary>
    /// Represents first sorted column index(absolute position, column A is 0, B is 1, ...).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetKey1();
    /// <summary>
    /// Represents first sorted column index(absolute position, column A is 0, B is 1, ...).
    /// </summary>
    ASPOSE_CELLS_API void SetKey1(int32_t value);
    /// <summary>
    /// Represents sort order of the first key.
    /// </summary>
    ASPOSE_CELLS_API SortOrder GetOrder1();
    /// <summary>
    /// Represents sort order of the first key.
    /// </summary>
    ASPOSE_CELLS_API void SetOrder1(SortOrder value);
    /// <summary>
    /// Represents second sorted column index(absolute position, column A is 0, B is 1, ...).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetKey2();
    /// <summary>
    /// Represents second sorted column index(absolute position, column A is 0, B is 1, ...).
    /// </summary>
    ASPOSE_CELLS_API void SetKey2(int32_t value);
    /// <summary>
    /// Represents sort order of the second key.
    /// </summary>
    ASPOSE_CELLS_API SortOrder GetOrder2();
    /// <summary>
    /// Represents sort order of the second key.
    /// </summary>
    ASPOSE_CELLS_API void SetOrder2(SortOrder value);
    /// <summary>
    /// Represents third sorted column index(absolute position, column A is 0, B is 1, ...).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetKey3();
    /// <summary>
    /// Represents third sorted column index(absolute position, column A is 0, B is 1, ...).
    /// </summary>
    ASPOSE_CELLS_API void SetKey3(int32_t value);
    /// <summary>
    /// Represents sort order of the third key.
    /// </summary>
    ASPOSE_CELLS_API SortOrder GetOrder3();
    /// <summary>
    /// Represents sort order of the third key.
    /// </summary>
    ASPOSE_CELLS_API void SetOrder3(SortOrder value);
    /// <summary>
    /// True means that sorting orientation is from left to right.
    /// False means that sorting orientation is from top to bottom.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetSortLeftToRight();
    /// <summary>
    /// True means that sorting orientation is from left to right.
    /// False means that sorting orientation is from top to bottom.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetSortLeftToRight(bool value);
    /// <summary>
    /// Gets and sets whether case sensitive when comparing string.
    /// </summary>
    ASPOSE_CELLS_API bool GetCaseSensitive();
    /// <summary>
    /// Gets and sets whether case sensitive when comparing string.
    /// </summary>
    ASPOSE_CELLS_API void SetCaseSensitive(bool value);
    /// <summary>
    /// Indicates whether sorting anything that looks like a number.
    /// </summary>
    ASPOSE_CELLS_API bool GetSortAsNumber();
    /// <summary>
    /// Indicates whether sorting anything that looks like a number.
    /// </summary>
    ASPOSE_CELLS_API void SetSortAsNumber(bool value);
    /// <summary>
    /// Sorts the data of the area.
    /// </summary>
    /// <param name="cells">The cells contains the data area.</param>
    /// <param name="startRow">The start row of the area.</param>
    /// <param name="startColumn">The start column of the area.</param>
    /// <param name="endRow">The end row of the area.</param>
    /// <param name="endColumn">The end column of the area.</param>
    /// <returns>the original indices(absolute position, for example, column A is 0, B is 1, ...) of the sorted rows/columns.
    /// If no rows/columns needs to be moved by this sorting operation, null will be returned.</returns>
    ASPOSE_CELLS_API Vector<int32_t> Sort(const Cells& cells, int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn);
    /// <summary>
    /// Sort the data of the area.
    /// </summary>
    /// <param name="cells">The cells contains the data area.</param>
    /// <param name="area">The area needed to sort</param>
    /// <returns>the original indices(absolute position, for example, column A is 0, B is 1, ...) of the sorted rows/columns.
    /// If no rows/columns needs to be moved by this sorting operation, null will be returned.</returns>
    ASPOSE_CELLS_API Vector<int32_t> Sort(const Cells& cells, const CellArea& area);
    /// <summary>
    /// Sort the data in the range.
    /// </summary>
    /// <returns>the original indices(absolute position, for example, column A is 0, B is 1, ...) of the sorted rows/columns.
    /// If no rows/columns needs to be moved by this sorting operation, null will be returned.</returns>
    ASPOSE_CELLS_API Vector<int32_t> Sort();
    
};

} }

#endif
