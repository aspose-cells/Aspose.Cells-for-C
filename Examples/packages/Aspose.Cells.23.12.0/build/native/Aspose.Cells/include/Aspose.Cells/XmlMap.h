// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XMLMAP_H
#define ASPOSE_CELLS_XMLMAP_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class XmlDataBinding;
} }

namespace Aspose { namespace Cells {

class XmlMap_Impl;

/// <summary>
/// Represents Xml map information.
/// </summary>
class XmlMap {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XmlMap_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XmlMap(XmlMap_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XmlMap(const XmlMap& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XmlMap();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XmlMap& operator=(const XmlMap& src);
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
    /// Gets root element name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetRootElementName();
    /// <summary>
    /// Gets an <see cref="XmlDataBinding"/> of this map.
    /// </summary>
    ASPOSE_CELLS_API XmlDataBinding GetDataBinding();
    
};

} }

#endif
