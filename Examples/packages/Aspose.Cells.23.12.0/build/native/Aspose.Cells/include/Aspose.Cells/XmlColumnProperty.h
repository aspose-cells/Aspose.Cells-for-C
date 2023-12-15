// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XMLCOLUMNPROPERTY_H
#define ASPOSE_CELLS_XMLCOLUMNPROPERTY_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class XmlColumnProperty_Impl;

/// <summary>
/// Represents Xml Data Binding information.
/// </summary>
class XmlColumnProperty {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XmlColumnProperty_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API XmlColumnProperty();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XmlColumnProperty(XmlColumnProperty_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XmlColumnProperty(const XmlColumnProperty& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XmlColumnProperty();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XmlColumnProperty& operator=(const XmlColumnProperty& src);
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
    
};

} }

#endif
