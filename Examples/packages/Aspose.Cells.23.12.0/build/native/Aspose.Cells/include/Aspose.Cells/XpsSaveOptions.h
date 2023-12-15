// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XPSSAVEOPTIONS_H
#define ASPOSE_CELLS_XPSSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PaginatedSaveOptions.h"

namespace Aspose { namespace Cells {

class XpsSaveOptions_Impl;

/// <summary>
/// Represents the additional options when saving the file as the Xps.
/// </summary>
class XpsSaveOptions : public PaginatedSaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XpsSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates options for saving xps file.
    /// </summary>
    ASPOSE_CELLS_API XpsSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XpsSaveOptions(XpsSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XpsSaveOptions(const XpsSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API XpsSaveOptions(const PaginatedSaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XpsSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XpsSaveOptions& operator=(const XpsSaveOptions& src);
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
    
};

} }

#endif
