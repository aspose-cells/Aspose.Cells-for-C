// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_TABLESTYLEELEMENTCOLLECTION_H
#define ASPOSE_CELLS_TABLES_TABLESTYLEELEMENTCOLLECTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/TableStyleElementType.h"

namespace Aspose { namespace Cells { namespace Tables {
    class TableStyleElement;
} } }

namespace Aspose { namespace Cells { namespace Tables {

class TableStyleElementCollection_Impl;

/// <summary>
/// Represents all elements of the table style.
/// </summary>
class TableStyleElementCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TableStyleElementCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TableStyleElementCollection(TableStyleElementCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TableStyleElementCollection(const TableStyleElementCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TableStyleElementCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TableStyleElementCollection& operator=(const TableStyleElementCollection& src);
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
    /// Gets an element of the table style by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>Returns <see cref="TableStyleElement"/> object</returns>
    ASPOSE_CELLS_API TableStyleElement Get(int32_t index);
    /// <summary>
    /// Gets the element of the table style by the element type.
    /// </summary>
    /// <param name="type">The element type.</param>
    /// <returns>Returns <see cref="TableStyleElement"/> object</returns>
    ASPOSE_CELLS_API TableStyleElement Get(TableStyleElementType type);
    /// <summary>
    /// Adds an element.
    /// </summary>
    /// <param name="type">The type of the element</param>
    /// <returns>Returns the index of the element in the list.</returns>
    ASPOSE_CELLS_API int32_t Add(TableStyleElementType type);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
