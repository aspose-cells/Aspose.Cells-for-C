// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILTERTYPE_H
#define ASPOSE_CELLS_FILTERTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// The filter type.
/// </summary>
enum class FilterType {
    /// <summary>
    /// Filter by fill color of the cell.
    /// </summary>
    ColorFilter,
    /// <summary>
    /// Custom filter type.
    /// </summary>
    CustomFilters,
    /// <summary>
    /// Dynamic filter type.
    /// </summary>
    DynamicFilter,
    /// <summary>
    /// When multiple values are chosen to filter by, or when a group of date values are chosen to filter by,
    /// this element groups those criteria together.
    /// </summary>
    MultipleFilters,
    /// <summary>
    /// Filter by icon of conditional formatting.
    /// </summary>
    IconFilter,
    /// <summary>
    /// Top 10 filter.
    /// </summary>
    Top10,
    /// <summary>
    /// No filter.
    /// </summary>
    None,
};

} }

#endif
