// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_CUSTOMPROPERTY_H
#define ASPOSE_CELLS_PROPERTIES_CUSTOMPROPERTY_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Properties {

using namespace Aspose::Cells;

class CustomProperty_Impl;

/// <summary>
/// Represents identifier information.
/// </summary>
class CustomProperty {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomProperty_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomProperty();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomProperty(CustomProperty_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomProperty(const CustomProperty& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomProperty();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomProperty& operator=(const CustomProperty& src);
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
    /// Returns or sets the value of the custom property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue();
    /// <summary>
    /// Returns or sets the value of the custom property.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const U16String& value);
    /// <summary>
    /// Returns or sets the value of the custom property.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const char16_t* value);
    
};

} } }

#endif
