// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DOCXSAVEOPTIONS_H
#define ASPOSE_CELLS_DOCXSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PaginatedSaveOptions.h"

namespace Aspose { namespace Cells {

class DocxSaveOptions_Impl;

/// <summary>
/// Represents options of saving .docx file.
/// </summary>
class DocxSaveOptions : public PaginatedSaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DocxSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Represents options of saving .docx file.
    /// </summary>
    ASPOSE_CELLS_API DocxSaveOptions();
    /// <summary>
    /// Represents options of saving .docx file.
    /// </summary>
    /// <param name="saveAsImage">
    /// If True, the workbook will be converted into some pictures of .docx file.
    /// If False, the workbook will be converted into some tables of .docx file.</param>
    ASPOSE_CELLS_API explicit DocxSaveOptions(bool saveAsImage);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DocxSaveOptions(DocxSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DocxSaveOptions(const DocxSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DocxSaveOptions(const PaginatedSaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DocxSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DocxSaveOptions& operator=(const DocxSaveOptions& src);
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
