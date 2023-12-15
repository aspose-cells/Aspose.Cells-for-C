// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEPATHCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_SHAPEPATHCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapePath;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class ShapePathCollection_Impl;

/// <summary>
/// Represents path collection information in NotPrimitive autoshape
/// </summary>
class ShapePathCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapePathCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapePathCollection(ShapePathCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapePathCollection(const ShapePathCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapePathCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapePathCollection& operator=(const ShapePathCollection& src);
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
    /// Gets the count of paths
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Gets a creation path.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>Returns <see cref="ShapePath"/> object.</returns>
    ASPOSE_CELLS_API ShapePath Get(int32_t index);
    /// <summary>
    /// Add a creation path.
    /// </summary>
    /// <returns>Returns <see cref="ShapePath"/> object.</returns>
    ASPOSE_CELLS_API int32_t Add();
    
};

} } }

#endif
