// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_TABLESTYLECOLLECTION_H
#define ASPOSE_CELLS_TABLES_TABLESTYLECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/TableStyleType.h"

namespace Aspose { namespace Cells { namespace Tables {
    class TableStyle;
} } }

namespace Aspose { namespace Cells { namespace Tables {

using namespace Aspose::Cells;

class TableStyleCollection_Impl;

/// <summary>
/// Represents all custom table styles.
/// </summary>
class TableStyleCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TableStyleCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TableStyleCollection(TableStyleCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TableStyleCollection(const TableStyleCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TableStyleCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TableStyleCollection& operator=(const TableStyleCollection& src);
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
    /// Gets and sets the default style name of the table.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDefaultTableStyleName();
    /// <summary>
    /// Gets and sets the default style name of the table.
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultTableStyleName(const U16String& value);
    /// <summary>
    /// Gets and sets the default style name of the table.
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultTableStyleName(const char16_t* value);
    /// <summary>
    /// Gets and sets the  default style name of pivot table .
    /// </summary>
    ASPOSE_CELLS_API U16String GetDefaultPivotStyleName();
    /// <summary>
    /// Gets and sets the  default style name of pivot table .
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultPivotStyleName(const U16String& value);
    /// <summary>
    /// Gets and sets the  default style name of pivot table .
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultPivotStyleName(const char16_t* value);
    /// <summary>
    /// Adds a custom table style.
    /// </summary>
    /// <param name="name">The table style name.</param>
    /// <returns>The index of the table style.</returns>
    ASPOSE_CELLS_API int32_t AddTableStyle(const U16String& name);
    /// <summary>
    /// Adds a custom table style.
    /// </summary>
    /// <param name="name">The table style name.</param>
    /// <returns>The index of the table style.</returns>
    ASPOSE_CELLS_API int32_t AddTableStyle(const char16_t* name);
    /// <summary>
    /// Adds a custom pivot table style.
    /// </summary>
    /// <param name="name">The pivot table style name.</param>
    /// <returns>The index of the pivot table style.</returns>
    ASPOSE_CELLS_API int32_t AddPivotTableStyle(const U16String& name);
    /// <summary>
    /// Adds a custom pivot table style.
    /// </summary>
    /// <param name="name">The pivot table style name.</param>
    /// <returns>The index of the pivot table style.</returns>
    ASPOSE_CELLS_API int32_t AddPivotTableStyle(const char16_t* name);
    /// <summary>
    /// Gets the table style by the index.
    /// </summary>
    /// <param name="index">The position of the table style in the list.</param>
    /// <returns>The table style object.</returns>
    ASPOSE_CELLS_API TableStyle Get(int32_t index);
    /// <summary>
    /// Gets the table style by the name.
    /// </summary>
    /// <param name="name">The table style name.</param>
    /// <returns>The table style object.</returns>
    ASPOSE_CELLS_API TableStyle Get(const U16String& name);
    /// <summary>
    /// Gets the table style by the name.
    /// </summary>
    /// <param name="name">The table style name.</param>
    /// <returns>The table style object.</returns>
    ASPOSE_CELLS_API TableStyle Get(const char16_t* name);
    /// <summary>
    /// Gets the builtin table style
    /// </summary>
    /// <param name="type">The builtin table style type.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API TableStyle GetBuiltinTableStyle(TableStyleType type);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
