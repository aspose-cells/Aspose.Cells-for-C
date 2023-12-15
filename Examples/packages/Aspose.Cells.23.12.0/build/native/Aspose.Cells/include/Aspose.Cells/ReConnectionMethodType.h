// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_RECONNECTIONMETHODTYPE_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_RECONNECTIONMETHODTYPE_H

namespace Aspose { namespace Cells { namespace ExternalConnections {

/// <summary>
/// Specifies what the spreadsheet application should do when a connection fails.
/// </summary>
enum class ReConnectionMethodType {
    /// <summary>
    /// On refresh use the existing connection information and if it ends up being invalid
    /// then get updated connection information, if available from the external connection file.
    /// </summary>
    Required = 1,
    /// <summary>
    /// On every refresh get updated connection information from the external connection file,
    /// if available, and use that instead of the existing connection information.
    /// In this case the data refresh will fail if the external connection file is unavailable.
    /// </summary>
    Always = 2,
    /// <summary>
    /// Never get updated connection information from the external connection file
    /// even if it is available and even if the existing connection information is invalid
    /// </summary>
    Never = 3,
};

} } }

#endif
