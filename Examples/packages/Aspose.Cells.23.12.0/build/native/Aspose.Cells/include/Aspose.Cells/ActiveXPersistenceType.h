// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_ACTIVEXPERSISTENCETYPE_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_ACTIVEXPERSISTENCETYPE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

/// <summary>
/// Represents the persistence method to persist an ActiveX control.
/// </summary>
enum class ActiveXPersistenceType {
    /// <summary>
    /// The data is stored as xml data.
    /// </summary>
    PropertyBag,
    /// <summary>
    /// The data is stored as a storage binary data.
    /// </summary>
    Storage,
    /// <summary>
    /// The data is stored as a stream binary data.
    /// </summary>
    Stream,
    /// <summary>
    /// The data is stored as a streaminit binary data.
    /// </summary>
    StreamInit,
};

} } } }

#endif
