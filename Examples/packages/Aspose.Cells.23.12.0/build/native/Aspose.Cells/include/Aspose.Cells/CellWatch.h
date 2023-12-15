// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLWATCH_H
#define ASPOSE_CELLS_CELLWATCH_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class CellWatch_Impl;

/// <summary>
/// Represents Cell Watch Item in the 'watch window'.
/// </summary>
class CellWatch {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CellWatch_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CellWatch();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CellWatch(CellWatch_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CellWatch(const CellWatch& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CellWatch();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CellWatch& operator=(const CellWatch& src);
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
    /// Gets and sets the row of the cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets and sets the row of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetRow(int32_t value);
    /// <summary>
    /// Gets and sets the column of the cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Gets and sets the column of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetColumn(int32_t value);
    /// <summary>
    /// Gets and sets the name of the cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCellName();
    /// <summary>
    /// Gets and sets the name of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetCellName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetCellName(const char16_t* value);
    
};

} }

#endif
