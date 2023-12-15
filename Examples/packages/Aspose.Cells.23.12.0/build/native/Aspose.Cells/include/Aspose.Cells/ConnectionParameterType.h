// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_CONNECTIONPARAMETERTYPE_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_CONNECTIONPARAMETERTYPE_H

namespace Aspose { namespace Cells { namespace ExternalConnections {

/// <summary>
/// Specifies the parameter type of external connection
/// </summary>
enum class ConnectionParameterType {
    /// <summary>
    /// Get the parameter value from a cell on each refresh.
    /// </summary>
    Cell,
    /// <summary>
    /// Prompt the user on each refresh for a parameter value.
    /// </summary>
    Prompt,
    /// <summary>
    /// Use a constant value on each refresh for the parameter value.
    /// </summary>
    Value,
};

} } }

#endif
