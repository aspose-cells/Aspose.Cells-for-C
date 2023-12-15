// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKUP_SMARTTAGPROPERTY_H
#define ASPOSE_CELLS_MARKUP_SMARTTAGPROPERTY_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Markup {

using namespace Aspose::Cells;

class SmartTagProperty_Impl;

/// <summary>
/// Represents the property of the cell smart tag.
/// </summary>
class SmartTagProperty {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SmartTagProperty_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SmartTagProperty(SmartTagProperty_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartTagProperty(const SmartTagProperty& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SmartTagProperty();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SmartTagProperty& operator=(const SmartTagProperty& src);
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
    /// Gets and sets the name of the property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of the property.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the property.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets and sets the value of the property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue();
    /// <summary>
    /// Gets and sets the value of the property.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const U16String& value);
    /// <summary>
    /// Gets and sets the value of the property.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const char16_t* value);
    
};

} } }

#endif
