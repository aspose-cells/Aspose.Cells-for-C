// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TXTSAVEOPTIONS_H
#define ASPOSE_CELLS_TXTSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/EncodingType.h"

#include "Aspose.Cells/CellValueFormatStrategy.h"
#include "Aspose.Cells/SaveFormat.h"
#include "Aspose.Cells/TxtValueQuoteType.h"

namespace Aspose { namespace Cells {
    class LightCellsDataProvider;
    class CellArea;
} }

namespace Aspose { namespace Cells {

class TxtSaveOptions_Impl;

/// <summary>
/// Represents the save options for csv/tab delimited/other text format.
/// </summary>
class TxtSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TxtSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates text file save options.
    /// </summary>
    ASPOSE_CELLS_API TxtSaveOptions();
    /// <summary>
    /// Creates text file save options.
    /// </summary>
    /// <param name="saveFormat">The file format.
    /// It should be <see cref="SaveFormat.Csv"/> or <see cref="SaveFormat.Tsv"/>,
    /// otherwise the saved format will be set as <see cref="SaveFormat.Csv"/> automatically.</param>
    ASPOSE_CELLS_API explicit TxtSaveOptions(SaveFormat saveFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TxtSaveOptions(TxtSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TxtSaveOptions(const TxtSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API TxtSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TxtSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TxtSaveOptions& operator=(const TxtSaveOptions& src);
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
    /// Gets and sets char Delimiter of text file.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetSeparator();
    /// <summary>
    /// Gets and sets char Delimiter of text file.
    /// </summary>
    ASPOSE_CELLS_API void SetSeparator(char16_t value);
    /// <summary>
    /// Gets and sets a string value as separator.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSeparatorString();
    /// <summary>
    /// Gets and sets a string value as separator.
    /// </summary>
    ASPOSE_CELLS_API void SetSeparatorString(const U16String& value);
    /// <summary>
    /// Gets and sets a string value as separator.
    /// </summary>
    ASPOSE_CELLS_API void SetSeparatorString(const char16_t* value);
    /// <summary>
    /// Gets and sets the default encoding.
    /// </summary>
    ASPOSE_CELLS_API EncodingType GetEncoding();
    /// <summary>
    /// Gets and sets the default encoding.
    /// </summary>
    ASPOSE_CELLS_API void SetEncoding(EncodingType value);
    /// <summary>
    /// Gets or sets how to quote values in the exported text file.
    /// </summary>
    ASPOSE_CELLS_API TxtValueQuoteType GetQuoteType();
    /// <summary>
    /// Gets or sets how to quote values in the exported text file.
    /// </summary>
    ASPOSE_CELLS_API void SetQuoteType(TxtValueQuoteType value);
    /// <summary>
    /// Gets and sets the format strategy when exporting the cell value as string.
    /// </summary>
    ASPOSE_CELLS_API CellValueFormatStrategy GetFormatStrategy();
    /// <summary>
    /// Gets and sets the format strategy when exporting the cell value as string.
    /// </summary>
    ASPOSE_CELLS_API void SetFormatStrategy(CellValueFormatStrategy value);
    /// <summary>
    /// The data provider for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API LightCellsDataProvider* GetLightCellsDataProvider();
    /// <summary>
    /// The data provider for saving workbook in light mode.
    /// </summary>
    ASPOSE_CELLS_API void SetLightCellsDataProvider(LightCellsDataProvider* value);
    /// <summary>
    /// Indicates whether leading blank rows and columns should be trimmed like what ms excel does.
    /// Default is true.
    /// </summary>
    /// <remarks>
    /// Same with the rule in ms excel, a row/column will not be taken as blank if it has custom style,
    /// even if it contains no cell data.
    /// When saving with LightCells mode, this option takes no effect.
    /// User should control the output range by the implementation of <see cref="LightCellsDataProvider"/>
    /// or by speicifing <see cref="ExportArea"/>
    /// </remarks>
    ASPOSE_CELLS_API bool GetTrimLeadingBlankRowAndColumn();
    /// <summary>
    /// Indicates whether leading blank rows and columns should be trimmed like what ms excel does.
    /// Default is true.
    /// </summary>
    /// <remarks>
    /// Same with the rule in ms excel, a row/column will not be taken as blank if it has custom style,
    /// even if it contains no cell data.
    /// When saving with LightCells mode, this option takes no effect.
    /// User should control the output range by the implementation of <see cref="LightCellsDataProvider"/>
    /// or by speicifing <see cref="ExportArea"/>
    /// </remarks>
    ASPOSE_CELLS_API void SetTrimLeadingBlankRowAndColumn(bool value);
    /// <summary>
    /// Indicates whether tailing blank cells in one row should be trimmed. Default is false.
    /// </summary>
    /// <remarks>
    /// When saving with LightCells mode and the <see cref="ExportArea"/> has not been specified,
    /// this option takes no effect and one row will be extended to just the last cell provided by
    /// the implementation <see cref="LightCellsDataProvider"/>
    /// </remarks>
    ASPOSE_CELLS_API bool GetTrimTailingBlankCells();
    /// <summary>
    /// Indicates whether tailing blank cells in one row should be trimmed. Default is false.
    /// </summary>
    /// <remarks>
    /// When saving with LightCells mode and the <see cref="ExportArea"/> has not been specified,
    /// this option takes no effect and one row will be extended to just the last cell provided by
    /// the implementation <see cref="LightCellsDataProvider"/>
    /// </remarks>
    ASPOSE_CELLS_API void SetTrimTailingBlankCells(bool value);
    /// <summary>
    /// Indicates whether separators should be output for blank row.
    /// Default value is false so by default the content for blank row will be empty.
    /// </summary>
    ASPOSE_CELLS_API bool GetKeepSeparatorsForBlankRow();
    /// <summary>
    /// Indicates whether separators should be output for blank row.
    /// Default value is false so by default the content for blank row will be empty.
    /// </summary>
    ASPOSE_CELLS_API void SetKeepSeparatorsForBlankRow(bool value);
    /// <summary>
    /// The range of cells to be exported.
    /// </summary>
    /// <remarks>If the exported area has been specified, <see cref="TrimLeadingBlankRowAndColumn"/>
    /// will takes no effect.
    /// </remarks>
    ASPOSE_CELLS_API CellArea GetExportArea();
    /// <summary>
    /// The range of cells to be exported.
    /// </summary>
    /// <remarks>If the exported area has been specified, <see cref="TrimLeadingBlankRowAndColumn"/>
    /// will takes no effect.
    /// </remarks>
    ASPOSE_CELLS_API void SetExportArea(const CellArea& value);
    /// <summary>
    /// Indicates whether the single quote sign should be exported as part of the value of one cell
    /// when <see cref="Style.QuotePrefix"/> is true for it. Default is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportQuotePrefix();
    /// <summary>
    /// Indicates whether the single quote sign should be exported as part of the value of one cell
    /// when <see cref="Style.QuotePrefix"/> is true for it. Default is false.
    /// </summary>
    ASPOSE_CELLS_API void SetExportQuotePrefix(bool value);
    /// <summary>
    /// Indicates whether exporting all sheets to the text file.
    /// If it is false, only export the activesheet, just like MS Excel.
    /// </summary>
    /// <remarks>
    /// The defult value is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetExportAllSheets();
    /// <summary>
    /// Indicates whether exporting all sheets to the text file.
    /// If it is false, only export the activesheet, just like MS Excel.
    /// </summary>
    /// <remarks>
    /// The defult value is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetExportAllSheets(bool value);
    
};

} }

#endif
