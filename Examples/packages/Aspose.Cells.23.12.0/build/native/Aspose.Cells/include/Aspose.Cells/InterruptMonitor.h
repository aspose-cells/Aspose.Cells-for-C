// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_INTERRUPTMONITOR_H
#define ASPOSE_CELLS_INTERRUPTMONITOR_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class InterruptMonitor_Impl;

/// <summary>
/// Represents all operator about the interrupt.
/// </summary>
class InterruptMonitor {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    InterruptMonitor_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API InterruptMonitor();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API InterruptMonitor(InterruptMonitor_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API InterruptMonitor(const InterruptMonitor& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~InterruptMonitor();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API InterruptMonitor& operator=(const InterruptMonitor& src);
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
    /// Mark the monitor as requesting interruption
    /// </summary>
    ASPOSE_CELLS_API bool IsInterruptionRequested();
    /// <summary>
    /// Interrupt the current operator.
    /// </summary>
    ASPOSE_CELLS_API void Interrupt();
    
};

} }

#endif
