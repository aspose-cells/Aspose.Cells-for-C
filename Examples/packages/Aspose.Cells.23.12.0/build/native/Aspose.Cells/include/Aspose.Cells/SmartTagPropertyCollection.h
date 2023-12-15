// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKUP_SMARTTAGPROPERTYCOLLECTION_H
#define ASPOSE_CELLS_MARKUP_SMARTTAGPROPERTYCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Markup {
    class SmartTagProperty;
} } }

namespace Aspose { namespace Cells { namespace Markup {

using namespace Aspose::Cells;

class SmartTagPropertyCollection_Impl;

/// <summary>
/// Represents all properties of cell smart tag.
/// </summary>
class SmartTagPropertyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SmartTagPropertyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartTagPropertyCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SmartTagPropertyCollection(SmartTagPropertyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartTagPropertyCollection(const SmartTagPropertyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SmartTagPropertyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SmartTagPropertyCollection& operator=(const SmartTagPropertyCollection& src);
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
    /// Gets a <see cref="SmartTagProperty"/> object.
    /// </summary>
    /// <param name="index">The index</param>
    /// <returns>Returns a <see cref="SmartTagProperty"/> object.</returns>
    ASPOSE_CELLS_API SmartTagProperty Get(int32_t index);
    /// <summary>
    /// Gets a <see cref="SmartTagProperty"/> object by the name of the property.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <returns>Returns a <see cref="SmartTagProperty"/> object.</returns>
    ASPOSE_CELLS_API SmartTagProperty Get(const U16String& name);
    /// <summary>
    /// Gets a <see cref="SmartTagProperty"/> object by the name of the property.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <returns>Returns a <see cref="SmartTagProperty"/> object.</returns>
    ASPOSE_CELLS_API SmartTagProperty Get(const char16_t* name);
    /// <summary>
    /// Adds a property of cell's smart tag.
    /// </summary>
    /// <param name="name">The name of the property</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>return <see cref="SmartTagProperty"/></returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& name, const U16String& value);
    /// <summary>
    /// Adds a property of cell's smart tag.
    /// </summary>
    /// <param name="name">The name of the property</param>
    /// <param name="value">The value of the property.</param>
    /// <returns>return <see cref="SmartTagProperty"/></returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name, const char16_t* value);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
