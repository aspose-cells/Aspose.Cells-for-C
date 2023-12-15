// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ABSTRACTINTERRUPTMONITOR_H
#define ASPOSE_CELLS_ABSTRACTINTERRUPTMONITOR_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class AbstractInterruptMonitor_Bridge;

/// <summary>
/// Monitor for interruption requests in all time-consuming operations.
/// </summary>
class ASPOSE_CELLS_API2 AbstractInterruptMonitor {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AbstractInterruptMonitor_Bridge* _impl;
    
public:
    /// <summary>
    /// Indicates whether interruption is requested for current operation.
    /// If true then current operation will be interrupted.
    /// Implementation should perform fast and efficient check here, otherwise it may become another bottleneck for the procedure.
    /// </summary>
    virtual bool IsInterruptionRequested() = 0;
    /// <summary>
    /// When procedure is interrupted, whether terminate the procedure quietly or throw an Exception.
    /// Default is false, that is, when <see cref="IsInterruptionRequested"/> is true,
    /// a <see cref="CellsException"/> with code <see cref="ExceptionType.Interrupted"/> will be thrown.
    /// </summary>
    ASPOSE_CELLS_API virtual bool GetTerminateWithoutException();
    
};

} }

#endif
