// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XLSSAVEOPTIONS_H
#define ASPOSE_CELLS_XLSSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"

#include "Aspose.Cells/SaveFormat.h"

namespace Aspose { namespace Cells {
    class LightCellsDataProvider;
} }

namespace Aspose { namespace Cells {

class XlsSaveOptions_Impl;

/// <summary>
/// Represents the save options for the Excel 97-2003 file format: xls and xlt.
/// </summary>
class XlsSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XlsSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates options for saving Excel 97-2003 xls file.
    /// </summary>
    ASPOSE_CELLS_API XlsSaveOptions();
    /// <summary>
    /// Creates options for saving Excel 97-2003 xls/xlt file.
    /// </summary>
    /// <param name="saveFormat">The file format.
    /// It should be <see cref="SaveFormat.Excel97To2003"/> or <see cref="SaveFormat.Xlt"/>,
    /// otherwise the saved format will be set as <see cref="SaveFormat.Excel97To2003"/> automatically.</param>
    ASPOSE_CELLS_API explicit XlsSaveOptions(SaveFormat saveFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XlsSaveOptions(XlsSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XlsSaveOptions(const XlsSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API XlsSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XlsSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XlsSaveOptions& operator=(const XlsSaveOptions& src);
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
    /// The data provider for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API LightCellsDataProvider* GetLightCellsDataProvider();
    /// <summary>
    /// The data provider for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API void SetLightCellsDataProvider(LightCellsDataProvider* value);
    /// <summary>
    /// Indicates whether matching font color because there are 56 colors in the standard color palette.
    /// </summary>
    ASPOSE_CELLS_API bool GetMatchColor();
    /// <summary>
    /// Indicates whether matching font color because there are 56 colors in the standard color palette.
    /// </summary>
    ASPOSE_CELLS_API void SetMatchColor(bool value);
    
};

} }

#endif
