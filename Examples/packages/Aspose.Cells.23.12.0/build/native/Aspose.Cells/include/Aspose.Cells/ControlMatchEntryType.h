// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CONTROLMATCHENTRYTYPE_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CONTROLMATCHENTRYTYPE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

/// <summary>
/// Represents how a ListBox or ComboBox searches its list as the user types.
/// </summary>
enum class ControlMatchEntryType {
    /// <summary>
    /// The control searches for the next entry that starts with the character entered.
    /// Repeatedly typing the same letter cycles through all entries beginning with that letter.
    /// </summary>
    FirstLetter = 0,
    /// <summary>
    /// As each character is typed, the control searches for an entry matching all characters entered.
    /// </summary>
    Complete = 1,
    /// <summary>
    /// The list will not be searched when characters are typed.
    /// </summary>
    None = 2,
};

} } } }

#endif
