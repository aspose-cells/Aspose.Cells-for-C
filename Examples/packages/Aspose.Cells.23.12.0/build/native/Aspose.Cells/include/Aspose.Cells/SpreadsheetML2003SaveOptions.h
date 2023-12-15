// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SPREADSHEETML2003SAVEOPTIONS_H
#define ASPOSE_CELLS_SPREADSHEETML2003SAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"

namespace Aspose { namespace Cells {

class SpreadsheetML2003SaveOptions_Impl;

/// <summary>
/// Represents the options for saving Excel 2003 spreadml file.
/// </summary>
class SpreadsheetML2003SaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SpreadsheetML2003SaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the options for saving Excel 2003 spreadml file.
    /// </summary>
    ASPOSE_CELLS_API SpreadsheetML2003SaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SpreadsheetML2003SaveOptions(SpreadsheetML2003SaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SpreadsheetML2003SaveOptions(const SpreadsheetML2003SaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API SpreadsheetML2003SaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SpreadsheetML2003SaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SpreadsheetML2003SaveOptions& operator=(const SpreadsheetML2003SaveOptions& src);
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
    /// Causes child elements to be indented.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// If the value is false, it will reduce the size of the xml file
    /// </remarks>
    ASPOSE_CELLS_API bool IsIndentedFormatting();
    /// <summary>
    /// Causes child elements to be indented.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// If the value is false, it will reduce the size of the xml file
    /// </remarks>
    ASPOSE_CELLS_API void SetIsIndentedFormatting(bool value);
    /// <summary>
    /// Limit as xls, the max row index is 65535 and the max column index is 255.
    /// </summary>
    ASPOSE_CELLS_API bool GetLimitAsXls();
    /// <summary>
    /// Limit as xls, the max row index is 65535 and the max column index is 255.
    /// </summary>
    ASPOSE_CELLS_API void SetLimitAsXls(bool value);
    /// <summary>
    /// The default value is false, it means that column index  will be ignored if the cell is contiguous to the previous cell.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportColumnIndexOfCell();
    /// <summary>
    /// The default value is false, it means that column index  will be ignored if the cell is contiguous to the previous cell.
    /// </summary>
    ASPOSE_CELLS_API void SetExportColumnIndexOfCell(bool value);
    
};

} }

#endif
