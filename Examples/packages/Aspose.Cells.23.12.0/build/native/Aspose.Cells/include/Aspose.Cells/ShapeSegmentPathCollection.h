// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPESEGMENTPATHCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_SHAPESEGMENTPATHCOLLECTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/ShapePathType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapeSegmentPath;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class ShapeSegmentPathCollection_Impl;

/// <summary>
/// Represents a creation path consisting of a series of moves, lines and curves that when combined will form a geometric shape.
/// </summary>
class ShapeSegmentPathCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapeSegmentPathCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPathCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPathCollection(ShapeSegmentPathCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPathCollection(const ShapeSegmentPathCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapeSegmentPathCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPathCollection& operator=(const ShapeSegmentPathCollection& src);
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
    /// Add a segment path in creation path.
    /// </summary>
    /// <param name="type">The path type.</param>
    /// <returns>Returns the position of <see cref="ShapeSegmentPath"/> object in the list. </returns>
    ASPOSE_CELLS_API int32_t Add(ShapePathType type);
    /// <summary>
    /// Gets <see cref="ShapeSegmentPath"/> object.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>Returns a <see cref="ShapeSegmentPath"/> object.</returns>
    ASPOSE_CELLS_API ShapeSegmentPath Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
