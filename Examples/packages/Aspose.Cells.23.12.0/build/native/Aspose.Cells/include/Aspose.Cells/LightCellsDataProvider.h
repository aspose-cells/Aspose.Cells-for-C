// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_LIGHTCELLSDATAPROVIDER_H
#define ASPOSE_CELLS_LIGHTCELLSDATAPROVIDER_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Row;
    class Cell;
} }

namespace Aspose { namespace Cells {

/// <summary>
/// Represents Data provider for saving large spreadsheet files in light weight mode.
/// </summary>
/// <remarks>
/// When saving a workbook by this mode, <see cref="StartSheet(int)"/> will be checked when saving every worksheet in the workbook.
/// For one sheet, if <see cref="StartSheet(int)"/> gives true, then all data and properties to be saved for rows/cells of this sheet
/// will be provided by the implementation of this interface.
/// In the first place, <see cref="NextRow()"/> will be called to get the next row index to be saved.
/// If a valid row index is returned(the row index must be in ascending order for the rows to be saved),
/// then a Row object representing this row will be provided by <see cref="StartRow(Row)"/> for the implementation to set its properties.
/// For one row, <see cref="NextCell()"/> will be checked firstly.
/// If a valid column index be returned(the column index must be in ascending order for all cells of current row),
/// then a Cell object representing this cell will be provided by <see cref="StartCell(Cell)"/> for implementation to set its data and properties.
/// After <see cref="StartCell(Cell)"/> the cell will be saved directly to the resultant spreadsheet file.
/// Then the next cell will be checked and processed.
/// <br></br>
/// Please note, user should only update values and properties for current Row/Cell object provided by corresponding method.
/// Because the cells data is written to the resultant file in streaming manner, most of other objects may have been written
/// to the resultant file, or have been gathered and written some global data for them. So when user updating other objects
/// while saving cells data, those operations may be not able to affect the saved data. Or even worse, those operations may
/// cause inconsistent data be save to the resultant file and finally make the file corrupted.
/// So, for all other objects such as shapes, column width and styles, conditional formattings, ...etc.,
/// please do not operate them in any methods of this implementation.
/// Instead, please manage them and adjust them to the final state before calling "Save" method of the Workbook.
/// </remarks>
class LightCellsDataProvider {
public:
    /// <summary>
    /// Starts to save a worksheet.
    /// </summary>
    /// <remarks>
    /// It will be called at the beginning of saving a worksheet during saving a workbook.
    /// If the provider needs to refer to <i><code>sheetIndex</code></i> later
    /// in startRow(Row) or startCell(Cell) method,
    /// that is, if the process needs to know which worksheet is being processed,
    /// the implementation should retain the <i><code>sheetIndex</code></i> value here.
    /// </remarks>
    /// <param name="sheetIndex">index of current sheet to be saved.</param>
    /// <returns>
    /// true if this provider will provide data for the given sheet; false if given sheet should use its normal data model(Cells).
    /// </returns>
    virtual bool StartSheet(int32_t sheetIndex) = 0;
    /// <summary>
    /// Gets the next row to be saved.
    /// </summary>
    /// <remarks>
    /// It will be called at the beginning of saving a row and its cells data(before <see cref="StartRow(Row)"/>).
    /// </remarks>
    /// <returns>
    /// the next row index to be saved. -1 means the end of current sheet data has been reached and no further row of current sheet to be saved.
    /// </returns>
    virtual int32_t NextRow() = 0;
    /// <summary>
    /// Starts to save data of one row.
    /// </summary>
    /// <remarks>
    /// It will be called at the beginning of saving a row and its cells data.
    /// If current row has some custom properties such as height, style, ...etc.,
    /// implementation should set those properties to given Row object here.
    /// </remarks>
    /// <param name="row">
    /// Row object for implementation to fill data. Its row index is the returned value of latest call of <see cref="NextRow()"/>.
    /// If the row has been initialized in the inner cells model, the existing row object will be used.
    /// Otherwise a temporary Row object will be used for implementation to fill data.
    /// </param>
    virtual void StartRow(Row& row) = 0;
    /// <summary>
    /// Gets next cell to be saved.
    /// </summary>
    /// <remarks>
    /// It will be called at the beginning of saving one cell.
    /// </remarks>
    /// <returns>
    /// column index of the next cell to be saved. -1 means the end of current row data has been reached and no further cell of current row to be saved.
    /// </returns>
    virtual int32_t NextCell() = 0;
    /// <summary>
    /// Starts to save data of one cell.
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <param name="cell">
    /// Cell object for implementation to fill data. Its column index is the returned value of latest call of <see cref="NextCell()"/>.
    /// If the cell has been initialized in the inner cells model, the existed cell object will be used.
    /// Otherwise a temporary Cell object will be used for implementation to fill data.
    /// </param>
    virtual void StartCell(Cell& cell) = 0;
    /// <summary>
    /// Checks whether the current string value of cell needs to be gathered into a global pool.
    /// </summary>
    /// <remarks>
    /// Gathering string values will take advantage only when there are many duplicated string values for the cells provided by this implementation.
    /// In this situation gathering string will save much memory and generate smaller resultant file.
    /// If there are many string values for the cells provided by LightCellsDataProvider but few of them are same,
    /// gathering string will cost more memory and time and has no advantage for the resultant file.
    /// </remarks>
    /// <returns>
    /// true if string value need to be gathered into a global pool for the resultant file.
    /// </returns>
    virtual bool IsGatherString() = 0;
    
};

} }

#endif
