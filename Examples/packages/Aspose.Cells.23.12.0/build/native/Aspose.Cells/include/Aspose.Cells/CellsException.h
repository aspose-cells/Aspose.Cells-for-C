// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_CELLSEXCEPTION_H
#define ASPOSE_CELLS_CELLSEXCEPTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ExceptionType.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

/// <summary>
/// The exception that is thrown when Aspose.Cells specified error occurs.
/// </summary>
class ASPOSE_CELLS_API3 CellsException {
public:
    /// <summary>
    /// Gets the custom exception code.
    /// </summary>
    /// <returns>The exception code as <see cref="ExceptionType"/></returns>
    virtual ExceptionType GetCode() const = 0;
    /// <summary>
    /// Gets the error message.
    /// </summary>
    /// <returns>The error message as <see cref="U16String"/></returns>
    virtual U16String GetErrorMessage() const = 0;
    /// <summary>
    /// Gets the inner exception. If there is no inner exception, return nullptr.
    /// </summary>
    /// <returns>The inner <see cref="CellsException"/></returns>
    virtual CellsException* GetInnerException() const = 0;
    
};

} }

#endif
