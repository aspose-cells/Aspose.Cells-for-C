// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATASORTERKEY_H
#define ASPOSE_CELLS_DATASORTERKEY_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/IconSetType.h"
#include "Aspose.Cells/SortOnType.h"
#include "Aspose.Cells/SortOrder.h"

namespace Aspose { namespace Cells {

class DataSorterKey_Impl;

/// <summary>
/// Represents the key of the data sorter.
/// </summary>
class DataSorterKey {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataSorterKey_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataSorterKey(DataSorterKey_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataSorterKey(const DataSorterKey& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataSorterKey();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataSorterKey& operator=(const DataSorterKey& src);
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
    /// Indicates the order of sorting.
    /// </summary>
    ASPOSE_CELLS_API SortOrder GetOrder();
    /// <summary>
    /// Gets the sorted column index(absolute position, column A is 0, B is 1, ...).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIndex();
    /// <summary>
    /// Represents the type of sorting.
    /// </summary>
    ASPOSE_CELLS_API SortOnType GetType();
    /// <summary>
    /// Represents the icon set type.
    /// </summary>
    /// <remarks>
    /// Only takes effect when <see cref="Type"/> is <see cref="SortOnType.Icon"/>.
    /// </remarks>
    ASPOSE_CELLS_API IconSetType GetIconSetType();
    /// <summary>
    /// Represents the id of the icon set type.
    /// </summary>
    /// <remarks>
    /// Only takes effect when <see cref="Type"/> is <see cref="SortOnType.Icon"/>.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetIconId();
    /// <summary>
    /// Gets the sorted color.
    /// </summary>
    /// <remarks>
    /// Only takes effect when <see cref="Type"/> is <see cref="SortOnType.CellColor"/> or <see cref="SortOnType.FontColor"/>.
    /// </remarks>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    
};

} }

#endif
