// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONREFERENCE_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONREFERENCE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/WebExtensionStoreType.h"

namespace Aspose { namespace Cells { namespace WebExtensions {

using namespace Aspose::Cells;

class WebExtensionReference_Impl;

/// <summary>
/// Represents identify the provider location and version of the extension.
/// </summary>
class WebExtensionReference {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionReference_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReference(WebExtensionReference_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReference(const WebExtensionReference& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionReference();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionReference& operator=(const WebExtensionReference& src);
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
    /// Gets and sets the identifier associated with the Office Add-in within a catalog provider.
    /// The identifier MUST be unique within a catalog provider.
    /// </summary>
    ASPOSE_CELLS_API U16String GetId();
    /// <summary>
    /// Gets and sets the identifier associated with the Office Add-in within a catalog provider.
    /// The identifier MUST be unique within a catalog provider.
    /// </summary>
    ASPOSE_CELLS_API void SetId(const U16String& value);
    /// <summary>
    /// Gets and sets the identifier associated with the Office Add-in within a catalog provider.
    /// The identifier MUST be unique within a catalog provider.
    /// </summary>
    ASPOSE_CELLS_API void SetId(const char16_t* value);
    /// <summary>
    /// Gets and sets the version.
    /// </summary>
    ASPOSE_CELLS_API U16String GetVersion();
    /// <summary>
    /// Gets and sets the version.
    /// </summary>
    ASPOSE_CELLS_API void SetVersion(const U16String& value);
    /// <summary>
    /// Gets and sets the version.
    /// </summary>
    ASPOSE_CELLS_API void SetVersion(const char16_t* value);
    /// <summary>
    /// Gets and sets the instance of the marketplace where the Office Add-in is stored. .
    /// </summary>
    ASPOSE_CELLS_API U16String GetStoreName();
    /// <summary>
    /// Gets and sets the instance of the marketplace where the Office Add-in is stored. .
    /// </summary>
    ASPOSE_CELLS_API void SetStoreName(const U16String& value);
    /// <summary>
    /// Gets and sets the instance of the marketplace where the Office Add-in is stored. .
    /// </summary>
    ASPOSE_CELLS_API void SetStoreName(const char16_t* value);
    /// <summary>
    /// Gets and sets the type of marketplace that the store attribute identifies.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionStoreType GetStoreType();
    /// <summary>
    /// Gets and sets the type of marketplace that the store attribute identifies.
    /// </summary>
    ASPOSE_CELLS_API void SetStoreType(WebExtensionStoreType value);
    
};

} } }

#endif
