// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_WEBEXTENSIONSHAPE_H
#define ASPOSE_CELLS_DRAWING_WEBEXTENSIONSHAPE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtension;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells::WebExtensions;

class WebExtensionShape_Impl;

/// <summary>
/// Represents the shape of web extension.
/// </summary>
class WebExtensionShape : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionShape_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionShape(WebExtensionShape_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionShape(const WebExtensionShape& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionShape(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionShape();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionShape& operator=(const WebExtensionShape& src);
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
    /// Gets and set the web extension.
    /// </summary>
    ASPOSE_CELLS_API WebExtension GetWebExtension();
    /// <summary>
    /// Gets and set the web extension.
    /// </summary>
    ASPOSE_CELLS_API void SetWebExtension(const WebExtension& value);
    
};

} } }

#endif
