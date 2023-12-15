// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_SQLDATATYPE_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_SQLDATATYPE_H

namespace Aspose { namespace Cells { namespace ExternalConnections {

/// <summary>
/// Specifies SQL data type of the parameter. Only valid for ODBC sources.
/// </summary>
enum class SqlDataType {
    /// <summary>
    /// sql unsigned offset
    /// </summary>
    SqlUnsignedOffset = -22,
    /// <summary>
    /// sql signed offset
    /// </summary>
    SqlSignedOffset = -20,
    /// <summary>
    /// sql guid
    /// </summary>
    SqlGUID = -11,
    /// <summary>
    /// sql wide long variable char
    /// </summary>
    SqlWLongVarchar = -10,
    /// <summary>
    /// sql wide variable char
    /// </summary>
    SqlWVarchar = -9,
    /// <summary>
    /// sql wide char
    /// </summary>
    SqlWChar = -8,
    /// <summary>
    /// sql bit
    /// </summary>
    SqlBit = -7,
    /// <summary>
    /// sql tiny int
    /// </summary>
    SqlTinyInt = -6,
    /// <summary>
    /// sql big int
    /// </summary>
    SqlBigInt = -5,
    /// <summary>
    /// sql long variable binary
    /// </summary>
    SqlLongVarBinary = -4,
    /// <summary>
    /// sql variable binary
    /// </summary>
    SqlVarBinary = -3,
    /// <summary>
    /// sql binary
    /// </summary>
    SqlBinary = -2,
    /// <summary>
    /// sql long variable char
    /// </summary>
    SqlLongVarChar = -1,
    /// <summary>
    /// sql unknown type
    /// </summary>
    SqlUnknownType = 0,
    /// <summary>
    /// sql char
    /// </summary>
    SqlChar = 1,
    /// <summary>
    /// sql numeric
    /// </summary>
    SqlNumeric = 2,
    /// <summary>
    /// sql decimal
    /// </summary>
    SqlDecimal = 3,
    /// <summary>
    /// sql integer
    /// </summary>
    SqlInteger = 4,
    /// <summary>
    /// sql small int
    /// </summary>
    SqlSmallInt = 5,
    /// <summary>
    /// sql float
    /// </summary>
    SqlFloat = 6,
    /// <summary>
    /// sql real
    /// </summary>
    SqlReal = 7,
    /// <summary>
    /// sql double
    /// </summary>
    SqlDouble = 8,
    /// <summary>
    /// sql date type
    /// </summary>
    SqlTypeDate = 9,
    /// <summary>
    /// sql time type
    /// </summary>
    SqlTypeTime = 10,
    /// <summary>
    /// sql timestamp type
    /// </summary>
    SqlTypeTimestamp = 11,
    /// <summary>
    /// sql variable char
    /// </summary>
    SqlVarChar = 12,
    /// <summary>
    /// sql interval year
    /// </summary>
    SqlIntervalYear = 101,
    /// <summary>
    /// sql interval month
    /// </summary>
    SqlIntervalMonth = 102,
    /// <summary>
    /// sql interval day
    /// </summary>
    SqlIntervalDay = 103,
    /// <summary>
    /// sql interval hour
    /// </summary>
    SqlIntervalHour = 104,
    /// <summary>
    /// sql interval minute
    /// </summary>
    SqlIntervalMinute = 105,
    /// <summary>
    /// sql interval second
    /// </summary>
    SqlIntervalSecond = 106,
    /// <summary>
    /// sql interval year to month
    /// </summary>
    SqlIntervalYearToMonth = 107,
    /// <summary>
    /// sql interval day to hour
    /// </summary>
    SqlIntervalDayToHour = 108,
    /// <summary>
    /// sql interval day to minute
    /// </summary>
    SqlIntervalDayToMinute = 109,
    /// <summary>
    /// sql interval day to second
    /// </summary>
    SqlIntervalDayToSecond = 110,
    /// <summary>
    /// sql interval hour to minute
    /// </summary>
    SqlIntervalHourToMinute = 111,
    /// <summary>
    /// sql interval hour to second
    /// </summary>
    SqlIntervalHourToSecond = 112,
    /// <summary>
    /// sql interval minute to second
    /// </summary>
    SqlIntervalMinuteToSecond = 113,
};

} } }

#endif
