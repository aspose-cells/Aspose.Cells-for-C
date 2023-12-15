// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_CONNECTIONDATASOURCETYPE_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_CONNECTIONDATASOURCETYPE_H

namespace Aspose { namespace Cells { namespace ExternalConnections {

/// <summary>
/// Specifies external database source type
/// </summary>
enum class ConnectionDataSourceType {
    /// <summary>
    /// ODBC-based source
    /// </summary>
    ODBCBasedSource = 1,
    /// <summary>
    /// DAO-based source
    /// </summary>
    DAOBasedSource = 2,
    /// <summary>
    /// File based database source
    /// </summary>
    FileBasedDataBaseSource = 3,
    /// <summary>
    /// Web query
    /// </summary>
    WebQuery = 4,
    /// <summary>
    /// OLE DB-based source
    /// </summary>
    OLEDBBasedSource = 5,
    /// <summary>
    /// Text-based source
    /// </summary>
    TextBasedSource = 6,
    /// <summary>
    /// ADO record set
    /// </summary>
    ADORecordSet = 7,
    /// <summary>
    /// DSP
    /// </summary>
    DSP = 8,
    /// <summary>
    /// OLE DB data source created by the Spreadsheet Data Model.
    /// </summary>
    OLEDBDataModel = 100,
    /// <summary>
    /// Data feed data source created by the Spreadsheet Data Model.
    /// </summary>
    DataFeedDataModel = 101,
    /// <summary>
    /// Worksheet data source created by the Spreadsheet Data Model.
    /// </summary>
    WorksheetDataModel = 102,
    /// <summary>
    /// Worksheet data source created by the Spreadsheet Data Model.
    /// </summary>
    /// <remarks>NOTE: This member is now obsolete. Instead,
    /// please use WorksheetDataModel enum.
    /// This property will be removed 12 months later since September 2017.
    /// Aspose apologizes for any inconvenience you may have experienced.</remarks>
    /// @deprecated Use WorksheetDataModel enum instead.
    Table = 102,
    /// <summary>
    /// Text data source created by the Spreadsheet Data Model.
    /// </summary>
    TextDataModel = 103,
    /// <summary>
    /// Text data source created by the Spreadsheet Data Model.
    /// </summary>
    Unknown = 0xff,
};

} } }

#endif
