// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONPROPERTYCOLLECTION_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONPROPERTYCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtensionProperty;
} } }

namespace Aspose { namespace Cells { namespace WebExtensions {

using namespace Aspose::Cells;

class WebExtensionPropertyCollection_Impl;

/// <summary>
/// Represents the list of web extension properties.
/// </summary>
class WebExtensionPropertyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionPropertyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionPropertyCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionPropertyCollection(WebExtensionPropertyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionPropertyCollection(const WebExtensionPropertyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionPropertyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionPropertyCollection& operator=(const WebExtensionPropertyCollection& src);
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
    /// Gets the property of web extension by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The property of web extension. </returns>
    ASPOSE_CELLS_API WebExtensionProperty Get(int32_t index);
    /// <summary>
    /// Gets the property of web extension.
    /// </summary>
    /// <param name="name">The name of property.</param>
    /// <returns>The property of web extension. </returns>
    ASPOSE_CELLS_API WebExtensionProperty Get(const U16String& name);
    /// <summary>
    /// Gets the property of web extension.
    /// </summary>
    /// <param name="name">The name of property.</param>
    /// <returns>The property of web extension. </returns>
    ASPOSE_CELLS_API WebExtensionProperty Get(const char16_t* name);
    /// <summary>
    /// Adds web extension property.
    /// </summary>
    /// <param name="name">The name of property.</param>
    /// <param name="value">The value of property.</param>
    /// <returns>The index of added property.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& name, const U16String& value);
    /// <summary>
    /// Adds web extension property.
    /// </summary>
    /// <param name="name">The name of property.</param>
    /// <param name="value">The value of property.</param>
    /// <returns>The index of added property.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name, const char16_t* value);
    /// <summary>
    /// Remove the property by the name.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    ASPOSE_CELLS_API void RemoveAt(const U16String& name);
    /// <summary>
    /// Remove the property by the name.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    ASPOSE_CELLS_API void RemoveAt(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
