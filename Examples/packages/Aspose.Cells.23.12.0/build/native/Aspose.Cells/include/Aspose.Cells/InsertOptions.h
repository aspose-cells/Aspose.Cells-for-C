// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_INSERTOPTIONS_H
#define ASPOSE_CELLS_INSERTOPTIONS_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/CopyFormatType.h"

namespace Aspose { namespace Cells {

class InsertOptions_Impl;

/// <summary>
/// Represents the options of inserting.
/// </summary>
class InsertOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    InsertOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API InsertOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API InsertOptions(InsertOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API InsertOptions(const InsertOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~InsertOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API InsertOptions& operator=(const InsertOptions& src);
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
    /// </summary>
    ASPOSE_CELLS_API CopyFormatType GetCopyFormatType();
    /// <summary>
    /// </summary>
    ASPOSE_CELLS_API void SetCopyFormatType(CopyFormatType value);
    /// <summary>
    /// Indicates if references in other worksheets will be updated.
    /// </summary>
    ASPOSE_CELLS_API bool GetUpdateReference();
    /// <summary>
    /// Indicates if references in other worksheets will be updated.
    /// </summary>
    ASPOSE_CELLS_API void SetUpdateReference(bool value);
    
};

} }

#endif
