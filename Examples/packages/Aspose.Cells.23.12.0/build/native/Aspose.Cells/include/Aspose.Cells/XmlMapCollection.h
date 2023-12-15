// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XMLMAPCOLLECTION_H
#define ASPOSE_CELLS_XMLMAPCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class XmlMap;
} }

namespace Aspose { namespace Cells {

class XmlMapCollection_Impl;

/// <summary>
/// A collection of <see cref="XmlMap"/> objects that represent XmlMap information.
/// </summary>
class XmlMapCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XmlMapCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XmlMapCollection(XmlMapCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XmlMapCollection(const XmlMapCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XmlMapCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XmlMapCollection& operator=(const XmlMapCollection& src);
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
    /// Gets the xml map by the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The xml map</returns>
    ASPOSE_CELLS_API XmlMap Get(int32_t index);
    /// <summary>
    /// Add a <see cref="XmlMap"/> by the url/path of a xml/xsd file.
    /// </summary>
    /// <param name="url">url/path of a xml/xsd file.</param>
    /// <returns><see cref="XmlMap"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& url);
    /// <summary>
    /// Add a <see cref="XmlMap"/> by the url/path of a xml/xsd file.
    /// </summary>
    /// <param name="url">url/path of a xml/xsd file.</param>
    /// <returns><see cref="XmlMap"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* url);
    /// <summary>
    /// Removes all XmlMaps.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
