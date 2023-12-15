// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKUP_CUSTOMXMLPART_H
#define ASPOSE_CELLS_MARKUP_CUSTOMXMLPART_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Markup {

using namespace Aspose::Cells;

class CustomXmlPart_Impl;

/// <summary>
/// Represents a Custom XML Data Storage Part (custom XML data within a package).
/// </summary>
class CustomXmlPart {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomXmlPart_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomXmlPart(CustomXmlPart_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomXmlPart(const CustomXmlPart& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomXmlPart();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomXmlPart& operator=(const CustomXmlPart& src);
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
    /// Gets or sets the XML content of this Custom XML Data Storage Part.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetData();
    /// <summary>
    /// Gets or sets the XML content of this Custom XML Data Storage Part.
    /// </summary>
    ASPOSE_CELLS_API void SetData(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets or sets the XML content of this Custom XML Schema Data Storage Part.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetSchemaData();
    /// <summary>
    /// Gets or sets the XML content of this Custom XML Schema Data Storage Part.
    /// </summary>
    ASPOSE_CELLS_API void SetSchemaData(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets and sets the id of the custom xml part.
    /// </summary>
    ASPOSE_CELLS_API U16String GetID();
    /// <summary>
    /// Gets and sets the id of the custom xml part.
    /// </summary>
    ASPOSE_CELLS_API void SetID(const U16String& value);
    /// <summary>
    /// Gets and sets the id of the custom xml part.
    /// </summary>
    ASPOSE_CELLS_API void SetID(const char16_t* value);
    
};

} } }

#endif
