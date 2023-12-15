// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKUP_SMARTTAGCOLLECTION_H
#define ASPOSE_CELLS_MARKUP_SMARTTAGCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Markup {
    class SmartTag;
} } }

namespace Aspose { namespace Cells { namespace Markup {

using namespace Aspose::Cells;

class SmartTagCollection_Impl;

/// <summary>
/// Represents all smart tags in the cell.
/// </summary>
class SmartTagCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SmartTagCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SmartTagCollection(SmartTagCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartTagCollection(const SmartTagCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SmartTagCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SmartTagCollection& operator=(const SmartTagCollection& src);
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
    /// Gets the row of the cell smart tags.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets the column of the cell smart tags.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Gets a <see cref="SmartTag"/> object at the specific index
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>returns a <see cref="SmartTag"/> object. </returns>
    ASPOSE_CELLS_API SmartTag Get(int32_t index);
    /// <summary>
    /// Adds a smart tag.
    /// </summary>
    /// <param name="uri">Specifies the namespace URI of the smart tag</param>
    /// <param name="name">Specifies the name of the smart tag. </param>
    /// <returns>The index of smart tag in the list.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& uri, const U16String& name);
    /// <summary>
    /// Adds a smart tag.
    /// </summary>
    /// <param name="uri">Specifies the namespace URI of the smart tag</param>
    /// <param name="name">Specifies the name of the smart tag. </param>
    /// <returns>The index of smart tag in the list.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* uri, const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
