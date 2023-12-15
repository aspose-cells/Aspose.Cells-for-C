// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_CONTENTTYPEPROPERTY_H
#define ASPOSE_CELLS_PROPERTIES_CONTENTTYPEPROPERTY_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Properties {

using namespace Aspose::Cells;

class ContentTypeProperty_Impl;

/// <summary>
/// Represents identifier information.
/// </summary>
class ContentTypeProperty {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ContentTypeProperty_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ContentTypeProperty(ContentTypeProperty_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ContentTypeProperty(const ContentTypeProperty& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ContentTypeProperty();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ContentTypeProperty& operator=(const ContentTypeProperty& src);
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
    /// Returns or sets the name of the object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Returns or sets the name of the object.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Returns or sets the name of the object.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Returns or sets the value of the content type property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue();
    /// <summary>
    /// Returns or sets the value of the content type property.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const U16String& value);
    /// <summary>
    /// Returns or sets the value of the content type property.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const char16_t* value);
    /// <summary>
    /// Gets and sets the type of the property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetType();
    /// <summary>
    /// Gets and sets the type of the property.
    /// </summary>
    ASPOSE_CELLS_API void SetType(const U16String& value);
    /// <summary>
    /// Gets and sets the type of the property.
    /// </summary>
    ASPOSE_CELLS_API void SetType(const char16_t* value);
    /// <summary>
    /// Indicates whether the value could be empty.
    /// </summary>
    ASPOSE_CELLS_API bool IsNillable();
    /// <summary>
    /// Indicates whether the value could be empty.
    /// </summary>
    ASPOSE_CELLS_API void SetIsNillable(bool value);
    
};

} } }

#endif
