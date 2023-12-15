// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_DBCONNECTION_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_DBCONNECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ExternalConnection.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/OLEDBCommandType.h"

namespace Aspose { namespace Cells { namespace QueryTables {
    class PowerQueryFormula;
} } }

namespace Aspose { namespace Cells { namespace ExternalConnections {

using namespace Aspose::Cells;
using namespace Aspose::Cells::QueryTables;

class DBConnection_Impl;

/// <summary>
/// Specifies all properties associated with an ODBC or OLE DB external data connection.
/// </summary>
class DBConnection : public ExternalConnection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DBConnection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DBConnection(DBConnection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DBConnection(const DBConnection& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DBConnection(const ExternalConnection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DBConnection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DBConnection& operator=(const DBConnection& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// The connection information string is used to make contact with an OLE DB or ODBC data source.
    /// </summary>
    ASPOSE_CELLS_API U16String GetConnectionInfo();
    /// <summary>
    /// The connection information string is used to make contact with an OLE DB or ODBC data source.
    /// </summary>
    ASPOSE_CELLS_API void SetConnectionInfo(const U16String& value);
    /// <summary>
    /// The connection information string is used to make contact with an OLE DB or ODBC data source.
    /// </summary>
    ASPOSE_CELLS_API void SetConnectionInfo(const char16_t* value);
    /// <summary>
    /// Gets the definition of power query formula.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormula GetPowerQueryFormula();
    /// <summary>
    /// Specifies the OLE DB command type.
    /// 1. Query specifies a cube name
    /// 2. Query specifies a SQL statement
    /// 3. Query specifies a table name
    /// 4. Query specifies that default information has been given, and it is up to the provider how to interpret.
    /// 5. Query is against a web based List Data Provider.
    /// </summary>
    ASPOSE_CELLS_API OLEDBCommandType GetCommandType();
    /// <summary>
    /// Specifies the OLE DB command type.
    /// 1. Query specifies a cube name
    /// 2. Query specifies a SQL statement
    /// 3. Query specifies a table name
    /// 4. Query specifies that default information has been given, and it is up to the provider how to interpret.
    /// 5. Query is against a web based List Data Provider.
    /// </summary>
    ASPOSE_CELLS_API void SetCommandType(OLEDBCommandType value);
    /// <summary>
    /// The string containing the database command to pass to the data provider API that will
    /// interact with the external source in order to retrieve data
    /// </summary>
    ASPOSE_CELLS_API U16String GetCommand();
    /// <summary>
    /// The string containing the database command to pass to the data provider API that will
    /// interact with the external source in order to retrieve data
    /// </summary>
    ASPOSE_CELLS_API void SetCommand(const U16String& value);
    /// <summary>
    /// The string containing the database command to pass to the data provider API that will
    /// interact with the external source in order to retrieve data
    /// </summary>
    ASPOSE_CELLS_API void SetCommand(const char16_t* value);
    /// <summary>
    /// Specifies a second command text string that is persisted when PivotTable server-based
    /// page fields are in use.
    /// For ODBC connections, serverCommand is usually a broader query than command (no
    /// WHERE clause is present in the former). Based on these 2 commands(Command and ServerCommand),
    /// parameter UI can be populated and parameterized queries can be constructed
    /// </summary>
    ASPOSE_CELLS_API U16String GetSeverCommand();
    /// <summary>
    /// Specifies a second command text string that is persisted when PivotTable server-based
    /// page fields are in use.
    /// For ODBC connections, serverCommand is usually a broader query than command (no
    /// WHERE clause is present in the former). Based on these 2 commands(Command and ServerCommand),
    /// parameter UI can be populated and parameterized queries can be constructed
    /// </summary>
    ASPOSE_CELLS_API void SetSeverCommand(const U16String& value);
    /// <summary>
    /// Specifies a second command text string that is persisted when PivotTable server-based
    /// page fields are in use.
    /// For ODBC connections, serverCommand is usually a broader query than command (no
    /// WHERE clause is present in the former). Based on these 2 commands(Command and ServerCommand),
    /// parameter UI can be populated and parameterized queries can be constructed
    /// </summary>
    ASPOSE_CELLS_API void SetSeverCommand(const char16_t* value);
    
};

} } }

#endif
