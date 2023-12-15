// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_CONNECTIONPARAMETER_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_CONNECTIONPARAMETER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ConnectionParameterType.h"
#include "Aspose.Cells/SqlDataType.h"

namespace Aspose { namespace Cells { namespace ExternalConnections {

using namespace Aspose::Cells;

class ConnectionParameter_Impl;

/// <summary>
/// Specifies properties about any parameters used with external data connections
/// Parameters are valid for ODBC and web queries.
/// </summary>
class ConnectionParameter {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ConnectionParameter_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ConnectionParameter(ConnectionParameter_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ConnectionParameter(const ConnectionParameter& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ConnectionParameter();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ConnectionParameter& operator=(const ConnectionParameter& src);
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
    /// SQL data type of the parameter. Only valid for ODBC sources.
    /// </summary>
    ASPOSE_CELLS_API SqlDataType GetSqlType();
    /// <summary>
    /// SQL data type of the parameter. Only valid for ODBC sources.
    /// </summary>
    ASPOSE_CELLS_API void SetSqlType(SqlDataType value);
    /// <summary>
    /// Flag indicating whether the query should automatically refresh when the contents of a
    /// cell that provides the parameter value changes. If true, then external data is refreshed
    /// using the new parameter value every time there's a change. If false, then external data
    /// is only refreshed when requested by the user, or some other event triggers refresh (e.g., workbook opened).
    /// </summary>
    ASPOSE_CELLS_API bool GetRefreshOnChange();
    /// <summary>
    /// Flag indicating whether the query should automatically refresh when the contents of a
    /// cell that provides the parameter value changes. If true, then external data is refreshed
    /// using the new parameter value every time there's a change. If false, then external data
    /// is only refreshed when requested by the user, or some other event triggers refresh (e.g., workbook opened).
    /// </summary>
    ASPOSE_CELLS_API void SetRefreshOnChange(bool value);
    /// <summary>
    /// Prompt string for the parameter. Presented to the spreadsheet user along with input UI
    /// to collect the parameter value before refreshing the external data. Used only when
    /// parameterType = prompt.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPrompt();
    /// <summary>
    /// Prompt string for the parameter. Presented to the spreadsheet user along with input UI
    /// to collect the parameter value before refreshing the external data. Used only when
    /// parameterType = prompt.
    /// </summary>
    ASPOSE_CELLS_API void SetPrompt(const U16String& value);
    /// <summary>
    /// Prompt string for the parameter. Presented to the spreadsheet user along with input UI
    /// to collect the parameter value before refreshing the external data. Used only when
    /// parameterType = prompt.
    /// </summary>
    ASPOSE_CELLS_API void SetPrompt(const char16_t* value);
    /// <summary>
    /// Type of parameter used.
    /// If the parameterType=value, then the value from boolean, double, integer,
    /// or string will be used.  In this case, it is expected that only one of
    /// {boolean, double, integer, or string} will be specified.
    /// </summary>
    ASPOSE_CELLS_API ConnectionParameterType GetType();
    /// <summary>
    /// Type of parameter used.
    /// If the parameterType=value, then the value from boolean, double, integer,
    /// or string will be used.  In this case, it is expected that only one of
    /// {boolean, double, integer, or string} will be specified.
    /// </summary>
    ASPOSE_CELLS_API void SetType(ConnectionParameterType value);
    /// <summary>
    /// The name of the parameter.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// The name of the parameter.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// The name of the parameter.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Cell reference indicating which cell's value to use for the query parameter. Used only when parameterType is cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCellReference();
    /// <summary>
    /// Cell reference indicating which cell's value to use for the query parameter. Used only when parameterType is cell.
    /// </summary>
    ASPOSE_CELLS_API void SetCellReference(const U16String& value);
    /// <summary>
    /// Cell reference indicating which cell's value to use for the query parameter. Used only when parameterType is cell.
    /// </summary>
    ASPOSE_CELLS_API void SetCellReference(const char16_t* value);
    
};

} } }

#endif
