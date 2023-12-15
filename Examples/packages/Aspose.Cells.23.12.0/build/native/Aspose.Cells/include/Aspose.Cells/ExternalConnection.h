// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_EXTERNALCONNECTION_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_EXTERNALCONNECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ConnectionDataSourceType.h"
#include "Aspose.Cells/CredentialsMethodType.h"
#include "Aspose.Cells/ReConnectionMethodType.h"

namespace Aspose { namespace Cells { namespace QueryTables {
    class PowerQueryFormula;
} } }

namespace Aspose { namespace Cells { namespace ExternalConnections {
    class ConnectionParameterCollection;
} } }

namespace Aspose { namespace Cells { namespace ExternalConnections {

using namespace Aspose::Cells;
using namespace Aspose::Cells::QueryTables;

class ExternalConnection_Impl;

/// <summary>
/// Specifies an external data connection
/// </summary>
class ExternalConnection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ExternalConnection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ExternalConnection(ExternalConnection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ExternalConnection(const ExternalConnection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ExternalConnection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ExternalConnection& operator=(const ExternalConnection& src);
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
    /// Gets the id of the connection.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetId();
    /// <summary>
    /// Gets or Sets the external connection DataSource type.
    /// </summary>
    ASPOSE_CELLS_API ConnectionDataSourceType GetType();
    /// <summary>
    /// Gets or Sets the external connection DataSource type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(ConnectionDataSourceType value);
    /// <summary>
    /// Used when the external data source is file-based. When a connection to such a data
    /// source fails, the spreadsheet application attempts to connect directly to this file. May be
    /// expressed in URI or system-specific file path notation.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSourceFile();
    /// <summary>
    /// Used when the external data source is file-based. When a connection to such a data
    /// source fails, the spreadsheet application attempts to connect directly to this file. May be
    /// expressed in URI or system-specific file path notation.
    /// </summary>
    ASPOSE_CELLS_API void SetSourceFile(const U16String& value);
    /// <summary>
    /// Used when the external data source is file-based. When a connection to such a data
    /// source fails, the spreadsheet application attempts to connect directly to this file. May be
    /// expressed in URI or system-specific file path notation.
    /// </summary>
    ASPOSE_CELLS_API void SetSourceFile(const char16_t* value);
    /// <summary>
    /// Identifier for Single Sign On (SSO) used for authentication between an intermediate
    /// spreadsheetML server and the external data source.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSSOId();
    /// <summary>
    /// Identifier for Single Sign On (SSO) used for authentication between an intermediate
    /// spreadsheetML server and the external data source.
    /// </summary>
    ASPOSE_CELLS_API void SetSSOId(const U16String& value);
    /// <summary>
    /// Identifier for Single Sign On (SSO) used for authentication between an intermediate
    /// spreadsheetML server and the external data source.
    /// </summary>
    ASPOSE_CELLS_API void SetSSOId(const char16_t* value);
    /// <summary>
    /// True if the password is to be saved as part of the connection string; otherwise, False.
    /// </summary>
    ASPOSE_CELLS_API bool GetSavePassword();
    /// <summary>
    /// True if the password is to be saved as part of the connection string; otherwise, False.
    /// </summary>
    ASPOSE_CELLS_API void SetSavePassword(bool value);
    /// <summary>
    /// True if the external data fetched over the connection to populate a table is to be saved
    /// with the workbook; otherwise, false.
    /// </summary>
    ASPOSE_CELLS_API bool GetSaveData();
    /// <summary>
    /// True if the external data fetched over the connection to populate a table is to be saved
    /// with the workbook; otherwise, false.
    /// </summary>
    ASPOSE_CELLS_API void SetSaveData(bool value);
    /// <summary>
    /// True if this connection should be refreshed when opening the file; otherwise, false.
    /// </summary>
    ASPOSE_CELLS_API bool GetRefreshOnLoad();
    /// <summary>
    /// True if this connection should be refreshed when opening the file; otherwise, false.
    /// </summary>
    ASPOSE_CELLS_API void SetRefreshOnLoad(bool value);
    /// <summary>
    /// Specifies what the spreadsheet application should do when a connection fails.
    /// The default value is ReConnectionMethodType.Required.
    /// </summary>
    ASPOSE_CELLS_API ReConnectionMethodType GetReconnectionMethodType();
    /// <summary>
    /// Specifies what the spreadsheet application should do when a connection fails.
    /// The default value is ReConnectionMethodType.Required.
    /// </summary>
    ASPOSE_CELLS_API void SetReconnectionMethodType(ReConnectionMethodType value);
    /// <summary>
    /// Indicates whether the spreadsheet application should always and only use the
    /// connection information in the external connection file indicated by the odcFile attribute
    /// when the connection is refreshed.  If false, then the spreadsheet application
    /// should follow the procedure indicated by the reconnectionMethod attribute
    /// </summary>
    ASPOSE_CELLS_API bool GetOnlyUseConnectionFile();
    /// <summary>
    /// Indicates whether the spreadsheet application should always and only use the
    /// connection information in the external connection file indicated by the odcFile attribute
    /// when the connection is refreshed.  If false, then the spreadsheet application
    /// should follow the procedure indicated by the reconnectionMethod attribute
    /// </summary>
    ASPOSE_CELLS_API void SetOnlyUseConnectionFile(bool value);
    /// <summary>
    /// Specifies the full path to external connection file from which this connection was
    /// created. If a connection fails during an attempt to refresh data, and reconnectionMethod=1,
    /// then the spreadsheet application will try again using information from the external connection file
    /// instead of the connection object embedded within the workbook.
    /// </summary>
    ASPOSE_CELLS_API U16String GetOdcFile();
    /// <summary>
    /// Specifies the full path to external connection file from which this connection was
    /// created. If a connection fails during an attempt to refresh data, and reconnectionMethod=1,
    /// then the spreadsheet application will try again using information from the external connection file
    /// instead of the connection object embedded within the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetOdcFile(const U16String& value);
    /// <summary>
    /// Specifies the full path to external connection file from which this connection was
    /// created. If a connection fails during an attempt to refresh data, and reconnectionMethod=1,
    /// then the spreadsheet application will try again using information from the external connection file
    /// instead of the connection object embedded within the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetOdcFile(const char16_t* value);
    /// <summary>
    /// True if the connection has not been refreshed for the first time; otherwise, false.
    /// This state can happen when the user saves the file before a query has finished returning.
    /// </summary>
    ASPOSE_CELLS_API bool IsNew();
    /// <summary>
    /// True if the connection has not been refreshed for the first time; otherwise, false.
    /// This state can happen when the user saves the file before a query has finished returning.
    /// </summary>
    ASPOSE_CELLS_API void SetIsNew(bool value);
    /// <summary>
    /// Specifies the name of the connection. Each connection must have a unique name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Specifies the name of the connection. Each connection must have a unique name.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Specifies the name of the connection. Each connection must have a unique name.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// True when the spreadsheet application should make efforts to keep the connection
    /// open. When false, the application should close the connection after retrieving the
    /// information.
    /// </summary>
    ASPOSE_CELLS_API bool GetKeepAlive();
    /// <summary>
    /// True when the spreadsheet application should make efforts to keep the connection
    /// open. When false, the application should close the connection after retrieving the
    /// information.
    /// </summary>
    ASPOSE_CELLS_API void SetKeepAlive(bool value);
    /// <summary>
    /// Specifies the number of minutes between automatic refreshes of the connection.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRefreshInternal();
    /// <summary>
    /// Specifies the number of minutes between automatic refreshes of the connection.
    /// </summary>
    ASPOSE_CELLS_API void SetRefreshInternal(int32_t value);
    /// <summary>
    /// Specifies The unique identifier of this connection.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetConnectionId();
    /// <summary>
    /// Specifies the user description for this connection
    /// </summary>
    ASPOSE_CELLS_API U16String GetConnectionDescription();
    /// <summary>
    /// Specifies the user description for this connection
    /// </summary>
    ASPOSE_CELLS_API void SetConnectionDescription(const U16String& value);
    /// <summary>
    /// Specifies the user description for this connection
    /// </summary>
    ASPOSE_CELLS_API void SetConnectionDescription(const char16_t* value);
    /// <summary>
    /// Indicates whether the associated workbook connection has been deleted.  true if the
    /// connection has been deleted; otherwise, false.
    /// </summary>
    ASPOSE_CELLS_API bool IsDeleted();
    /// <summary>
    /// Indicates whether the associated workbook connection has been deleted.  true if the
    /// connection has been deleted; otherwise, false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDeleted(bool value);
    /// <summary>
    /// Specifies the authentication method to be used when establishing (or re-establishing) the connection.
    /// </summary>
    ASPOSE_CELLS_API CredentialsMethodType GetCredentialsMethodType();
    /// <summary>
    /// Specifies the authentication method to be used when establishing (or re-establishing) the connection.
    /// </summary>
    ASPOSE_CELLS_API void SetCredentialsMethodType(CredentialsMethodType value);
    /// <summary>
    /// Indicates whether the connection can be refreshed in the background (asynchronously).
    /// true if preferred usage of the connection is to refresh asynchronously in the background;
    /// false if preferred usage of the connection is to refresh synchronously in the foreground.
    /// </summary>
    ASPOSE_CELLS_API bool GetBackgroundRefresh();
    /// <summary>
    /// Indicates whether the connection can be refreshed in the background (asynchronously).
    /// true if preferred usage of the connection is to refresh asynchronously in the background;
    /// false if preferred usage of the connection is to refresh synchronously in the foreground.
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundRefresh(bool value);
    /// <summary>
    /// Gets <see cref="ConnectionParameterCollection"/> for an ODBC or web query.
    /// </summary>
    ASPOSE_CELLS_API ConnectionParameterCollection GetParameters();
    /// <summary>
    /// Gets the definition of power query formula.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormula GetPowerQueryFormula();
    
};

} } }

#endif
