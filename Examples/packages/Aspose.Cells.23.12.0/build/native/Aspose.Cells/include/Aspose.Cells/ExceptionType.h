// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXCEPTIONTYPE_H
#define ASPOSE_CELLS_EXCEPTIONTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents custom exception type code.
/// </summary>
enum class ExceptionType {
    /// <summary>
    /// Invalid chart setting.
    /// </summary>
    Chart,
    /// <summary>
    /// Invalid data type setting.
    /// </summary>
    DataType,
    /// <summary>
    /// Invalid data validation setting.
    /// </summary>
    DataValidation,
    /// <summary>
    /// Invalid data validation setting.
    /// </summary>
    ConditionalFormatting,
    /// <summary>
    /// Invalid file format.
    /// </summary>
    FileFormat,
    /// <summary>
    /// Invalid formula.
    /// </summary>
    Formula,
    /// <summary>
    /// Invalid data.
    /// </summary>
    InvalidData,
    /// <summary>
    /// Invalid operator.
    /// </summary>
    InvalidOperator,
    /// <summary>
    /// Incorrect password.
    /// </summary>
    IncorrectPassword,
    /// <summary>
    /// License related errors.
    /// </summary>
    License,
    /// <summary>
    /// Out of MS Excel limitation error.
    /// </summary>
    Limitation,
    /// <summary>
    /// Invalid page setup setting.
    /// </summary>
    PageSetup,
    /// <summary>
    /// Invalid pivotTable setting.
    /// </summary>
    PivotTable,
    /// <summary>
    /// Invalid drawing object setting.
    /// </summary>
    Shape,
    /// <summary>
    /// Invalid sparkline object setting.
    /// </summary>
    Sparkline,
    /// <summary>
    /// Invalid worksheet name.
    /// </summary>
    SheetName,
    /// <summary>
    /// Invalid worksheet type.
    /// </summary>
    SheetType,
    /// <summary>
    /// The process is interrupted.
    /// </summary>
    Interrupted,
    /// <summary>
    /// The file is invalid.
    /// </summary>
    IO,
    /// <summary>
    /// Permission is required to open this file.
    /// </summary>
    Permission,
    /// <summary>
    /// Unsupported feature.
    /// </summary>
    UnsupportedFeature,
    /// <summary>
    /// Unsupported stream to be opened.
    /// </summary>
    UnsupportedStream,
    /// <summary>
    /// Files contains some undisclosed information.
    /// </summary>
    UndisclosedInformation,
    /// <summary>
    /// File content is corrupted.
    /// </summary>
    FileCorrupted,
    /// <summary>
    /// Internal exception.
    /// </summary>
    Internal,
};

} }

#endif
