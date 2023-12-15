// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DELETEOPTIONS_H
#define ASPOSE_CELLS_DELETEOPTIONS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class DeleteOptions_Impl;

/// <summary>
/// Represents the setting of deleting rows/columns.
/// </summary>
class DeleteOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DeleteOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API DeleteOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DeleteOptions(DeleteOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DeleteOptions(const DeleteOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DeleteOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DeleteOptions& operator=(const DeleteOptions& src);
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
    /// Indicates if update references in other worksheets.
    /// </summary>
    ASPOSE_CELLS_API bool GetUpdateReference();
    /// <summary>
    /// Indicates if update references in other worksheets.
    /// </summary>
    ASPOSE_CELLS_API void SetUpdateReference(bool value);
    
};

} }

#endif
