// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SMARTARTSHAPE_H
#define ASPOSE_CELLS_DRAWING_SMARTARTSHAPE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class GroupShape;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class SmartArtShape_Impl;

/// <summary>
/// Represents the smart art.
/// </summary>
class SmartArtShape : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SmartArtShape_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SmartArtShape(SmartArtShape_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartArtShape(const SmartArtShape& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API SmartArtShape(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SmartArtShape();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SmartArtShape& operator=(const SmartArtShape& src);
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
    /// Converting smart art to grouped shapes.
    /// </summary>
    ASPOSE_CELLS_API GroupShape GetResultOfSmartArt();
    
};

} } }

#endif
