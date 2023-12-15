// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PASTEOPTIONS_H
#define ASPOSE_CELLS_PASTEOPTIONS_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/PasteOperationType.h"
#include "Aspose.Cells/PasteType.h"

namespace Aspose { namespace Cells {

class PasteOptions_Impl;

/// <summary>
/// Represents the paste special options.
/// </summary>
class PasteOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PasteOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PasteOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PasteOptions(PasteOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PasteOptions(const PasteOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PasteOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PasteOptions& operator=(const PasteOptions& src);
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
    /// The paste special type.
    /// </summary>
    ASPOSE_CELLS_API PasteType GetPasteType();
    /// <summary>
    /// The paste special type.
    /// </summary>
    ASPOSE_CELLS_API void SetPasteType(PasteType value);
    /// <summary>
    /// Indicates whether skips blank cells.
    /// </summary>
    ASPOSE_CELLS_API bool GetSkipBlanks();
    /// <summary>
    /// Indicates whether skips blank cells.
    /// </summary>
    ASPOSE_CELLS_API void SetSkipBlanks(bool value);
    /// <summary>
    /// True means only copying visible cells.
    /// </summary>
    ASPOSE_CELLS_API bool GetOnlyVisibleCells();
    /// <summary>
    /// True means only copying visible cells.
    /// </summary>
    ASPOSE_CELLS_API void SetOnlyVisibleCells(bool value);
    /// <summary>
    /// True to transpose rows and columns when the range is pasted. The default value is False.
    /// </summary>
    ASPOSE_CELLS_API bool GetTranspose();
    /// <summary>
    /// True to transpose rows and columns when the range is pasted. The default value is False.
    /// </summary>
    ASPOSE_CELLS_API void SetTranspose(bool value);
    /// <summary>
    /// Gets and sets the operation type when pasting range.
    /// </summary>
    ASPOSE_CELLS_API PasteOperationType GetOperationType();
    /// <summary>
    /// Gets and sets the operation type when pasting range.
    /// </summary>
    ASPOSE_CELLS_API void SetOperationType(PasteOperationType value);
    /// <summary>
    /// Ingore links to the original file.
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreLinksToOriginalFile();
    /// <summary>
    /// Ingore links to the original file.
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreLinksToOriginalFile(bool value);
    
};

} }

#endif
