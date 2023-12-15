// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TEXTALIGNMENTTYPE_H
#define ASPOSE_CELLS_TEXTALIGNMENTTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Enumerates text alignment types.
/// </summary>
enum class TextAlignmentType {
    /// <summary>
    /// Represents general text alignment.
    /// </summary>
    General = 0x0700,
    /// <summary>
    /// Represents bottom text alignment.
    /// </summary>
    Bottom = 0x0210,
    /// <summary>
    /// Represents center text alignment.
    /// </summary>
    Center = 0x070A,
    /// <summary>
    /// Represents center across text alignment.
    /// </summary>
    CenterAcross = 0x0506,
    /// <summary>
    /// Represents distributed text alignment.
    /// </summary>
    Distributed = 0x0327,
    /// <summary>
    /// Represents fill text alignment.
    /// </summary>
    Fill = 0x0504,
    /// <summary>
    /// Represents justify text alignment.
    /// </summary>
    Justify = 0x071D,
    /// <summary>
    /// Represents left text alignment.
    /// </summary>
    Left = 0x0101,
    /// <summary>
    /// Represents right text alignment.
    /// </summary>
    Right = 0x0103,
    /// <summary>
    /// Represents top text alignment.
    /// </summary>
    Top = 0x0200,
    /// <summary>
    /// Aligns the text with an adjusted kashida length for Arabic text.
    /// </summary>
    JustifiedLow = 0x0340,
    /// <summary>
    /// Distributes Thai text specially, because each character is treated as a word.
    /// </summary>
    ThaiDistributed = 0x0380,
};

} }

#endif
