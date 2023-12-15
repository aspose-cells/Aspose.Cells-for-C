// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSION_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtensionReference;
    class WebExtensionReferenceCollection;
    class WebExtensionPropertyCollection;
    class WebExtensionBindingCollection;
} } }

namespace Aspose { namespace Cells { namespace WebExtensions {

using namespace Aspose::Cells;

class WebExtension_Impl;

/// <summary>
/// Represents an Office Add-in instance.
/// </summary>
class WebExtension {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtension_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtension(WebExtension_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtension(const WebExtension& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtension();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtension& operator=(const WebExtension& src);
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
    /// Gets and sets the uniquely identifies the Office Add-in instance in the current document.
    /// </summary>
    ASPOSE_CELLS_API U16String GetId();
    /// <summary>
    /// Gets and sets the uniquely identifies the Office Add-in instance in the current document.
    /// </summary>
    ASPOSE_CELLS_API void SetId(const U16String& value);
    /// <summary>
    /// Gets and sets the uniquely identifies the Office Add-in instance in the current document.
    /// </summary>
    ASPOSE_CELLS_API void SetId(const char16_t* value);
    /// <summary>
    /// Indicates whether the user can interact with the Office Add-in or not.
    /// </summary>
    ASPOSE_CELLS_API bool IsFrozen();
    /// <summary>
    /// Indicates whether the user can interact with the Office Add-in or not.
    /// </summary>
    ASPOSE_CELLS_API void SetIsFrozen(bool value);
    /// <summary>
    /// Get the primary reference to an Office Add-in.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReference GetReference();
    /// <summary>
    /// Gets a list of alter references.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReferenceCollection GetAlterReferences();
    /// <summary>
    /// Gets all properties of web extension.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionPropertyCollection GetProperties();
    /// <summary>
    /// Gets all bindings relationship between an Office Add-in and the data in the document.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBindingCollection GetBindings();
    
};

} } }

#endif
