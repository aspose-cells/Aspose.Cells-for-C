// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLVALUETYPE_H
#define ASPOSE_CELLS_CELLVALUETYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Specifies a cell value type.
/// </summary>
enum class CellValueType {
    /// <summary>
    /// Cell value type is unknown.
    /// </summary>
    IsUnknown = 0x00,
    /// <summary>
    /// Blank cell. Corresponding value should be null.
    /// </summary>
    IsNull = 0x01,
    /// <summary>
    /// Cell value is numeric. Corresponding value must be int or double.
    /// </summary>
    IsNumeric = 0x02,
    /// <summary>
    /// Cell value is datetime. Corresponding value must be DateTime.
    /// </summary>
    IsDateTime = 0x04,
    /// <summary>
    /// Cell value is string. Corresponding value must be string.
    /// </summary>
    IsString = 0x08,
    /// <summary>
    /// Cell value is boolean. Corresponding value must be bool.
    /// </summary>
    IsBool = 0x10,
    /// <summary>
    /// Cell contains error value. Corresponding value must be error string.
    /// </summary>
    IsError = 0x20,
};

} }

#endif
