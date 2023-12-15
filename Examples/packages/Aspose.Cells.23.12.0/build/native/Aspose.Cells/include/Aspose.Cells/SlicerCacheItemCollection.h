// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SLICERS_SLICERCACHEITEMCOLLECTION_H
#define ASPOSE_CELLS_SLICERS_SLICERCACHEITEMCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Slicers {
    class SlicerCacheItem;
} } }

namespace Aspose { namespace Cells { namespace Slicers {

class SlicerCacheItemCollection_Impl;

/// <summary>
/// Represent the collection of SlicerCacheItem
/// </summary>
class SlicerCacheItemCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SlicerCacheItemCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheItemCollection(SlicerCacheItemCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheItemCollection(const SlicerCacheItemCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SlicerCacheItemCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheItemCollection& operator=(const SlicerCacheItemCollection& src);
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
    /// Gets the SlicerCacheItem object by index.
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheItem Get(int32_t index);
    /// <summary>
    /// Gets the count of the SlicerCacheItem.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    
};

} } }

#endif
