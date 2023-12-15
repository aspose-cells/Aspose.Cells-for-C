// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_LISTCOLUMNCOLLECTION_H
#define ASPOSE_CELLS_TABLES_LISTCOLUMNCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Tables {
    class ListColumn;
} } }

namespace Aspose { namespace Cells { namespace Tables {

using namespace Aspose::Cells;

class ListColumnCollection_Impl;

/// <summary>
/// Represents A collection of all the <see cref="ListColumn"/> objects in the specified ListObject object.
/// </summary>
class ListColumnCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ListColumnCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ListColumnCollection(ListColumnCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ListColumnCollection(const ListColumnCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ListColumnCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ListColumnCollection& operator=(const ListColumnCollection& src);
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
    /// Gets the ListColumn by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>the ListColumn object.</returns>
    ASPOSE_CELLS_API ListColumn Get(int32_t index);
    /// <summary>
    /// Gets the ListColumn by the name.
    /// </summary>
    /// <param name="name">The name of the ListColumn</param>
    /// <returns>The ListColumn object.</returns>
    ASPOSE_CELLS_API ListColumn Get(const U16String& name);
    /// <summary>
    /// Gets the ListColumn by the name.
    /// </summary>
    /// <param name="name">The name of the ListColumn</param>
    /// <returns>The ListColumn object.</returns>
    ASPOSE_CELLS_API ListColumn Get(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
