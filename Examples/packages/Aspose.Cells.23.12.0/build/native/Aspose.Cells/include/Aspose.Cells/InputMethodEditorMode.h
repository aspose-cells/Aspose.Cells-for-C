// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_INPUTMETHODEDITORMODE_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_INPUTMETHODEDITORMODE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

/// <summary>
/// Represents the default run-time mode of the Input Method Editor.
/// </summary>
enum class InputMethodEditorMode {
    /// <summary>
    /// Does not control IME.
    /// </summary>
    NoControl = 0x0,
    /// <summary>
    /// IME on.
    /// </summary>
    On = 0x1,
    /// <summary>
    /// IME off. English mode.
    /// </summary>
    Off = 0x2,
    /// <summary>
    /// IME off.User can't turn on IME by keyboard.
    /// </summary>
    Disable = 0x3,
    /// <summary>
    /// IME on with Full-width hiragana mode.
    /// </summary>
    Hiragana = 0x4,
    /// <summary>
    /// IME on with Full-width katakana mode.
    /// </summary>
    Katakana = 0x5,
    /// <summary>
    /// IME on with Half-width katakana mode.
    /// </summary>
    KatakanaHalf = 0x6,
    /// <summary>
    /// IME on with Full-width Alphanumeric mode.
    /// </summary>
    AlphaFull = 0x7,
    /// <summary>
    /// IME on with Half-width Alphanumeric mode.
    /// </summary>
    Alpha = 0x8,
    /// <summary>
    /// IME on with Full-width hangul mode.
    /// </summary>
    HangulFull = 0x9,
    /// <summary>
    /// IME on with Half-width hangul mode.
    /// </summary>
    Hangul = 0xA,
    /// <summary>
    /// IME on with Full-width hanzi mode.
    /// </summary>
    HanziFull = 0xB,
    /// <summary>
    /// IME on with Half-width hanzi mode.
    /// </summary>
    Hanzi = 0xC,
};

} } } }

#endif
