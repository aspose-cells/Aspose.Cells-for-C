// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PAGESAVINGARGS_H
#define ASPOSE_CELLS_RENDERING_PAGESAVINGARGS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Rendering {

class PageSavingArgs_Impl;

/// <summary>
/// Info for a page saving process.
/// </summary>
class PageSavingArgs {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PageSavingArgs_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PageSavingArgs(PageSavingArgs_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PageSavingArgs(const PageSavingArgs& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PageSavingArgs();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PageSavingArgs& operator=(const PageSavingArgs& src);
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
    /// Current page index, zero based.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPageIndex();
    /// <summary>
    /// Total page count.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPageCount();
    
};

} } }

#endif
