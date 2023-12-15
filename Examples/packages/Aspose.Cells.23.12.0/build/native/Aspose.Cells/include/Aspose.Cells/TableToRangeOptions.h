// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_TABLETORANGEOPTIONS_H
#define ASPOSE_CELLS_TABLES_TABLETORANGEOPTIONS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Tables {

class TableToRangeOptions_Impl;

/// <summary>
/// Represents the options when converting table to range.
/// </summary>
class TableToRangeOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TableToRangeOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API TableToRangeOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TableToRangeOptions(TableToRangeOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TableToRangeOptions(const TableToRangeOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TableToRangeOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TableToRangeOptions& operator=(const TableToRangeOptions& src);
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
    /// Gets and sets the last row index of the table.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLastRow();
    /// <summary>
    /// Gets and sets the last row index of the table.
    /// </summary>
    ASPOSE_CELLS_API void SetLastRow(int32_t value);
    
};

} } }

#endif
