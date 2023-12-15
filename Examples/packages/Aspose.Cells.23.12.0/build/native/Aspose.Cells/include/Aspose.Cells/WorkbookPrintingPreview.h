// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_WORKBOOKPRINTINGPREVIEW_H
#define ASPOSE_CELLS_RENDERING_WORKBOOKPRINTINGPREVIEW_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Workbook;
} }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;

class WorkbookPrintingPreview_Impl;

/// <summary>
/// Workbook printing preview.
/// </summary>
class WorkbookPrintingPreview {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WorkbookPrintingPreview_Impl* _impl;
    
public:
    /// <summary>
    /// The construct of WorkbookPrintingPreview
    /// </summary>
    /// <param name="workbook">Indicate which workbook to be printed.</param>
    /// <param name="options">ImageOrPrintOptions contains some property of output</param>
    ASPOSE_CELLS_API WorkbookPrintingPreview(const Workbook& workbook, const ImageOrPrintOptions& options);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WorkbookPrintingPreview(WorkbookPrintingPreview_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WorkbookPrintingPreview(const WorkbookPrintingPreview& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WorkbookPrintingPreview();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WorkbookPrintingPreview& operator=(const WorkbookPrintingPreview& src);
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
    /// Evaluate the total page count of this workbook
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEvaluatedPageCount();
    
};

} } }

#endif
