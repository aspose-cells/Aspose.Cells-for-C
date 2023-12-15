// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_OLEDBCOMMANDTYPE_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_OLEDBCOMMANDTYPE_H

namespace Aspose { namespace Cells { namespace ExternalConnections {

/// <summary>
/// Specifies the OLE DB command type.
/// </summary>
enum class OLEDBCommandType {
    /// <summary>
    /// The command type is not specified.
    /// </summary>
    None,
    /// <summary>
    /// Specifies a cube name
    /// </summary>
    /// <remarks>unsupported</remarks>
    CubeName = 1,
    /// <summary>
    /// Specifies a SQL statement
    /// </summary>
    SqlStatement = 2,
    /// <summary>
    /// Specifies a table name
    /// </summary>
    TableName = 3,
    /// <summary>
    /// Specifies that default information has been given, and it is up to the provider how to interpret.
    /// </summary>
    /// <remarks>unsupported</remarks>
    DefaultInformation = 4,
    /// <summary>
    /// Specifies a query which is against a web based List Data Provider.
    /// </summary>
    /// <remarks>unsupported</remarks>
    WebBasedList = 5,
};

} } }

#endif
