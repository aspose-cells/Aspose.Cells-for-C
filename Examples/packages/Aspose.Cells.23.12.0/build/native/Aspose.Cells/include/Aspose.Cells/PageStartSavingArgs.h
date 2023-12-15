// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PAGESTARTSAVINGARGS_H
#define ASPOSE_CELLS_RENDERING_PAGESTARTSAVINGARGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PageSavingArgs.h"

namespace Aspose { namespace Cells { namespace Rendering {

class PageStartSavingArgs_Impl;

/// <summary>
/// Info for a page starts saving process.
/// </summary>
class PageStartSavingArgs : public PageSavingArgs {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PageStartSavingArgs_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PageStartSavingArgs(PageStartSavingArgs_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PageStartSavingArgs(const PageStartSavingArgs& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PageStartSavingArgs(const PageSavingArgs& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PageStartSavingArgs();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PageStartSavingArgs& operator=(const PageStartSavingArgs& src);
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
    /// Gets or sets a value indicating whether the page should be output.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsToOutput();
    /// <summary>
    /// Gets or sets a value indicating whether the page should be output.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsToOutput(bool value);
    
};

} } }

#endif
