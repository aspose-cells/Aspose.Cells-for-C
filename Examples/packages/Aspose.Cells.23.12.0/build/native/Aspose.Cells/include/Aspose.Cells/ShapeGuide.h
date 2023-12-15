// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEGUIDE_H
#define ASPOSE_CELLS_DRAWING_SHAPEGUIDE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/BaseShapeGuide.h"

namespace Aspose { namespace Cells { namespace Drawing {

class ShapeGuide_Impl;

/// <summary>
/// Encapsulates a shape guide specifies the presence of a shape guide that will be used to
/// govern the geometry of the specified shape
/// </summary>
class ShapeGuide : public BaseShapeGuide {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapeGuide_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapeGuide(ShapeGuide_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapeGuide(const ShapeGuide& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ShapeGuide(const BaseShapeGuide& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapeGuide();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapeGuide& operator=(const ShapeGuide& src);
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
    /// Gets or sets value of this guide
    /// </summary>
    ASPOSE_CELLS_API double GetValue();
    /// <summary>
    /// Gets or sets value of this guide
    /// </summary>
    ASPOSE_CELLS_API void SetValue(double value);
    
};

} } }

#endif
