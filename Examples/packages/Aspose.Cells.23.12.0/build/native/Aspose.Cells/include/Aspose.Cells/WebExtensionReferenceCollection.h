// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONREFERENCECOLLECTION_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONREFERENCECOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtensionReference;
} } }

namespace Aspose { namespace Cells { namespace WebExtensions {

class WebExtensionReferenceCollection_Impl;

/// <summary>
/// Represents the list of web extension reference.
/// </summary>
class WebExtensionReferenceCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionReferenceCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReferenceCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReferenceCollection(WebExtensionReferenceCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReferenceCollection(const WebExtensionReferenceCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionReferenceCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReferenceCollection& operator=(const WebExtensionReferenceCollection& src);
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
    /// Gets web extension by the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The web extension</returns>
    ASPOSE_CELLS_API WebExtensionReference Get(int32_t index);
    /// <summary>
    /// Adds an empty reference of web extension.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
