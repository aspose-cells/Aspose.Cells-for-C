// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SLICERS_SLICERCACHEITEM_H
#define ASPOSE_CELLS_SLICERS_SLICERCACHEITEM_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Slicers {

using namespace Aspose::Cells;

class SlicerCacheItem_Impl;

/// <summary>
/// Represent slicer data source item
/// </summary>
class SlicerCacheItem {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SlicerCacheItem_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheItem(SlicerCacheItem_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheItem(const SlicerCacheItem& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SlicerCacheItem();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SlicerCacheItem& operator=(const SlicerCacheItem& src);
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
    /// Specifies whether the SlicerItem is selected or not.
    /// </summary>
    ASPOSE_CELLS_API bool GetSelected();
    /// <summary>
    /// Specifies whether the SlicerItem is selected or not.
    /// </summary>
    ASPOSE_CELLS_API void SetSelected(bool value);
    /// <summary>
    /// Returns the label text for the slicer item. Read-only.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue();
    
};

} } }

#endif
