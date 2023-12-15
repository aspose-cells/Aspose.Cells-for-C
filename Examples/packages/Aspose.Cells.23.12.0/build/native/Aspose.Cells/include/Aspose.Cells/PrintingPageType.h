// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PRINTINGPAGETYPE_H
#define ASPOSE_CELLS_PRINTINGPAGETYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Indicates which pages will not be printed.
/// </summary>
enum class PrintingPageType {
    /// <summary>
    /// Prints all pages.
    /// </summary>
    Default = 0,
    /// <summary>
    /// Don't print the pages which the cells are blank.
    /// </summary>
    IgnoreBlank = 1,
    /// <summary>
    /// Don't print the pages which cells only contain styles.
    /// </summary>
    IgnoreStyle = 2,
};

} }

#endif
