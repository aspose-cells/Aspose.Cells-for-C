// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_CUSTOMDOCUMENTPROPERTYCOLLECTION_H
#define ASPOSE_CELLS_PROPERTIES_CUSTOMDOCUMENTPROPERTYCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/DocumentPropertyCollection.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"

namespace Aspose { namespace Cells { namespace Properties {
    class DocumentProperty;
} } }

namespace Aspose { namespace Cells { namespace Properties {

using namespace Aspose::Cells;

class CustomDocumentPropertyCollection_Impl;

/// <summary>
/// A collection of custom document properties.
/// </summary>
/// <remarks>
/// <p>Each <see cref="DocumentProperty"/> object represents a custom property of a container document.</p>
/// </remarks>
class CustomDocumentPropertyCollection : public DocumentPropertyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomDocumentPropertyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomDocumentPropertyCollection(CustomDocumentPropertyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomDocumentPropertyCollection(const CustomDocumentPropertyCollection& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API CustomDocumentPropertyCollection(const DocumentPropertyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomDocumentPropertyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomDocumentPropertyCollection& operator=(const CustomDocumentPropertyCollection& src);
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
    /// <overloads>Creates a new custom document property.</overloads>
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.String</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const U16String& name, const U16String& value);
    /// <overloads>Creates a new custom document property.</overloads>
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.String</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const char16_t* name, const char16_t* value);
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.Number</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const U16String& name, int32_t value);
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.Number</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const char16_t* name, int32_t value);
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.DateTime</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const U16String& name, const Date& value);
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.DateTime</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const char16_t* name, const Date& value);
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.Boolean</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const U16String& name, bool value);
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.Boolean</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const char16_t* name, bool value);
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.Float</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const U16String& name, double value);
    /// <summary>
    /// Creates a new custom document property of the <b>PropertyType.Float</b> data type.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty Add(const char16_t* name, double value);
    /// <summary>
    /// Creates a new custom document property which links to content.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="source">The source of the property</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty AddLinkToContent(const U16String& name, const U16String& source);
    /// <summary>
    /// Creates a new custom document property which links to content.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="source">The source of the property</param>
    /// <returns>The newly created property object.</returns>
    ASPOSE_CELLS_API DocumentProperty AddLinkToContent(const char16_t* name, const char16_t* source);
    /// <summary>
    /// Update custom document property value which links to content.
    /// </summary>
    ASPOSE_CELLS_API void UpdateLinkedPropertyValue();
    /// <summary>
    /// Update custom document property value to linked range.
    /// </summary>
    ASPOSE_CELLS_API void UpdateLinkedRange();
    
};

} } }

#endif
