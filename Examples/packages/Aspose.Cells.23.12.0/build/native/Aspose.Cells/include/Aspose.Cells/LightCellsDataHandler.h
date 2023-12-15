// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_LIGHTCELLSDATAHANDLER_H
#define ASPOSE_CELLS_LIGHTCELLSDATAHANDLER_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Worksheet;
    class Row;
    class Cell;
} }

namespace Aspose { namespace Cells {

/// <summary>
/// Represents cells data handler for reading large spreadsheet files in light weight mode.
/// </summary>
/// <remarks>
/// When reading a workbook by this mode, <see cref="StartSheet(Worksheet)"/> will be checked when reading every worksheet in the workbook.
/// For one sheet, if <see cref="StartSheet(Worksheet)"/> gives true, then all data and properties of rows/cells of this sheet will be checked
/// and processed by the implementation of this interface. For every row, <see cref="StartRow(int)"/> will be called to check whether it need to be processed.
/// If a row needs to be processed, properties of this row will be read firstly and user can access its properties by <see cref="ProcessRow(Row)"/>.
/// if row's cells need to be processed too, then <see cref="ProcessRow(Row)"/> should returns true and then <see cref="StartCell(int)"/> will be
/// called for every existing cell in this row to check whether one cell need to be processed. If one cell needs to be processed,
/// then <see cref="ProcessCell(Cell)"/> will be called to process the cell by the implementation of this interface.
/// <br></br>
/// Please note, user should only operate on the values and properties of current Row/Cell object provided by corresponding method.
/// Because the cells data is read from the template file in streaming manner, most of other objects may be reset/update later
/// after cells data has been loaded. So when user operating other objects in this implementation,
/// those operations may be not able to affect the objects existing in the workbook. Or even worse, those operations may
/// cause inconsistent data in the workbook and then cause unpected issue or exception later.
/// So, for all other objects such as shapes, column width and styles, conditional formattings, ...etc.,
/// please do not operate them in any methods of this implementation.
/// Instead, please manage them after the workbook has been constructed.
/// </remarks>
class LightCellsDataHandler {
public:
    /// <summary>
    /// Starts to process a worksheet.
    /// </summary>
    /// <remarks>
    /// It will be called before reading cells data of a worksheet.
    /// </remarks>
    /// <param name="sheet">the worksheet to read cells data.</param>
    /// <returns>
    /// whether this sheet's cells data needs to be processed. false to ignore this sheet.
    /// </returns>
    virtual bool StartSheet(Worksheet& sheet) = 0;
    /// <summary>
    /// Prepares to process a row.
    /// </summary>
    /// <param name="rowIndex">the index of next row to be processed</param>
    /// <returns>whether this row(properties or cells data) needs to be processed. false to ignore this row and its cells and check the next row.</returns>
    virtual bool StartRow(int32_t rowIndex) = 0;
    /// <summary>
    /// Starts to process one row.
    /// </summary>
    /// <remarks>
    /// It will be called after row's properties such as height, style, ...etc. have been read. However, cells in this row has not been read yet.
    /// </remarks>
    /// <param name="row">
    /// Row object which is being processed currently.
    /// </param>
    /// <returns>whether this row's cells need to be processed. false to ignore all cells in this row.</returns>
    virtual bool ProcessRow(Row& row) = 0;
    /// <summary>
    /// Prepares to process a cell.
    /// </summary>
    /// <remarks>
    /// It will be called when reaching an existing cell in current row. Current row is the row of last call of <see cref="ProcessRow(Row)"/>.
    /// </remarks>
    /// <param name="columnIndex">column index of the cell to be processed</param>
    /// <returns>whether this cell needs to be processed. false to ignore the cell and check the next one until reach the end of cells data of current row</returns>
    virtual bool StartCell(int32_t columnIndex) = 0;
    /// <summary>
    /// Starts to process one cell.
    /// </summary>
    /// <remarks>
    /// It will be called after one cell's data has been read.
    /// </remarks>
    /// <param name="cell">
    /// Cell object which is being processed currently
    /// </param>
    /// <returns>whether this cell needs to be kept in cells model of current sheet.
    /// Commonly it should be false so that all cells will not be kept in memory after being processed and then memory be saved.
    /// For some special purpose such as user needs to access some cells later after the whole workbook having been processed,
    /// user can make this method return true to keep those special cells in Cells model and access them later by APIs such as Cells[row, column].
    /// However, keeping cells data in Cells model will requires more memory and if all cells are kept then reading template file
    /// in LightCells mode will become same with reading it in normal way.</returns>
    virtual bool ProcessCell(Cell& cell) = 0;
    
};

} }

#endif
