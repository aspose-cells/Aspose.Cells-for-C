// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_CUSTOMXMLSHAPE_H
#define ASPOSE_CELLS_DRAWING_CUSTOMXMLSHAPE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace Drawing {

class CustomXmlShape_Impl;

/// <summary>
/// Represents Custom xml shape ,such as Ink.
/// </summary>
class CustomXmlShape : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomXmlShape_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomXmlShape(CustomXmlShape_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomXmlShape(const CustomXmlShape& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API CustomXmlShape(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomXmlShape();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomXmlShape& operator=(const CustomXmlShape& src);
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
    
};

} } }

#endif
