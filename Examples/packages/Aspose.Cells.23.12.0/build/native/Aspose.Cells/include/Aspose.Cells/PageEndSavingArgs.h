// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PAGEENDSAVINGARGS_H
#define ASPOSE_CELLS_RENDERING_PAGEENDSAVINGARGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PageSavingArgs.h"

namespace Aspose { namespace Cells { namespace Rendering {

class PageEndSavingArgs_Impl;

/// <summary>
/// Info for a page ends saving process.
/// </summary>
class PageEndSavingArgs : public PageSavingArgs {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PageEndSavingArgs_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PageEndSavingArgs(PageEndSavingArgs_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PageEndSavingArgs(const PageEndSavingArgs& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PageEndSavingArgs(const PageSavingArgs& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PageEndSavingArgs();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PageEndSavingArgs& operator=(const PageEndSavingArgs& src);
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
    /// Gets or sets a value indicating whether having more pages to be output.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasMorePages();
    /// <summary>
    /// Gets or sets a value indicating whether having more pages to be output.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetHasMorePages(bool value);
    
};

} } }

#endif
