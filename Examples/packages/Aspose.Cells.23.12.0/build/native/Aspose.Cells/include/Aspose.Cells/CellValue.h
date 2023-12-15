// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLVALUE_H
#define ASPOSE_CELLS_CELLVALUE_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/CellValueType.h"

namespace Aspose { namespace Cells {

class CellValue_Impl;

/// <summary>
/// Represents the cell value and corresponding type.
/// </summary>
class CellValue {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CellValue_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CellValue();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CellValue(CellValue_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CellValue(const CellValue& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CellValue();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CellValue& operator=(const CellValue& src);
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
    /// Gets/sets the type of cell value.
    /// </summary>
    ASPOSE_CELLS_API CellValueType GetType();
    /// <summary>
    /// Gets/sets the type of cell value.
    /// </summary>
    ASPOSE_CELLS_API void SetType(CellValueType value);
    
};

} }

#endif
