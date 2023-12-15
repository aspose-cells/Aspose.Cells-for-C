// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_SHEETPRINTINGPREVIEW_H
#define ASPOSE_CELLS_RENDERING_SHEETPRINTINGPREVIEW_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Worksheet;
} }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;

class SheetPrintingPreview_Impl;

/// <summary>
/// Worksheet printing preview.
/// </summary>
class SheetPrintingPreview {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SheetPrintingPreview_Impl* _impl;
    
public:
    /// <summary>
    /// The construct of SheetPrintingPreview
    /// </summary>
    /// <param name="sheet">Indicate which spreadsheet to be printed.</param>
    /// <param name="options">ImageOrPrintOptions contains some property of output</param>
    ASPOSE_CELLS_API SheetPrintingPreview(const Worksheet& sheet, const ImageOrPrintOptions& options);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SheetPrintingPreview(SheetPrintingPreview_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SheetPrintingPreview(const SheetPrintingPreview& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SheetPrintingPreview();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SheetPrintingPreview& operator=(const SheetPrintingPreview& src);
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
    /// Evaluate the total page count of this worksheet
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEvaluatedPageCount();
    
};

} } }

#endif
