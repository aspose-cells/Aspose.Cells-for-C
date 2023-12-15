// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_DRAWOBJECTEVENTHANDLER_H
#define ASPOSE_CELLS_RENDERING_DRAWOBJECTEVENTHANDLER_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Rendering {
    class DrawObject;
} } }

namespace Aspose { namespace Cells { namespace Rendering {

class DrawObjectEventHandler_Bridge;

/// <summary>
/// Interface to get DrawObject and Bound when rendering.
/// </summary>
class ASPOSE_CELLS_API2 DrawObjectEventHandler {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DrawObjectEventHandler_Bridge* _impl;
    
public:
    /// <summary>
    /// Implements this interface to get DrawObject and Bound when rendering.
    /// </summary>
    /// <param name="drawObject"> DrawObject will be initialized and returned when rendering</param>
    /// <param name="x">Left of DrawObject</param>
    /// <param name="y">Top of DrawObject</param>
    /// <param name="width">Width of DrawObject</param>
    /// <param name="height">Height of DrawObject</param>
    ASPOSE_CELLS_API virtual void Draw(DrawObject& drawObject, float x, float y, float width, float height);
    
};

} } }

#endif
