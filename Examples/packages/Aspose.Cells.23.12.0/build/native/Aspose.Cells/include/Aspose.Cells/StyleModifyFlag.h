// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_STYLEMODIFYFLAG_H
#define ASPOSE_CELLS_STYLEMODIFYFLAG_H

namespace Aspose { namespace Cells {

/// <summary>
/// The style modified flags.
/// </summary>
enum class StyleModifyFlag {
    /// <summary>
    /// Indicates whether left border has been modified for the style.
    /// </summary>
    LeftBorder = 0x00000100,
    /// <summary>
    /// Indicates whether right border has been modified for the style.
    /// </summary>
    RightBorder = 0x00000200,
    /// <summary>
    /// Indicates whether top border has been modified for the style.
    /// </summary>
    TopBorder = 0x00000400,
    /// <summary>
    /// Indicates whether bottom border has been modified for the style.
    /// </summary>
    BottomBorder = 0x00000800,
    /// <summary>
    /// Indicates whether diagonal-down border has been modified for the style.
    /// </summary>
    DiagonalDownBorder = 0x00001000,
    /// <summary>
    /// Indicates whether diagonal-up border has been modified for the style.
    /// </summary>
    DiagonalUpBorder = 0x00002000,
    /// <summary>
    /// Indicates whether one or more diagonal borders(<see cref="DiagonalDownBorder"/>,
    /// <see cref="DiagonalUpBorder"/>) have been modified for the style.
    /// </summary>
    Diagonal = 12288,
    /// <summary>
    /// Indicates whether horizontal border has been modified for the style.
    /// Only for dynamic style, such as conditional formatting.
    /// </summary>
    HorizontalBorder = 0x0000020,
    /// <summary>
    /// Indicates whether vertical border has been modified for the style.
    /// Only for dynamic style, such as conditional formatting.
    /// </summary>
    VerticalBorder = 0x0000040,
    /// <summary>
    /// Indicates whether one or more borders(<see cref="LeftBorder"/>,
    /// <see cref="RightBorder"/>, <see cref="TopBorder"/>, <see cref="BottomBorder"/>,
    /// <see cref="Diagonal"/>, <see cref="HorizontalBorder"/>, <see cref="VerticalBorder"/>)
    /// have been modified for the style.
    /// </summary>
    Borders = 16224,
    /// <summary>
    /// Indicates whether numberformat has been modified.
    /// </summary>
    NumberFormat = 0x00004000,
    /// <summary>
    /// Indicates whether horizontal alignment has been modified.
    /// </summary>
    HorizontalAlignment = 0x00008000,
    /// <summary>
    /// Indicates whether vertical alignment has been modified.
    /// </summary>
    VerticalAlignment = 0x00010000,
    /// <summary>
    /// Indicates whether indent property has been modified.
    /// </summary>
    Indent = 0x00020000,
    /// <summary>
    /// Indicates whether rotation property has been modified.
    /// </summary>
    Rotation = 0x00040000,
    /// <summary>
    /// Indicates whether wrap text property has been modified.
    /// </summary>
    WrapText = 0x00080000,
    /// <summary>
    /// Indicates whether shrink to fit property has been modified.
    /// </summary>
    ShrinkToFit = 0x00100000,
    /// <summary>
    /// Indicates whether text direction property has been modified.
    /// </summary>
    TextDirection = 0x00200000,
    /// <summary>
    /// Indicates whether relative indent property has been modified for the style.
    /// Only for dynamic style, such as conditional formatting.
    /// </summary>
    RelativeIndent = 0x0000080,
    /// <summary>
    /// Indicates whether one or more alignment-related properties(<see cref="HorizontalAlignment"/>,
    /// <see cref="VerticalAlignment"/>, <see cref="Rotation"/>, <see cref="WrapText"/>,
    /// <see cref="WrapText"/>, <see cref="Indent"/>, <see cref="ShrinkToFit"/>, <see cref="TextDirection"/>,
    /// <see cref="RelativeIndent"/>) have been modified.
    /// </summary>
    AlignmentSettings = 4161664,
    /// <summary>
    /// Indicates whether pattern of the shading has been modified.
    /// </summary>
    Pattern = 0x00400000,
    /// <summary>
    /// Indicates whether foreground color has been modified.
    /// </summary>
    ForegroundColor = 0x00800000,
    /// <summary>
    /// Indicates whether background color has been modified.
    /// </summary>
    BackgroundColor = 0x01000000,
    /// <summary>
    /// Indicates whether one or more shading-related properties(<see cref="Pattern"/>,
    /// <see cref="ForegroundColor"/>, <see cref="BackgroundColor"/>) have been modified.
    /// </summary>
    CellShading = 29360128,
    /// <summary>
    /// Indicates whether locked property has been modified.
    /// </summary>
    Locked = 0x04000000,
    /// <summary>
    /// Indicates whether hide formula has been modified.
    /// </summary>
    HideFormula = 0x08000000,
    /// <summary>
    /// Indicates whether one or more protection-related properties(<see cref="Locked"/>,
    /// <see cref="HideFormula"/>) have been modified.
    /// </summary>
    ProtectionSettings = 201326592,
    /// <summary>
    /// Indicates whether font size has been modified.
    /// </summary>
    FontSize = 0x00000001,
    /// <summary>
    /// Indicates whether font name has been modified.
    /// </summary>
    FontName = 0x00000002,
    /// <summary>
    /// Indicates whether font color has been modified.
    /// </summary>
    FontColor = 0x00000003,
    /// <summary>
    /// Indicates whether font weight has been modified.
    /// </summary>
    FontWeight = 0x00000004,
    /// <summary>
    /// Indicates whether italic property of font has been modified.
    /// </summary>
    FontItalic = 0x00000005,
    /// <summary>
    /// Indicates whether underline property of font has been modified.
    /// </summary>
    FontUnderline = 0x00000006,
    /// <summary>
    /// Indicates whether strike property font has been modified.
    /// </summary>
    FontStrike = 0x00000007,
    /// <summary>
    /// Indicates whether subscript or superscript property of font has been modified.
    /// </summary>
    FontScript = 0x00000008,
    /// <summary>
    /// Indicates whether font family has been modified.
    /// </summary>
    FontFamily = 0x00000009,
    /// <summary>
    /// Indicates whether charset of the font has been modified.
    /// </summary>
    FontCharset = 0x0000000A,
    /// <summary>
    /// unused.
    /// </summary>
    FontScheme = 0x0000000B,
    /// <summary>
    /// unused.
    /// </summary>
    FontDirty = 0x0000000C,
    /// <summary>
    /// unused.
    /// </summary>
    FontSpellingError = 0x0000000D,
    /// <summary>
    /// unused.
    /// </summary>
    FontUFillTx = 0x0000000E,
    /// <summary>
    /// unused.
    /// </summary>
    FontSpacing = 0x0000000F,
    /// <summary>
    /// unused.
    /// </summary>
    FontKerning = 0x00000010,
    /// <summary>
    /// unused.
    /// </summary>
    FontEqualize = 0x00000011,
    /// <summary>
    /// unused.
    /// </summary>
    FontCap = 0x00000012,
    /// <summary>
    /// </summary>
    FontVerticalText = 0x00000013,
    /// <summary>
    /// Indicates whether one or more properties have been modified for the font of the style.
    /// </summary>
    Font = 0x00000001F,
    /// <summary>
    /// Indicates whether one or more properties have been modified for the style.
    /// </summary>
    All = 234881023,
};

inline StyleModifyFlag operator&(StyleModifyFlag a, StyleModifyFlag b) {
    return static_cast<StyleModifyFlag>(static_cast<int>(a) & static_cast<int>(b));
}

} }

#endif
