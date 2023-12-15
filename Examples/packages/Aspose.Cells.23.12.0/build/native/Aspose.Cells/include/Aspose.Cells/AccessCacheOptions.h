// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ACCESSCACHEOPTIONS_H
#define ASPOSE_CELLS_ACCESSCACHEOPTIONS_H

namespace Aspose { namespace Cells {

/// <summary>
/// Cache options for data access. Can be combined with | operator for multiple options together.
/// </summary>
/// <remarks>
/// For some features, accessing large dataset requires a lot of repeated and complicated operations
/// such as search, calculation, ...etc and those operations will take a lot of extra time.
/// For common situations, all dependent data remains unchanged during the access, so some caches can be built and used to
/// improve the access performance.
/// For this purpose, we provide this API so that user can specify which kind of data access needs
/// to be optimized by possible caching mechanism.
/// <br></br>
/// Please note, for different options, different data set may be required to be "read-only".
/// And performance of accessing data depends on many aspects, the use of caching mechanism
/// does not guarantee that performance will be improved. For some situations,
/// such as the dataset to be accessed is small, using cache may cause even more time because
/// caching itself also needs certain extra time.
/// </remarks>
enum class AccessCacheOptions {
    /// <summary>
    /// No cache for any data access.
    /// </summary>
    None = 0x00000000,
    /// <summary>
    /// Apply all possible optimizations for all kinds of data access in the workbook.
    /// All settings and data should not be changed during the optimized access.
    /// </summary>
    All = -1,
    /// <summary>
    /// Apply possible optimization for getting object(such as Shape)'s position and size.
    /// Row height and column width settings should not be changed during the optimized access.
    /// </summary>
    PositionAndSize = 3,
    /// <summary>
    /// Apply possible optimization for getting cells' values.
    /// Cells data(data and settings of Cell, Row) should not be changed during
    /// the optimized access, no new Cell/Row objects should be created either(such as
    /// by <see cref="Cells.this[int, int]"/>).
    /// </summary>
    CellsData = 9,
    /// <summary>
    /// Apply possible optimization for getting display-related results of
    /// cells(<see cref="Cell.DisplayStringValue"/>, <see cref="Cell.GetStyle()"/>, <see cref="Cell.GetDisplayStyle()"/>, etc.).
    /// Cells data and style-related objects(Cell/Row/Column styles, column width, etc.) should not be changed
    /// during the optimized access.
    /// </summary>
    CellDisplay = 1048710,
    /// <summary>
    /// Apply possible optimization for getting formulas.
    /// All data and settings which may affect the formula expression(Worksheet's name, Name's text,
    /// table's column, etc.) should not be changed during the optimized access.
    /// </summary>
    GetFormula = 2097152,
    /// <summary>
    /// Apply possible optimization for setting formulas.
    /// All data and settings which may affect the formula expression(Worksheet's name, Name's text,
    /// table's column, etc.) should not be changed during the optimized access.
    /// </summary>
    SetFormula = 4194304,
    /// <summary>
    /// Apply possible optimization for calculating formulas.
    /// Cells data should not be changed during the optimized access, none new objects(Cell, Row, etc.)
    /// should be created either(such as by <see cref="Cells.this[int, int]"/>).
    /// </summary>
    CalculateFormula = 8388617,
    /// <summary>
    /// Apply possible optimization for getting formatting result of conditional formattings.
    /// All data and settings which may affect the result of conditional formattings(settings of
    /// conditional formattings, dependent cell values, etc.) should not be changed during the optimized access.
    /// </summary>
    ConditionalFormatting = 16777225,
    /// <summary>
    /// Apply possible optimization for getting validation result.
    /// All data and settings which may affect the result of validation(settings of the validation,
    /// dependent cell values, etc.) should not be changed during the optimized access.
    /// </summary>
    Validation = 33554441,
};

inline AccessCacheOptions operator&(AccessCacheOptions a, AccessCacheOptions b) {
    return static_cast<AccessCacheOptions>(static_cast<int>(a) & static_cast<int>(b));
}

inline AccessCacheOptions operator|(AccessCacheOptions a, AccessCacheOptions b) {
    return static_cast<AccessCacheOptions>(static_cast<int>(a) | static_cast<int>(b));
}

inline AccessCacheOptions operator~(AccessCacheOptions a) {
    return static_cast<AccessCacheOptions>(~static_cast<int>(a));
}

} }

#endif
