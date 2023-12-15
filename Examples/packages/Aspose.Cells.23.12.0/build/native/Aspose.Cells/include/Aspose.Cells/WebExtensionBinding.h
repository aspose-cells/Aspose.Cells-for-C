// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONBINDING_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONBINDING_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace WebExtensions {

using namespace Aspose::Cells;

class WebExtensionBinding_Impl;

/// <summary>
/// Represents a binding relationship between an Office Add-in and the data in the document.
/// </summary>
class WebExtensionBinding {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionBinding_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBinding();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBinding(WebExtensionBinding_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBinding(const WebExtensionBinding& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionBinding();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBinding& operator=(const WebExtensionBinding& src);
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
    /// Gets and sets the binding identifier.
    /// </summary>
    ASPOSE_CELLS_API U16String GetId();
    /// <summary>
    /// Gets and sets the binding identifier.
    /// </summary>
    ASPOSE_CELLS_API void SetId(const U16String& value);
    /// <summary>
    /// Gets and sets the binding identifier.
    /// </summary>
    ASPOSE_CELLS_API void SetId(const char16_t* value);
    /// <summary>
    /// Gets and sets the binding type.
    /// </summary>
    ASPOSE_CELLS_API U16String GetType();
    /// <summary>
    /// Gets and sets the binding type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(const U16String& value);
    /// <summary>
    /// Gets and sets the binding type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(const char16_t* value);
    /// <summary>
    /// Gets and sets the binding key used to map the binding entry in this list with the bound data in the document.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAppref();
    /// <summary>
    /// Gets and sets the binding key used to map the binding entry in this list with the bound data in the document.
    /// </summary>
    ASPOSE_CELLS_API void SetAppref(const U16String& value);
    /// <summary>
    /// Gets and sets the binding key used to map the binding entry in this list with the bound data in the document.
    /// </summary>
    ASPOSE_CELLS_API void SetAppref(const char16_t* value);
    
};

} } }

#endif
