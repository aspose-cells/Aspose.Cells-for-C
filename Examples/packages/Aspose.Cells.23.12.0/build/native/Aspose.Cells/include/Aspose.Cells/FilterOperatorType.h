// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILTEROPERATORTYPE_H
#define ASPOSE_CELLS_FILTEROPERATORTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Custom Filter operator type.
/// </summary>
enum class FilterOperatorType {
    /// <summary>
    /// Represents LessOrEqual operator.
    /// </summary>
    LessOrEqual,
    /// <summary>
    /// Represents LessThan operator.
    /// </summary>
    LessThan,
    /// <summary>
    /// Represents Equal operator.
    /// </summary>
    Equal,
    /// <summary>
    /// Represents GreaterThan operator.
    /// </summary>
    GreaterThan,
    /// <summary>
    /// Represents NotEqual operator.
    /// </summary>
    NotEqual,
    /// <summary>
    /// Represents GreaterOrEqual operator.
    /// </summary>
    GreaterOrEqual,
    /// <summary>
    /// Represents no comparison.
    /// </summary>
    None,
    /// <summary>
    /// Begins with the text.
    /// </summary>
    BeginsWith,
    /// <summary>
    /// Ends with the text.
    /// </summary>
    EndsWith,
    /// <summary>
    /// Contains the text.
    /// </summary>
    Contains,
    /// <summary>
    /// Not contains the text.
    /// </summary>
    NotContains,
};

} }

#endif
