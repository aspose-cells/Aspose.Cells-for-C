// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_TABLESTYLE_H
#define ASPOSE_CELLS_TABLES_TABLESTYLE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Tables {
    class TableStyleElementCollection;
} } }

namespace Aspose { namespace Cells { namespace Tables {

using namespace Aspose::Cells;

class TableStyle_Impl;

/// <summary>
/// Represents the table style.
/// </summary>
class TableStyle {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TableStyle_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TableStyle(TableStyle_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TableStyle(const TableStyle& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TableStyle();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TableStyle& operator=(const TableStyle& src);
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
    /// Gets the name of table style.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets all elements of the table style.
    /// </summary>
    ASPOSE_CELLS_API TableStyleElementCollection GetTableStyleElements();
    
};

} } }

#endif
