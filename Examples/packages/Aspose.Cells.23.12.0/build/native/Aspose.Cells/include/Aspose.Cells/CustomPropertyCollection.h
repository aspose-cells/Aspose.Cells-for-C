// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_CUSTOMPROPERTYCOLLECTION_H
#define ASPOSE_CELLS_PROPERTIES_CUSTOMPROPERTYCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Properties {
    class CustomProperty;
} } }

namespace Aspose { namespace Cells { namespace Properties {

using namespace Aspose::Cells;

class CustomPropertyCollection_Impl;

/// <summary>
/// A collection of <see cref="CustomProperty"/> objects that represent additional information.
/// </summary>
class CustomPropertyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomPropertyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomPropertyCollection(CustomPropertyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomPropertyCollection(const CustomPropertyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomPropertyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomPropertyCollection& operator=(const CustomPropertyCollection& src);
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
    /// Adds custom property information.
    /// </summary>
    /// <param name="name">The name of the custom property.</param>
    /// <param name="value">The value of the custom property.</param>
    ASPOSE_CELLS_API int32_t Add(const U16String& name, const U16String& value);
    /// <summary>
    /// Adds custom property information.
    /// </summary>
    /// <param name="name">The name of the custom property.</param>
    /// <param name="value">The value of the custom property.</param>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name, const char16_t* value);
    /// <summary>
    /// Gets the custom property by the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The custom property</returns>
    ASPOSE_CELLS_API CustomProperty Get(int32_t index);
    /// <summary>
    /// Gets the custom property by the property name.
    /// </summary>
    /// <param name="name">The property name.</param>
    /// <returns>The custom property</returns>
    ASPOSE_CELLS_API CustomProperty Get(const U16String& name);
    /// <summary>
    /// Gets the custom property by the property name.
    /// </summary>
    /// <param name="name">The property name.</param>
    /// <returns>The custom property</returns>
    ASPOSE_CELLS_API CustomProperty Get(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
