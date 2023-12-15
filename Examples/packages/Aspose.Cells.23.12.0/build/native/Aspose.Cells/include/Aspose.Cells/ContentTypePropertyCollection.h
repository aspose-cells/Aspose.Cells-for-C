// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_CONTENTTYPEPROPERTYCOLLECTION_H
#define ASPOSE_CELLS_PROPERTIES_CONTENTTYPEPROPERTYCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Properties {
    class ContentTypeProperty;
} } }

namespace Aspose { namespace Cells { namespace Properties {

using namespace Aspose::Cells;

class ContentTypePropertyCollection_Impl;

/// <summary>
/// A collection of <see cref="ContentTypeProperty"/> objects that represent additional information.
/// </summary>
class ContentTypePropertyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ContentTypePropertyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ContentTypePropertyCollection(ContentTypePropertyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ContentTypePropertyCollection(const ContentTypePropertyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ContentTypePropertyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ContentTypePropertyCollection& operator=(const ContentTypePropertyCollection& src);
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
    /// Adds content type property information.
    /// </summary>
    /// <param name="name">The name of the content type property.</param>
    /// <param name="value">The value of the content type property.</param>
    ASPOSE_CELLS_API int32_t Add(const U16String& name, const U16String& value);
    /// <summary>
    /// Adds content type property information.
    /// </summary>
    /// <param name="name">The name of the content type property.</param>
    /// <param name="value">The value of the content type property.</param>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name, const char16_t* value);
    /// <summary>
    /// Adds content type property information.
    /// </summary>
    /// <param name="name">The name of the content type property.</param>
    /// <param name="value">The value of the content type property.</param>
    /// <param name="type">The type of the content type property.</param>
    ASPOSE_CELLS_API int32_t Add(const U16String& name, const U16String& value, const U16String& type);
    /// <summary>
    /// Adds content type property information.
    /// </summary>
    /// <param name="name">The name of the content type property.</param>
    /// <param name="value">The value of the content type property.</param>
    /// <param name="type">The type of the content type property.</param>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name, const char16_t* value, const char16_t* type);
    /// <summary>
    /// Gets the content type property by the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The content type property</returns>
    ASPOSE_CELLS_API ContentTypeProperty Get(int32_t index);
    /// <summary>
    /// Gets the content type property by the property name.
    /// </summary>
    /// <param name="name">The property name.</param>
    /// <returns>The content type property</returns>
    ASPOSE_CELLS_API ContentTypeProperty Get(const U16String& name);
    /// <summary>
    /// Gets the content type property by the property name.
    /// </summary>
    /// <param name="name">The property name.</param>
    /// <returns>The content type property</returns>
    ASPOSE_CELLS_API ContentTypeProperty Get(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
