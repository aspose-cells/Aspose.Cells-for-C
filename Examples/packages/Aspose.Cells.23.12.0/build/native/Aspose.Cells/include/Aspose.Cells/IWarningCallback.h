// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_IWARNINGCALLBACK_H
#define ASPOSE_CELLS_IWARNINGCALLBACK_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class WarningInfo;
} }

namespace Aspose { namespace Cells {

/// <summary>
/// Callback interface of warning.
/// </summary>
class IWarningCallback {
public:
    /// <summary>
    /// Our callback only needs to implement the "Warning" method.
    /// </summary>
    /// <param name="warningInfo"> warning info</param>
    virtual void Warning(WarningInfo& warningInfo) = 0;
    
};

} }

#endif
