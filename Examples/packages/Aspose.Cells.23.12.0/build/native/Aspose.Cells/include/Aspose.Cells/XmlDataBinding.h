// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XMLDATABINDING_H
#define ASPOSE_CELLS_XMLDATABINDING_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class XmlDataBinding_Impl;

/// <summary>
/// Represents Xml Data Binding information.
/// </summary>
class XmlDataBinding {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XmlDataBinding_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XmlDataBinding(XmlDataBinding_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XmlDataBinding(const XmlDataBinding& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XmlDataBinding();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XmlDataBinding& operator=(const XmlDataBinding& src);
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
    /// Gets source url of this data binding.
    /// </summary>
    ASPOSE_CELLS_API U16String GetUrl();
    
};

} }

#endif
