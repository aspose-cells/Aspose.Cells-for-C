// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_COLUMNCOLLECTION_H
#define ASPOSE_CELLS_COLUMNCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Column;
} }

namespace Aspose { namespace Cells {

class ColumnCollection_Impl;

/// <summary>
/// Collection of the <see cref="Column"/> objects that represent the individual column(setting)s in a worksheet.
/// The Column object only represents the settings such as column width, styles, .etc. for the whole column,
/// has nothing to do with the fact that there are non-empty cells(data) or not in corresponding column.
/// And the "Count" of this collection only represents the count Column objects that have been instantiated in this collection,
/// has nothing to do with the fact that there are non-empty cells(data) or not in the worksheet.
/// </summary>
class ColumnCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ColumnCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ColumnCollection(ColumnCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ColumnCollection(const ColumnCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ColumnCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ColumnCollection& operator=(const ColumnCollection& src);
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
    /// Gets the <see cref="Column"/> object by the position in the list.
    /// </summary>
    /// <param name="index">The position in the list.</param>
    /// <returns>Returns the column object.</returns>
    ASPOSE_CELLS_API Column GetColumnByIndex(int32_t index);
    /// <summary>
    /// Gets a <see cref="Column"/> object by column index.
    /// The Column object of given column index will be instantiated if it does not exist before.
    /// </summary>
    ASPOSE_CELLS_API Column Get(int32_t columnIndex);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
