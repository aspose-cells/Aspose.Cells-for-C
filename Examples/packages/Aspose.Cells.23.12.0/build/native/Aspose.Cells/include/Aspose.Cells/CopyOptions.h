// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_COPYOPTIONS_H
#define ASPOSE_CELLS_COPYOPTIONS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class CopyOptions_Impl;

/// <summary>
/// Represents the copy options.
/// </summary>
class CopyOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CopyOptions_Impl* _impl;
    
public:
    /// <summary>
    /// CopyOptions constructor.
    /// </summary>
    ASPOSE_CELLS_API CopyOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CopyOptions(CopyOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CopyOptions(const CopyOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CopyOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CopyOptions& operator=(const CopyOptions& src);
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
    /// Indicates whether keeping macros;
    /// </summary>
    /// <remarks>
    /// Only for copying workbook.
    /// </remarks>
    ASPOSE_CELLS_API bool GetKeepMacros();
    /// <summary>
    /// Indicates whether keeping macros;
    /// </summary>
    /// <remarks>
    /// Only for copying workbook.
    /// </remarks>
    ASPOSE_CELLS_API void SetKeepMacros(bool value);
    /// <summary>
    /// Indicates whether extend ranges when copying the range to adjacent range.
    /// </summary>
    /// <remarks>
    /// If it's true, only extends the range of the hyperlink,not adding a new hyperlink when copying hyperlinks to adjacent rows.
    /// </remarks>
    ASPOSE_CELLS_API bool GetExtendToAdjacentRange();
    /// <summary>
    /// Indicates whether extend ranges when copying the range to adjacent range.
    /// </summary>
    /// <remarks>
    /// If it's true, only extends the range of the hyperlink,not adding a new hyperlink when copying hyperlinks to adjacent rows.
    /// </remarks>
    ASPOSE_CELLS_API void SetExtendToAdjacentRange(bool value);
    /// <summary>
    /// Indicates whether copying the names.
    /// </summary>
    ASPOSE_CELLS_API bool GetCopyNames();
    /// <summary>
    /// Indicates whether copying the names.
    /// </summary>
    ASPOSE_CELLS_API void SetCopyNames(bool value);
    /// <summary>
    /// If the formula is not valid for the dest destination, only copy values.
    /// </summary>
    ASPOSE_CELLS_API bool GetCopyInvalidFormulasAsValues();
    /// <summary>
    /// If the formula is not valid for the dest destination, only copy values.
    /// </summary>
    ASPOSE_CELLS_API void SetCopyInvalidFormulasAsValues(bool value);
    /// <summary>
    /// Indicates whether copying column width in unit of characters.
    /// </summary>
    ASPOSE_CELLS_API bool GetColumnCharacterWidth();
    /// <summary>
    /// Indicates whether copying column width in unit of characters.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnCharacterWidth(bool value);
    /// <summary>
    /// In ms excel, when copying formulas which refer to other worksheets while copying a worksheet to another one,
    /// the copied formulas should refer to source workbook.
    /// However, for some situations user may need the copied formulas refer to worksheets with the same name
    /// in the same workbook, such as when those worksheets have been copied before this copy operation,
    /// then this property should be kept as true.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// </remarks>
    ASPOSE_CELLS_API bool GetReferToSheetWithSameName();
    /// <summary>
    /// In ms excel, when copying formulas which refer to other worksheets while copying a worksheet to another one,
    /// the copied formulas should refer to source workbook.
    /// However, for some situations user may need the copied formulas refer to worksheets with the same name
    /// in the same workbook, such as when those worksheets have been copied before this copy operation,
    /// then this property should be kept as true.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// </remarks>
    ASPOSE_CELLS_API void SetReferToSheetWithSameName(bool value);
    /// <summary>
    /// When copying the range in the same file and the chart refers to the source sheet,
    /// False means the copied chart's data source will not be changed.
    /// True means the copied chart's data source refers to the destination sheet.
    /// </summary>
    /// <remarks>
    /// The default value is false, it works as MS Excel.
    /// </remarks>
    ASPOSE_CELLS_API bool GetReferToDestinationSheet();
    /// <summary>
    /// When copying the range in the same file and the chart refers to the source sheet,
    /// False means the copied chart's data source will not be changed.
    /// True means the copied chart's data source refers to the destination sheet.
    /// </summary>
    /// <remarks>
    /// The default value is false, it works as MS Excel.
    /// </remarks>
    ASPOSE_CELLS_API void SetReferToDestinationSheet(bool value);
    
};

} }

#endif
