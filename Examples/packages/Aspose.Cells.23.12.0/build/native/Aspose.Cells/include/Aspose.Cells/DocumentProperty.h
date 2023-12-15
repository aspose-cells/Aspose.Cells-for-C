// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_DOCUMENTPROPERTY_H
#define ASPOSE_CELLS_PROPERTIES_DOCUMENTPROPERTY_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"

#include "Aspose.Cells/PropertyType.h"

namespace Aspose { namespace Cells { namespace Properties {

using namespace Aspose::Cells;

class DocumentProperty_Impl;

/// <summary>
/// Represents a custom or built-in document property.
/// </summary>
class DocumentProperty {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DocumentProperty_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DocumentProperty(DocumentProperty_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DocumentProperty(const DocumentProperty& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DocumentProperty();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DocumentProperty& operator=(const DocumentProperty& src);
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
    /// Returns the name of the property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Indicates whether this property is linked to content
    /// </summary>
    ASPOSE_CELLS_API bool IsLinkedToContent();
    /// <summary>
    /// The linked content source.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSource();
    /// <summary>
    /// Gets the data type of the property.
    /// </summary>
    ASPOSE_CELLS_API PropertyType GetType();
    /// <summary>
    /// Returns true if this property does not have a name in the OLE2 storage
    /// and a unique name was generated only for the public API.
    /// </summary>
    ASPOSE_CELLS_API bool IsGeneratedName();
    /// <summary>
    /// Returns the property value as a string.
    /// </summary>
    /// <remarks>
    /// <p>Converts a number property using Object.ToString(). Converts a boolean property
    /// into "Y" or "N". Converts a date property into a short date string.</p>
    /// </remarks>
    ASPOSE_CELLS_API U16String ToString();
    /// <summary>
    /// Returns the property value as integer.
    /// </summary>
    /// <remarks>
    /// Throws an exception if the property type is not PropertyType.Number.
    /// </remarks>
    ASPOSE_CELLS_API int32_t ToInt();
    /// <summary>
    /// Returns the property value as double.
    /// </summary>
    /// <remarks>
    /// Throws an exception if the property type is not PropertyType.Float.
    /// </remarks>
    ASPOSE_CELLS_API double ToDouble();
    /// <summary>
    /// Returns the property value as DateTime in local timezone.
    /// </summary>
    /// <remarks>
    /// <p>Throws an exception if the property type is not PropertyType.Date.</p>
    /// </remarks>
    ASPOSE_CELLS_API Date ToDateTime();
    /// <summary>
    /// Returns the property value as bool.
    /// </summary>
    /// <remarks>
    /// <p>Throws an exception if the property type is not PropertyType.Boolean.</p>
    /// </remarks>
    ASPOSE_CELLS_API bool ToBool();
    
};

} } }

#endif
