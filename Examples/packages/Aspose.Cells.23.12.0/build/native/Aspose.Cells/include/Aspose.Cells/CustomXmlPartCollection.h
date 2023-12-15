// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKUP_CUSTOMXMLPARTCOLLECTION_H
#define ASPOSE_CELLS_MARKUP_CUSTOMXMLPARTCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Markup {
    class CustomXmlPart;
} } }

namespace Aspose { namespace Cells { namespace Markup {

using namespace Aspose::Cells;

class CustomXmlPartCollection_Impl;

/// <summary>
/// Represents a Custom XML Data Storage Part (custom XML data within a package).
/// </summary>
class CustomXmlPartCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomXmlPartCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomXmlPartCollection(CustomXmlPartCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomXmlPartCollection(const CustomXmlPartCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomXmlPartCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomXmlPartCollection& operator=(const CustomXmlPartCollection& src);
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
    /// Adds an item to the collection.
    /// </summary>
    /// <param name="data">The XML content of this Custom XML Data Storage Part. </param>
    /// <param name="shemaData">The set of XML schemas that are associated with this custom XML part. </param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const Vector<uint8_t>& data, const Vector<uint8_t>& shemaData);
    /// <summary>
    /// Gets an item at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API CustomXmlPart Get(int32_t index);
    /// <summary>
    /// Gets an item by id.
    /// </summary>
    /// <param name="id">Contains the GUID for the custom XML part.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API CustomXmlPart SelectByID(const U16String& id);
    /// <summary>
    /// Gets an item by id.
    /// </summary>
    /// <param name="id">Contains the GUID for the custom XML part.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API CustomXmlPart SelectByID(const char16_t* id);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
