// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PPTXSAVEOPTIONS_H
#define ASPOSE_CELLS_PPTXSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PaginatedSaveOptions.h"

#include "Aspose.Cells/AdjustFontSizeForRowType.h"

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Slides;

class PptxSaveOptions_Impl;

/// <summary>
/// Represents the pptx save options.
/// </summary>
class PptxSaveOptions : public PaginatedSaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PptxSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Represents the pptx save options.
    /// </summary>
    ASPOSE_CELLS_API PptxSaveOptions();
    /// <summary>
    /// Represents options of saving .pptx file.
    /// </summary>
    /// <param name="saveAsImage">
    /// If True, the workbook will be converted into some pictures of .pptx file.
    /// If False, the workbook will be converted into some tables of .pptx file.</param>
    ASPOSE_CELLS_API explicit PptxSaveOptions(bool saveAsImage);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PptxSaveOptions(PptxSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PptxSaveOptions(const PptxSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PptxSaveOptions(const PaginatedSaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PptxSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PptxSaveOptions& operator=(const PptxSaveOptions& src);
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
    /// Inidicates whether ignoring hidden rows when converting Excel to powerpoint.
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreHiddenRows();
    /// <summary>
    /// Inidicates whether ignoring hidden rows when converting Excel to powerpoint.
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreHiddenRows(bool value);
    /// <summary>
    /// Represents what type of line needs to be adjusted size of font if height of row is small.
    /// </summary>
    ASPOSE_CELLS_API AdjustFontSizeForRowType GetAdjustFontSizeForRowType();
    /// <summary>
    /// Represents what type of line needs to be adjusted size of font if height of row is small.
    /// </summary>
    ASPOSE_CELLS_API void SetAdjustFontSizeForRowType(AdjustFontSizeForRowType value);
    
};

} }

#endif
