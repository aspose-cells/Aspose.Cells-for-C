// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONBINDINGCOLLECTION_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONBINDINGCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtensionBinding;
} } }

namespace Aspose { namespace Cells { namespace WebExtensions {

class WebExtensionBindingCollection_Impl;

/// <summary>
/// Represents the list of binding relationships between an Office Add-in and the data in the document.
/// </summary>
class WebExtensionBindingCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionBindingCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBindingCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBindingCollection(WebExtensionBindingCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBindingCollection(const WebExtensionBindingCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionBindingCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionBindingCollection& operator=(const WebExtensionBindingCollection& src);
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
    /// Gets web extension binding relationship by the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The  web extension binding relationship </returns>
    ASPOSE_CELLS_API WebExtensionBinding Get(int32_t index);
    /// <summary>
    /// Adds an a binding relationship between an Office Add-in and the data in the document.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
