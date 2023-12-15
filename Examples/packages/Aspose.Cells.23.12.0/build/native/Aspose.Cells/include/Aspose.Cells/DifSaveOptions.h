// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DIFSAVEOPTIONS_H
#define ASPOSE_CELLS_DIFSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"

namespace Aspose { namespace Cells {

class DifSaveOptions_Impl;

/// <summary>
/// Represents the options of saving dif file.
/// </summary>
class DifSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DifSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the options for saving DIF file.
    /// </summary>
    ASPOSE_CELLS_API DifSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DifSaveOptions(DifSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DifSaveOptions(const DifSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DifSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DifSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DifSaveOptions& operator=(const DifSaveOptions& src);
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
