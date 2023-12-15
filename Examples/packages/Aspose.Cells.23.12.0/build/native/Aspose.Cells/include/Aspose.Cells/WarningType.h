// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WARNINGTYPE_H
#define ASPOSE_CELLS_WARNINGTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// WaringType
/// </summary>
enum class WarningType {
    /// <summary>
    /// Font substitution warning type
    /// when a font has not been found, this warning type can be get.
    /// </summary>
    FontSubstitution = 0,
    /// <summary>
    /// Duplicate defined name is found in the file.
    /// </summary>
    DuplicateDefinedName = 1,
    /// <summary>
    /// Unsupported file format.
    /// </summary>
    UnsupportedFileFormat = 2,
    /// <summary>
    /// Invalid text of the defined name.
    /// </summary>
    InvalidTextOfDefinedName = 3,
    /// <summary>
    /// Invalid the font name.
    /// </summary>
    InvalidFontName = 4,
    /// <summary>
    /// Invalid autofilter range.
    /// </summary>
    InvalidAutoFilterRange = 5,
    /// <summary>
    /// The file is corrupted.
    /// </summary>
    IO = 6,
    /// <summary>
    /// Out of MS Excel limitation error.
    /// </summary>
    Limitation = 7,
    /// <summary>
    /// Invalid data.
    /// </summary>
    InvalidData = 8,
    /// <summary>
    /// Invalid formula.
    /// </summary>
    Formula = 9,
    /// <summary>
    /// Invalid operator.
    /// </summary>
    InvalidOperator = 10,
};

} }

#endif
