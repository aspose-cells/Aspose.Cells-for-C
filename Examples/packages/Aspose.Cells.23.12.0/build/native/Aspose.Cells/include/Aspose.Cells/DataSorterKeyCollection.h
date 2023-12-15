// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATASORTERKEYCOLLECTION_H
#define ASPOSE_CELLS_DATASORTERKEYCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class DataSorterKey;
} }

namespace Aspose { namespace Cells {

class DataSorterKeyCollection_Impl;

/// <summary>
/// Represents the key list of data sorter.
/// </summary>
class DataSorterKeyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataSorterKeyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API DataSorterKeyCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataSorterKeyCollection(DataSorterKeyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataSorterKeyCollection(const DataSorterKeyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataSorterKeyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataSorterKeyCollection& operator=(const DataSorterKeyCollection& src);
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
    /// Gets and sets <see cref="DataSorterKey"/> by index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API DataSorterKey Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
