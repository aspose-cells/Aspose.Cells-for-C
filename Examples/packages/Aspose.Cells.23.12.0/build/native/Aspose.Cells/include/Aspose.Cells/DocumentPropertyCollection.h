// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_DOCUMENTPROPERTYCOLLECTION_H
#define ASPOSE_CELLS_PROPERTIES_DOCUMENTPROPERTYCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Properties {
    class DocumentProperty;
} } }

namespace Aspose { namespace Cells { namespace Properties {

using namespace Aspose::Cells;

class DocumentPropertyCollection_Impl;

/// <summary>
/// Base class for <see cref="BuiltInDocumentPropertyCollection"/> and <see cref="CustomDocumentPropertyCollection"/> collections.
/// </summary>
class DocumentPropertyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DocumentPropertyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DocumentPropertyCollection(DocumentPropertyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DocumentPropertyCollection(const DocumentPropertyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DocumentPropertyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DocumentPropertyCollection& operator=(const DocumentPropertyCollection& src);
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
    /// Returns a <see cref="DocumentProperty"/> object by index.
    /// </summary>
    /// <param name="index">Zero-based index of the <see cref="DocumentProperty"/> to retrieve.</param>
    ASPOSE_CELLS_API DocumentProperty Get(int32_t index);
    /// <summary>
    /// Returns true if a property with the specified name exists in the collection.
    /// </summary>
    /// <param name="name">The case-insensitive name of the property.</param>
    /// <returns>True if the property exists in the collection; false otherwise.</returns>
    ASPOSE_CELLS_API bool Contains(const U16String& name);
    /// <summary>
    /// Returns true if a property with the specified name exists in the collection.
    /// </summary>
    /// <param name="name">The case-insensitive name of the property.</param>
    /// <returns>True if the property exists in the collection; false otherwise.</returns>
    ASPOSE_CELLS_API bool Contains(const char16_t* name);
    /// <summary>
    /// Gets the index of a property by name.
    /// </summary>
    /// <param name="name">The case-insensitive name of the property.</param>
    /// <returns>The zero based index. Negative value if not found.</returns>
    ASPOSE_CELLS_API int32_t IndexOf(const U16String& name);
    /// <summary>
    /// Gets the index of a property by name.
    /// </summary>
    /// <param name="name">The case-insensitive name of the property.</param>
    /// <returns>The zero based index. Negative value if not found.</returns>
    ASPOSE_CELLS_API int32_t IndexOf(const char16_t* name);
    /// <summary>
    /// Removes a property with the specified name from the collection.
    /// </summary>
    /// <param name="name">The case-insensitive name of the property.</param>
    ASPOSE_CELLS_API void Remove(const U16String& name);
    /// <summary>
    /// Removes a property with the specified name from the collection.
    /// </summary>
    /// <param name="name">The case-insensitive name of the property.</param>
    ASPOSE_CELLS_API void Remove(const char16_t* name);
    /// <summary>
    /// Removes a property at the specified index.
    /// </summary>
    /// <param name="index">The zero based index.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <overloads>Returns a <see cref="DocumentProperty"/> object.</overloads>
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> object by the name of the property.
    /// </summary>
    /// <remarks>
    /// <p>Returns null if a property with the specified name is not found.</p>
    /// </remarks>
    /// <param name="name">The case-insensitive name of the property to retrieve.</param>
    ASPOSE_CELLS_API DocumentProperty Get(const U16String& name);
    /// <overloads>Returns a <see cref="DocumentProperty"/> object.</overloads>
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> object by the name of the property.
    /// </summary>
    /// <remarks>
    /// <p>Returns null if a property with the specified name is not found.</p>
    /// </remarks>
    /// <param name="name">The case-insensitive name of the property to retrieve.</param>
    ASPOSE_CELLS_API DocumentProperty Get(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
