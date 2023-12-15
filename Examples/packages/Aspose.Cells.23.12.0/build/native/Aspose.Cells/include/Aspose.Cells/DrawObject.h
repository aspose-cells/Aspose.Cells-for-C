// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_DRAWOBJECT_H
#define ASPOSE_CELLS_RENDERING_DRAWOBJECT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/DrawObjectEnum.h"

namespace Aspose { namespace Cells {
    class Cell;
} }

namespace Aspose { namespace Cells { namespace Drawing {
    class Shape;
} } }

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class DrawObject_Impl;

/// <summary>
/// DrawObject will be initialized and returned when rendering.
/// </summary>
class DrawObject {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DrawObject_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DrawObject(DrawObject_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DrawObject(const DrawObject& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DrawObject();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DrawObject& operator=(const DrawObject& src);
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
    /// Indicates the Cell object when rendering.
    /// All properties of cell can be accessed.
    /// </summary>
    ASPOSE_CELLS_API Cell GetCell();
    /// <summary>
    /// Indicates the Shape object when rendering.
    /// All properties of shape can be accessed.
    /// </summary>
    ASPOSE_CELLS_API Shape GetShape();
    /// <summary>
    /// Indicates image bytes of rendered Chart, Shape when rendering.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImageBytes();
    /// <summary>
    /// Indicates the type of DrawObject.
    /// </summary>
    ASPOSE_CELLS_API DrawObjectEnum GetType();
    /// <summary>
    /// Indicates the page index of DrawObject.
    /// Page index is based on zero.
    /// One Sheet contains several pages when rendering.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCurrentPage();
    /// <summary>
    /// Indicates total pages in current rendering.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTotalPages();
    /// <summary>
    /// Indicates current sheet index of DrawObject.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSheetIndex();
    
};

} } }

#endif
