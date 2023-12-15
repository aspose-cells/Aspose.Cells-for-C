// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROTECTIONTYPE_H
#define ASPOSE_CELLS_PROTECTIONTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents workbook/worksheet protection type.
/// </summary>
enum class ProtectionType {
    /// <summary>
    /// Represents to protect all.
    /// </summary>
    All,
    /// <summary>
    /// Represents to protect contents, used in Worksheet protection.
    /// </summary>
    Contents,
    /// <summary>
    /// Represents to protect objects, used in Worksheet protection.
    /// </summary>
    Objects,
    /// <summary>
    /// Represents to protect scenarios, used in Worksheet protection.
    /// </summary>
    Scenarios,
    /// <summary>
    /// Represents to protect structure, used in Workbook protection.
    /// </summary>
    Structure,
    /// <summary>
    /// Represents to protect window, used in Workbook protection.
    /// </summary>
    Windows,
    /// <summary>
    /// Represents no protection. Only for Reading property.
    /// </summary>
    None,
};

} }

#endif
