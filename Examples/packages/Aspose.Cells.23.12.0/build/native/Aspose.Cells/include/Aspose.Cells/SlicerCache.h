// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SLICERS_SLICERCACHE_H
#define ASPOSE_CELLS_SLICERS_SLICERCACHE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/SlicerCacheCrossFilterType.h"

namespace Aspose { namespace Cells { namespace Slicers {
    class SlicerCacheItemCollection;
} } }

namespace Aspose { namespace Cells { namespace Slicers {

using namespace Aspose::Cells;

class SlicerCache_Impl;

/// <summary>
/// summary description of slicer cache
/// </summary>
class SlicerCache {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SlicerCache_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SlicerCache(SlicerCache_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SlicerCache(const SlicerCache& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SlicerCache();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SlicerCache& operator=(const SlicerCache& src);
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
    /// Returns or sets whether a slicer is participating in cross filtering with other slicers
    /// that share the same slicer cache, and how cross filtering is displayed. Read/write
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheCrossFilterType GetCrossFilterType();
    /// <summary>
    /// Returns or sets whether a slicer is participating in cross filtering with other slicers
    /// that share the same slicer cache, and how cross filtering is displayed. Read/write
    /// </summary>
    ASPOSE_CELLS_API void SetCrossFilterType(SlicerCacheCrossFilterType value);
    /// <summary>
    /// Returns whether the slicer associated with the specified slicer cache is based on an Non-OLAP data source. Read-only
    /// </summary>
    ASPOSE_CELLS_API bool GetList();
    /// <summary>
    /// Returns a SlicerCacheItem collection that contains the collection of all items in the slicer cache. Read-only
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheItemCollection GetSlicerCacheItems();
    /// <summary>
    /// Returns the name of the slicer cache.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Returns the name of cache field
    /// </summary>
    ASPOSE_CELLS_API U16String GetSourceName();
    
};

} } }

#endif
