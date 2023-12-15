// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLECOLLECTION_H
#define ASPOSE_CELLS_QUERYTABLECOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class QueryTable;
} }

namespace Aspose { namespace Cells {

class QueryTableCollection_Impl;

/// <summary>
/// A collection of <see cref="QueryTableCollection"/> objects that represent QueryTable collection information.
/// </summary>
class QueryTableCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    QueryTableCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API QueryTableCollection(QueryTableCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API QueryTableCollection(const QueryTableCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~QueryTableCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API QueryTableCollection& operator=(const QueryTableCollection& src);
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
    /// Gets the querytable by the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The querytable</returns>
    ASPOSE_CELLS_API QueryTable Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
