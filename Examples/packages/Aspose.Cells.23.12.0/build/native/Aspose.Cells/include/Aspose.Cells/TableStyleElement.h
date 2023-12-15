// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_TABLESTYLEELEMENT_H
#define ASPOSE_CELLS_TABLES_TABLESTYLEELEMENT_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/TableStyleElementType.h"

namespace Aspose { namespace Cells {
    class Style;
} }

namespace Aspose { namespace Cells { namespace Tables {

using namespace Aspose::Cells;

class TableStyleElement_Impl;

/// <summary>
/// Represents the element of the table style.
/// </summary>
class TableStyleElement {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TableStyleElement_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TableStyleElement(TableStyleElement_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TableStyleElement(const TableStyleElement& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TableStyleElement();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TableStyleElement& operator=(const TableStyleElement& src);
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
    /// Number of rows or columns in a single band of striping.
    /// Applies only when type is firstRowStripe, secondRowStripe, firstColumnStripe, or secondColumnStripe.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSize();
    /// <summary>
    /// Number of rows or columns in a single band of striping.
    /// Applies only when type is firstRowStripe, secondRowStripe, firstColumnStripe, or secondColumnStripe.
    /// </summary>
    ASPOSE_CELLS_API void SetSize(int32_t value);
    /// <summary>
    /// Gets the element type.
    /// </summary>
    ASPOSE_CELLS_API TableStyleElementType GetType();
    /// <summary>
    /// Gets the element style.
    /// </summary>
    /// <returns>Returns the <see cref="Style"/> object.</returns>
    ASPOSE_CELLS_API Style GetElementStyle();
    /// <summary>
    /// Sets the element style.
    /// </summary>
    /// <param name="style">The element style.</param>
    ASPOSE_CELLS_API void SetElementStyle(const Style& style);
    
};

} } }

#endif
