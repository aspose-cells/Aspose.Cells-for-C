// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_IPAGESAVINGCALLBACK_H
#define ASPOSE_CELLS_RENDERING_IPAGESAVINGCALLBACK_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Rendering {
    class PageStartSavingArgs;
    class PageEndSavingArgs;
} } }

namespace Aspose { namespace Cells { namespace Rendering {

/// <summary>
/// Control/Indicate progress of page saving process.
/// </summary>
class IPageSavingCallback {
public:
    /// <summary>
    /// Control/Indicate a page starts to be output.
    /// </summary>
    /// <param name="args">Info for a page starts saving process.</param>
    virtual void PageStartSaving(PageStartSavingArgs& args) = 0;
    /// <summary>
    /// Control/Indicate a page ends to be output.
    /// </summary>
    /// <param name="args">Info for a page ends saving process.</param>
    virtual void PageEndSaving(PageEndSavingArgs& args) = 0;
    
};

} } }

#endif
