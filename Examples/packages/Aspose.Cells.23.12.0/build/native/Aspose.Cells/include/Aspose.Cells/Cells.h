// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLS_H
#define ASPOSE_CELLS_CELLS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ConsolidationFunction.h"
#include "Aspose.Cells/MemorySetting.h"
#include "Aspose.Cells/ShiftType.h"

namespace Aspose { namespace Cells { namespace Ods {
    class OdsCellFieldCollection;
} } }

namespace Aspose { namespace Cells {
    class Cell;
    class RowCollection;
    class CellArea;
    class Row;
    class Column;
    class Range;
    class Style;
    class TxtLoadOptions;
    class ColumnCollection;
    class StyleFlag;
    class PasteOptions;
    class CopyOptions;
    class DeleteOptions;
    class InsertOptions;
    class RangeCollection;
    class SubtotalSetting;
} }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Ods;

class Cells_Impl;

/// <summary>
/// Encapsulates a collection of cell relevant objects, such as <see cref="Cell"/>, <see cref="Row"/>, ...etc.
/// </summary>
/// <remarks>
/// </remarks>
class Cells {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Cells_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Cells(Cells_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Cells(const Cells& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Cells();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Cells& operator=(const Cells& src);
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
    /// Gets the list of fields of ods.
    /// </summary>
    ASPOSE_CELLS_API OdsCellFieldCollection GetOdsCellFields();
    /// <summary>
    /// Performs application-defined tasks associated with freeing, releasing, or
    /// resetting unmanaged resources.
    /// </summary>
    ASPOSE_CELLS_API void Dispose();
    /// <summary>
    /// Gets the total count of instantiated Cell objects.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Gets the total count of instantiated Cell objects.
    /// </summary>
    ASPOSE_CELLS_API int64_t GetCountLarge();
    /// <summary>
    /// Gets the cells enumerator.
    /// </summary>
    /// <returns>The cells enumerator</returns>
    /// <remarks>When traversing elements by the returned Enumerator, the cells collection
    /// should not be modified(such as operations that will cause new Cell/Row be instantiated or existing Cell/Row be deleted).
    /// Otherwise the enumerator may not be able to traverse all cells correctly(some elements may be traversed repeatedly or skipped).</remarks>
    ASPOSE_CELLS_API Enumerator<Cell> GetEnumerator();
    /// <summary>
    /// Gets the collection of <see cref="Row"/> objects that represents the individual rows in this worksheet.
    /// </summary>
    ASPOSE_CELLS_API RowCollection GetRows();
    /// <summary>
    /// Gets all merged cells.
    /// </summary>
    ASPOSE_CELLS_API Vector<CellArea> GetMergedAreas();
    /// <summary>
    /// Gets the <see cref="Cell"/> element or null at the specified cell row index and column index.
    /// </summary>
    /// <param name="row">Row index</param>
    /// <param name="column">Column index</param>
    /// <returns>Return Cell object if a Cell object exists.
    /// Return null if the cell does not exist.
    /// </returns>
    ASPOSE_CELLS_API Cell GetCell(int32_t row, int32_t column);
    /// <summary>
    /// Gets the <see cref="Row"/> element at the specified cell row index.
    /// </summary>
    /// <param name="row">Row index</param>
    /// <returns>
    /// If the row object does exist return Row object, otherwise return null.
    /// </returns>
    ASPOSE_CELLS_API Row GetRow(int32_t row);
    /// <summary>
    /// Gets the <see cref="Cell"/> element or null at the specified cell row index and column index.
    /// </summary>
    /// <param name="row">Row index</param>
    /// <param name="column">Column index</param>
    /// <returns>Return Cell object if a Cell object exists.
    /// Return null if the cell does not exist.
    /// </returns>
    ASPOSE_CELLS_API Cell CheckCell(int32_t row, int32_t column);
    /// <summary>
    /// Gets the <see cref="Row"/> element or at the specified cell row index.
    /// </summary>
    /// <param name="row">Row index</param>
    /// <returns>
    /// If the row object does exist return Row object, otherwise return null.
    /// </returns>
    ASPOSE_CELLS_API Row CheckRow(int32_t row);
    /// <summary>
    /// Gets the <see cref="Column"/> element or null at the specified column index.
    /// </summary>
    /// <param name="columnIndex">The column index.</param>
    /// <returns>The Column object.</returns>
    ASPOSE_CELLS_API Column CheckColumn(int32_t columnIndex);
    /// <summary>
    /// Checks whether a row at given index is hidden.
    /// </summary>
    /// <param name="rowIndex">row index</param>
    /// <returns>true if the row is hidden</returns>
    ASPOSE_CELLS_API bool IsRowHidden(int32_t rowIndex);
    /// <summary>
    /// Checks whether a column at given index is hidden.
    /// </summary>
    /// <param name="columnIndex">column index</param>
    /// <returns>true if the column is hidden.</returns>
    ASPOSE_CELLS_API bool IsColumnHidden(int32_t columnIndex);
    /// <summary>
    /// Adds a range object reference to cells
    /// </summary>
    /// <param name="rangeObject">The range object will be contained in the cells</param>
    ASPOSE_CELLS_API void AddRange(const Range& rangeObject);
    /// <summary>
    /// Creates a <see cref="Range"/> object from a range of cells.
    /// </summary>
    /// <param name="upperLeftCell">Upper left cell name.</param>
    /// <param name="lowerRightCell">Lower right cell name.</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API Range CreateRange(const U16String& upperLeftCell, const U16String& lowerRightCell);
    /// <summary>
    /// Creates a <see cref="Range"/> object from a range of cells.
    /// </summary>
    /// <param name="upperLeftCell">Upper left cell name.</param>
    /// <param name="lowerRightCell">Lower right cell name.</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API Range CreateRange(const char16_t* upperLeftCell, const char16_t* lowerRightCell);
    /// <summary>
    /// Creates a <see cref="Range"/> object from a range of cells.
    /// </summary>
    /// <param name="firstRow">First row of this range</param>
    /// <param name="firstColumn">First column of this range</param>
    /// <param name="totalRows">Number of rows</param>
    /// <param name="totalColumns">Number of columns</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API Range CreateRange(int32_t firstRow, int32_t firstColumn, int32_t totalRows, int32_t totalColumns);
    /// <summary>
    /// Creates a <see cref="Range"/> object from an address of the range.
    /// </summary>
    /// <param name="address">The address of the range.</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API Range CreateRange(const U16String& address);
    /// <summary>
    /// Creates a <see cref="Range"/> object from an address of the range.
    /// </summary>
    /// <param name="address">The address of the range.</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API Range CreateRange(const char16_t* address);
    /// <summary>
    /// Creates a <see cref="Range"/> object from rows of cells or columns of cells.
    /// </summary>
    /// <param name="firstIndex">First row index or first column index, zero based.</param>
    /// <param name="number">Total number of rows or columns, one based.</param>
    /// <param name="isVertical">True - Range created from columns of cells. False - Range created from rows of cells. </param>
    /// <returns>A <see cref="Range"/> object.</returns>
    ASPOSE_CELLS_API Range CreateRange(int32_t firstIndex, int32_t number, bool isVertical);
    /// <summary>
    /// Gets the <see cref="Cell"/> element at the specified cell row index and column index.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="column">Column index.</param>
    /// <returns>The <see cref="Cell"/> object.</returns>
    ASPOSE_CELLS_API Cell Get(int32_t row, int32_t column);
    /// <summary>
    /// Gets the <see cref="Cell"/> element at the specified cell name.
    /// </summary>
    /// <param name="cellName">Cell name,including its column letter and row number, for example A5.</param>
    /// <returns>A <see cref="Cell"/> object</returns>
    ASPOSE_CELLS_API Cell Get(const U16String& cellName);
    /// <summary>
    /// Gets the <see cref="Cell"/> element at the specified cell name.
    /// </summary>
    /// <param name="cellName">Cell name,including its column letter and row number, for example A5.</param>
    /// <returns>A <see cref="Cell"/> object</returns>
    ASPOSE_CELLS_API Cell Get(const char16_t* cellName);
    /// <summary>
    /// Gets or sets whether the cells data model should support Multi-Thread reading.
    /// Default value of this property is false.
    /// </summary>
    /// <remarks>
    /// If there are multiple threads to read Row/Cell objects in this collection concurrently,
    /// this property should be set as true, otherwise unexpected result may be produced.
    /// Supporting Multi-Thread reading may degrade the performance for accessing Row/Cell objects from this collection.
    /// Please note, some features cannot support Multi-Thread reading,
    /// such as formatting values(by <see cref="Cell.StringValue"/>, <see cref="Cell.DisplayStringValue"/>, .etc.).
    /// So, even with this property being set as true, those APIs still may give unexpected result for Multi-Thread reading.
    /// </remarks>
    ASPOSE_CELLS_API bool GetMultiThreadReading();
    /// <summary>
    /// Gets or sets whether the cells data model should support Multi-Thread reading.
    /// Default value of this property is false.
    /// </summary>
    /// <remarks>
    /// If there are multiple threads to read Row/Cell objects in this collection concurrently,
    /// this property should be set as true, otherwise unexpected result may be produced.
    /// Supporting Multi-Thread reading may degrade the performance for accessing Row/Cell objects from this collection.
    /// Please note, some features cannot support Multi-Thread reading,
    /// such as formatting values(by <see cref="Cell.StringValue"/>, <see cref="Cell.DisplayStringValue"/>, .etc.).
    /// So, even with this property being set as true, those APIs still may give unexpected result for Multi-Thread reading.
    /// </remarks>
    ASPOSE_CELLS_API void SetMultiThreadReading(bool value);
    /// <summary>
    /// Gets or sets the memory usage option for this cells.
    /// </summary>
    ASPOSE_CELLS_API MemorySetting GetMemorySetting();
    /// <summary>
    /// Gets or sets the memory usage option for this cells.
    /// </summary>
    ASPOSE_CELLS_API void SetMemorySetting(MemorySetting value);
    /// <summary>
    /// Clears all cell and row objects.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Gets and sets the default style.
    /// </summary>
    ASPOSE_CELLS_API Style GetStyle();
    /// <summary>
    /// Gets and sets the default style.
    /// </summary>
    ASPOSE_CELLS_API void SetStyle(const Style& value);
    /// <summary>
    /// Gets or sets the default column width in the worksheet, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetStandardWidthInch();
    /// <summary>
    /// Gets or sets the default column width in the worksheet, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetStandardWidthInch(double value);
    /// <summary>
    /// Gets or sets the default column width in the worksheet, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStandardWidthPixels();
    /// <summary>
    /// Gets or sets the default column width in the worksheet, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetStandardWidthPixels(int32_t value);
    /// <summary>
    /// Gets or sets the default column width in the worksheet, in unit of characters.
    /// </summary>
    ASPOSE_CELLS_API double GetStandardWidth();
    /// <summary>
    /// Gets or sets the default column width in the worksheet, in unit of characters.
    /// </summary>
    ASPOSE_CELLS_API void SetStandardWidth(double value);
    /// <summary>
    /// Gets or sets the default row height in this worksheet, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetStandardHeight();
    /// <summary>
    /// Gets or sets the default row height in this worksheet, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetStandardHeight(double value);
    /// <summary>
    /// Gets or sets the default row height in this worksheet, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStandardHeightPixels();
    /// <summary>
    /// Gets or sets the default row height in this worksheet, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetStandardHeightPixels(int32_t value);
    /// <summary>
    /// Gets or sets the default row height in this worksheet, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetStandardHeightInch();
    /// <summary>
    /// Gets or sets the default row height in this worksheet, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetStandardHeightInch(double value);
    /// <summary>
    /// Imports an array of formula into a worksheet.
    /// </summary>
    /// <param name="stringArray">Formula array.</param>
    /// <param name="firstRow">The row number of the first cell to import in.</param>
    /// <param name="firstColumn">The column number of the first cell to import in.</param>
    /// <param name="isVertical">Specifies to import data vertically or horizontally.</param>
    ASPOSE_CELLS_API void ImportFormulaArray(const Vector<U16String>& stringArray, int32_t firstRow, int32_t firstColumn, bool isVertical);
    /// <summary>
    /// Splits the text in the column to columns.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <param name="totalRows">The number of rows.</param>
    /// <param name="options">The split options.</param>
    ASPOSE_CELLS_API void TextToColumns(int32_t row, int32_t column, int32_t totalRows, const TxtLoadOptions& options);
    /// <summary>
    /// Import a CSV file to the cells.
    /// </summary>
    /// <param name="fileName">The CSV file name.</param>
    /// <param name="splitter">The splitter</param>
    /// <param name="convertNumericData"> Whether the string in text file is converted to numeric data.</param>
    /// <param name="firstRow">The row number of the first cell to import in.</param>
    /// <param name="firstColumn">The column number of the first cell to import in.</param>
    ASPOSE_CELLS_API void ImportCSV(const U16String& fileName, const U16String& splitter, bool convertNumericData, int32_t firstRow, int32_t firstColumn);
    /// <summary>
    /// Import a CSV file to the cells.
    /// </summary>
    /// <param name="fileName">The CSV file name.</param>
    /// <param name="splitter">The splitter</param>
    /// <param name="convertNumericData"> Whether the string in text file is converted to numeric data.</param>
    /// <param name="firstRow">The row number of the first cell to import in.</param>
    /// <param name="firstColumn">The column number of the first cell to import in.</param>
    ASPOSE_CELLS_API void ImportCSV(const char16_t* fileName, const char16_t* splitter, bool convertNumericData, int32_t firstRow, int32_t firstColumn);
    /// <summary>
    /// Import a CSV file to the cells.
    /// </summary>
    /// <param name="stream">The CSV file stream.</param>
    /// <param name="splitter">The splitter</param>
    /// <param name="convertNumericData"> Whether the string in text file is converted to numeric data.</param>
    /// <param name="firstRow">The row number of the first cell to import in.</param>
    /// <param name="firstColumn">The column number of the first cell to import in.</param>
    ASPOSE_CELLS_API void ImportCSV(const Vector<uint8_t>& stream, const U16String& splitter, bool convertNumericData, int32_t firstRow, int32_t firstColumn);
    /// <summary>
    /// Import a CSV file to the cells.
    /// </summary>
    /// <param name="stream">The CSV file stream.</param>
    /// <param name="splitter">The splitter</param>
    /// <param name="convertNumericData"> Whether the string in text file is converted to numeric data.</param>
    /// <param name="firstRow">The row number of the first cell to import in.</param>
    /// <param name="firstColumn">The column number of the first cell to import in.</param>
    ASPOSE_CELLS_API void ImportCSV(const Vector<uint8_t>& stream, const char16_t* splitter, bool convertNumericData, int32_t firstRow, int32_t firstColumn);
    /// <summary>
    /// Import a CSV file to the cells.
    /// </summary>
    /// <param name="fileName">The CSV file name.</param>
    /// <param name="options">The load options for reading text file</param>
    /// <param name="firstRow">The row number of the first cell to import in.</param>
    /// <param name="firstColumn">The column number of the first cell to import in.</param>
    ASPOSE_CELLS_API void ImportCSV(const U16String& fileName, const TxtLoadOptions& options, int32_t firstRow, int32_t firstColumn);
    /// <summary>
    /// Import a CSV file to the cells.
    /// </summary>
    /// <param name="fileName">The CSV file name.</param>
    /// <param name="options">The load options for reading text file</param>
    /// <param name="firstRow">The row number of the first cell to import in.</param>
    /// <param name="firstColumn">The column number of the first cell to import in.</param>
    ASPOSE_CELLS_API void ImportCSV(const char16_t* fileName, const TxtLoadOptions& options, int32_t firstRow, int32_t firstColumn);
    /// <summary>
    /// Import a CSV file to the cells.
    /// </summary>
    /// <param name="stream">The CSV file stream.</param>
    /// <param name="options">The load options for reading text file</param>
    /// <param name="firstRow">The row number of the first cell to import in.</param>
    /// <param name="firstColumn">The column number of the first cell to import in.</param>
    ASPOSE_CELLS_API void ImportCSV(const Vector<uint8_t>& stream, const TxtLoadOptions& options, int32_t firstRow, int32_t firstColumn);
    /// <summary>
    /// Gets or sets a value indicating whether all worksheet values are preserved as strings.
    /// Default is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetPreserveString();
    /// <summary>
    /// Gets or sets a value indicating whether all worksheet values are preserved as strings.
    /// Default is false.
    /// </summary>
    ASPOSE_CELLS_API void SetPreserveString(bool value);
    /// <summary>
    /// Merges a specified range of cells into a single cell.
    /// </summary>
    /// <param name="firstRow">First row of this range(zero based)</param>
    /// <param name="firstColumn">First column of this range(zero based)</param>
    /// <param name="totalRows">Number of rows(one based)</param>
    /// <param name="totalColumns">Number of columns(one based)</param>
    /// <remarks>
    /// Reference the merged cell via the address of the upper-left cell in the range.
    /// </remarks>
    ASPOSE_CELLS_API void Merge(int32_t firstRow, int32_t firstColumn, int32_t totalRows, int32_t totalColumns);
    /// <summary>
    /// Merges a specified range of cells into a single cell.
    /// </summary>
    /// <param name="firstRow">First row of this range(zero based)</param>
    /// <param name="firstColumn">First column of this range(zero based)</param>
    /// <param name="totalRows">Number of rows(one based)</param>
    /// <param name="totalColumns">Number of columns(one based)</param>
    /// <param name="mergeConflict">Merge conflict merged ranges.</param>
    /// <remarks>
    /// Reference the merged cell via the address of the upper-left cell in the range.
    /// If mergeConflict is true and the merged range conflicts with other merged cells,
    /// other merged cells will be  automatically removed.
    /// </remarks>
    ASPOSE_CELLS_API void Merge(int32_t firstRow, int32_t firstColumn, int32_t totalRows, int32_t totalColumns, bool mergeConflict);
    /// <summary>
    /// Merges a specified range of cells into a single cell.
    /// </summary>
    /// <param name="firstRow">First row of this range(zero based)</param>
    /// <param name="firstColumn">First column of this range(zero based)</param>
    /// <param name="totalRows">Number of rows(one based)</param>
    /// <param name="totalColumns">Number of columns(one based)</param>
    /// <param name="checkConflict">Indicates whether check the merged cells intersects other merged cells</param>
    /// <param name="mergeConflict">Merge conflict merged ranges.</param>
    /// <remarks>
    /// Reference the merged cell via the address of the upper-left cell in the range.
    /// If mergeConflict is true and the merged range conflicts with other merged cells,
    /// other merged cells will be  automatically removed.
    /// </remarks>
    ASPOSE_CELLS_API void Merge(int32_t firstRow, int32_t firstColumn, int32_t totalRows, int32_t totalColumns, bool checkConflict, bool mergeConflict);
    /// <summary>
    /// Unmerges a specified range of merged cells.
    /// </summary>
    /// <param name="firstRow">First row of this range(zero based)</param>
    /// <param name="firstColumn">First column of this range(zero based)</param>
    /// <param name="totalRows">Number of rows(one based)</param>
    /// <param name="totalColumns">Number of columns(one based)</param>
    ASPOSE_CELLS_API void UnMerge(int32_t firstRow, int32_t firstColumn, int32_t totalRows, int32_t totalColumns);
    /// <summary>
    /// Clears all merged ranges.
    /// </summary>
    ASPOSE_CELLS_API void ClearMergedCells();
    /// <summary>
    /// Hides a row.
    /// </summary>
    /// <param name="row">Row index.</param>
    ASPOSE_CELLS_API void HideRow(int32_t row);
    /// <summary>
    /// Unhides a row.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="height">Row height. The row's height will be changed only when the row is hidden and given height value is positive.</param>
    ASPOSE_CELLS_API void UnhideRow(int32_t row, double height);
    /// <summary>
    /// Hides multiple rows.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="totalRows">The row number.</param>
    ASPOSE_CELLS_API void HideRows(int32_t row, int32_t totalRows);
    /// <summary>
    /// Unhides the hidden rows.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="totalRows">The row number.</param>
    /// <param name="height">Row height. The row's height will be changed only when the row is hidden and given height value is positive.</param>
    ASPOSE_CELLS_API void UnhideRows(int32_t row, int32_t totalRows, double height);
    /// <summary>
    /// Sets row height in unit of pixels.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="pixels">Number of pixels.</param>
    ASPOSE_CELLS_API void SetRowHeightPixel(int32_t row, int32_t pixels);
    /// <summary>
    /// Sets row height in unit of inches.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="inches">Number of inches. It should be between 0 and 409.5/72.</param>
    ASPOSE_CELLS_API void SetRowHeightInch(int32_t row, double inches);
    /// <summary>
    /// Sets the height of the specified row.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="height">Height of row.In unit of point It should be between 0 and 409.5.</param>
    ASPOSE_CELLS_API void SetRowHeight(int32_t row, double height);
    /// <summary>
    /// Gets original row's height in unit of point if the row is hidden
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API double GetRowOriginalHeightPoint(int32_t row);
    /// <summary>
    /// Hides a column.
    /// </summary>
    /// <param name="column">Column index.</param>
    ASPOSE_CELLS_API void HideColumn(int32_t column);
    /// <summary>
    /// Unhides a column
    /// </summary>
    /// <param name="column">Column index.</param>
    /// <param name="width">Column width.</param>
    ASPOSE_CELLS_API void UnhideColumn(int32_t column, double width);
    /// <summary>
    /// Hide multiple columns.
    /// </summary>
    /// <param name="column">Column index.</param>
    /// <param name="totalColumns">Column number.</param>
    ASPOSE_CELLS_API void HideColumns(int32_t column, int32_t totalColumns);
    /// <summary>
    /// Unhide multiple columns.
    /// </summary>
    /// <param name="column">Column index.</param>
    /// <param name="totalColumns">Column number</param>
    /// <param name="width">Column width.</param>
    /// <remarks>
    /// Only applies the column width to the hidden columns.
    /// </remarks>
    ASPOSE_CELLS_API void UnhideColumns(int32_t column, int32_t totalColumns, double width);
    /// <summary>
    /// Gets the height of a specified row, in unit of points.
    /// </summary>
    /// <param name="row">Row index</param>
    /// <returns>Height of row</returns>
    ASPOSE_CELLS_API double GetRowHeight(int32_t row);
    /// <summary>
    /// Gets the height of a specified row.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <returns>Height of row.</returns>
    ASPOSE_CELLS_API double GetViewRowHeight(int32_t row);
    /// <summary>
    /// Gets the height of a specified row in unit of pixel.
    /// </summary>
    /// <param name="row">Row index</param>
    /// <returns>Height of row</returns>
    ASPOSE_CELLS_API int32_t GetRowHeightPixel(int32_t row);
    /// <summary>
    /// Gets the height of a specified row in unit of inches.
    /// </summary>
    /// <param name="row">Row index</param>
    /// <returns>Height of row</returns>
    ASPOSE_CELLS_API double GetRowHeightInch(int32_t row);
    /// <summary>
    /// Gets the height of a specified row in unit of inches.
    /// </summary>
    /// <param name="row">Row index</param>
    /// <returns>Height of row</returns>
    ASPOSE_CELLS_API double GetViewRowHeightInch(int32_t row);
    /// <summary>
    /// Sets column width in unit of pixels in normal view.
    /// </summary>
    /// <param name="column">Column index.</param>
    /// <param name="pixels">Number of pixels.</param>
    ASPOSE_CELLS_API void SetColumnWidthPixel(int32_t column, int32_t pixels);
    /// <summary>
    /// Sets column width in unit of inches  in normal view.
    /// </summary>
    /// <param name="column">Column index.</param>
    /// <param name="inches">Number of inches.</param>
    ASPOSE_CELLS_API void SetColumnWidthInch(int32_t column, double inches);
    /// <summary>
    /// Sets the width of the specified column in normal view.
    /// </summary>
    /// <param name="column">Column index.</param>
    /// <param name="width">Width of column.Column width must be between 0 and 255.</param>
    /// <remarks>To hide a column, sets column width to zero.</remarks>
    ASPOSE_CELLS_API void SetColumnWidth(int32_t column, double width);
    /// <summary>
    /// Gets the width of the specified column in normal view, in units of pixel.
    /// </summary>
    /// <param name="column">Column index</param>
    /// <returns>Width of column in normal view.</returns>
    ASPOSE_CELLS_API int32_t GetColumnWidthPixel(int32_t column);
    /// <summary>
    /// Gets the width of the specified column in normal view, in units of inches.
    /// </summary>
    /// <param name="column">Column index</param>
    /// <returns>Width of column</returns>
    ASPOSE_CELLS_API double GetColumnWidthInch(int32_t column);
    /// <summary>
    /// Gets the width(in unit of characters) of the specified column in normal view
    /// </summary>
    /// <param name="column">Column index</param>
    /// <returns>
    /// Width of column. For spreadsheet, column width is measured as the number of characters
    /// of the maximum digit width of the numbers 0~9 as rendered in the normal style's font.
    /// </returns>
    ASPOSE_CELLS_API double GetColumnWidth(int32_t column);
    /// <summary>
    /// Get the width in different view type.
    /// </summary>
    /// <param name="column">The column index.</param>
    /// <returns>the column width in unit of pixels</returns>
    ASPOSE_CELLS_API int32_t GetViewColumnWidthPixel(int32_t column);
    /// <summary>
    /// Sets the width of the column in different view.
    /// </summary>
    /// <param name="column">The column index.</param>
    /// <param name="pixels">The width in unit of pixels.</param>
    /// <remarks>
    /// If the current view type is <see cref="ViewType.PageLayoutView"/>, the column's width is same as printed width.
    /// </remarks>
    ASPOSE_CELLS_API void SetViewColumnWidthPixel(int32_t column, int32_t pixels);
    /// <summary>
    /// Minimum row index of cell which contains data or style.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMinRow();
    /// <summary>
    /// Maximum row index of cell which contains data or style.
    /// </summary>
    /// <remarks>
    /// Return -1 if there is no cell which contains data or style in the worksheet.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetMaxRow();
    /// <summary>
    /// Minimum column index of those cells that have been instantiated in the collection(does not include the column
    /// where style is defined for the whole column but no cell has been instantiated in it).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMinColumn();
    /// <summary>
    /// Maximum column index of those cells that have been instantiated in the collection(does not include the column
    /// where style is defined for the whole column but no cell has been instantiated in it).
    /// </summary>
    /// <remarks>
    /// Return -1 if there is no cell.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetMaxColumn();
    /// <summary>
    /// Minimum row index of cell which contains data.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMinDataRow();
    /// <summary>
    /// Maximum row index of cell which contains data.
    /// </summary>
    /// <remarks>
    /// Return -1 if there is no cell which contains data.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetMaxDataRow();
    /// <summary>
    /// Minimum column index of cell which contains data.
    /// </summary>
    /// <remarks>
    /// -1 will be returned if there is no cell which contains data.
    /// This property needs to iterate and check all cells in a worksheet,
    /// so it is a time-consumed progress and should not be invoked repeatedly.</remarks>
    ASPOSE_CELLS_API int32_t GetMinDataColumn();
    /// <summary>
    /// Maximum column index of cell which contains data.
    /// </summary>
    /// <remarks>
    /// -1 will be returned if there is no cell which contains data.
    /// This property needs to iterate and check all cells in a worksheet,
    /// so it is a time-consumed progress and should not be invoked repeatedly.</remarks>
    ASPOSE_CELLS_API int32_t GetMaxDataColumn();
    /// <summary>
    /// Gets the last row index of cell which contains data in the specified column.
    /// </summary>
    /// <param name="column">Column index.</param>
    /// <returns>last row index.</returns>
    ASPOSE_CELLS_API int32_t GetLastDataRow(int32_t column);
    /// <summary>
    /// Indicates that row height and default font height matches
    /// </summary>
    ASPOSE_CELLS_API bool IsDefaultRowHeightMatched();
    /// <summary>
    /// Indicates that row height and default font height matches
    /// </summary>
    ASPOSE_CELLS_API void SetIsDefaultRowHeightMatched(bool value);
    /// <summary>
    /// Indicates whether the row is default hidden.
    /// </summary>
    ASPOSE_CELLS_API bool IsDefaultRowHidden();
    /// <summary>
    /// Indicates whether the row is default hidden.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDefaultRowHidden(bool value);
    /// <summary>
    /// Gets the collection of <see cref="Column"/> objects that represents the individual columns in this worksheet.
    /// </summary>
    ASPOSE_CELLS_API ColumnCollection GetColumns();
    /// <summary>
    /// Applies formats for a whole column.
    /// </summary>
    /// <param name="column">The column index.</param>
    /// <param name="style">The style object which will be applied.</param>
    /// <param name="flag">Flags which indicates applied formatting properties.</param>
    ASPOSE_CELLS_API void ApplyColumnStyle(int32_t column, const Style& style, const StyleFlag& flag);
    /// <summary>
    /// Applies formats for a whole row.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="style">The style object which will be applied.</param>
    /// <param name="flag">Flags which indicates applied formatting properties.</param>
    ASPOSE_CELLS_API void ApplyRowStyle(int32_t row, const Style& style, const StyleFlag& flag);
    /// <summary>
    /// Applies formats for a whole worksheet.
    /// </summary>
    /// <param name="style">The style object which will be applied.</param>
    /// <param name="flag">Flags which indicates applied formatting properties.</param>
    ASPOSE_CELLS_API void ApplyStyle(const Style& style, const StyleFlag& flag);
    /// <summary>
    /// Copies data and formats of a whole column.
    /// </summary>
    /// <param name="sourceCells0">Source Cells object contains data and formats to copy.</param>
    /// <param name="sourceColumnIndex">Source column index.</param>
    /// <param name="destinationColumnIndex">Destination column index.</param>
    /// <param name="columnNumber">The copied column number.</param>
    /// <param name="pasteOptions">the options of pasting.</param>
    ASPOSE_CELLS_API void CopyColumns(const Cells& sourceCells0, int32_t sourceColumnIndex, int32_t destinationColumnIndex, int32_t columnNumber, const PasteOptions& pasteOptions);
    /// <summary>
    /// Copies data and formats of a whole column.
    /// </summary>
    /// <param name="sourceCells">Source Cells object contains data and formats to copy.</param>
    /// <param name="sourceColumnIndex">Source column index.</param>
    /// <param name="destinationColumnIndex">Destination column index.</param>
    ASPOSE_CELLS_API void CopyColumn(const Cells& sourceCells, int32_t sourceColumnIndex, int32_t destinationColumnIndex);
    /// <summary>
    /// Copies data and formats of a whole column.
    /// </summary>
    /// <param name="sourceCells0">Source Cells object contains data and formats to copy.</param>
    /// <param name="sourceColumnIndex">Source column index.</param>
    /// <param name="destinationColumnIndex">Destination column index.</param>
    /// <param name="columnNumber">The copied column number.</param>
    ASPOSE_CELLS_API void CopyColumns(const Cells& sourceCells0, int32_t sourceColumnIndex, int32_t destinationColumnIndex, int32_t columnNumber);
    /// <summary>
    /// Copies data and formats of the whole columns.
    /// </summary>
    /// <param name="sourceCells">Source Cells object contains data and formats to copy.</param>
    /// <param name="sourceColumnIndex">Source column index.</param>
    /// <param name="sourceTotalColumns">The number of the source columns.</param>
    /// <param name="destinationColumnIndex">Destination column index.</param>
    /// <param name="destinationTotalColumns">The number of the destination columns.</param>
    ASPOSE_CELLS_API void CopyColumns(const Cells& sourceCells, int32_t sourceColumnIndex, int32_t sourceTotalColumns, int32_t destinationColumnIndex, int32_t destinationTotalColumns);
    /// <summary>
    /// Copies data and formats of a whole row.
    /// </summary>
    /// <param name="sourceCells">Source Cells object contains data and formats to copy.</param>
    /// <param name="sourceRowIndex">Source row index.</param>
    /// <param name="destinationRowIndex">Destination row index.</param>
    ASPOSE_CELLS_API void CopyRow(const Cells& sourceCells, int32_t sourceRowIndex, int32_t destinationRowIndex);
    /// <summary>
    /// Copies data and formats of some whole rows.
    /// </summary>
    /// <param name="sourceCells">Source Cells object contains data and formats to copy.</param>
    /// <param name="sourceRowIndex">Source row index.</param>
    /// <param name="destinationRowIndex">Destination row index.</param>
    /// <param name="rowNumber">The copied row number.</param>
    ASPOSE_CELLS_API void CopyRows(const Cells& sourceCells, int32_t sourceRowIndex, int32_t destinationRowIndex, int32_t rowNumber);
    /// <summary>
    /// Copies data and formats of some whole rows.
    /// </summary>
    /// <param name="sourceCells0">Source Cells object contains data and formats to copy.</param>
    /// <param name="sourceRowIndex">Source row index.</param>
    /// <param name="destinationRowIndex">Destination row index.</param>
    /// <param name="rowNumber">The copied row number.</param>
    /// <param name="copyOptions">The copy options.</param>
    ASPOSE_CELLS_API void CopyRows(const Cells& sourceCells0, int32_t sourceRowIndex, int32_t destinationRowIndex, int32_t rowNumber, const CopyOptions& copyOptions);
    /// <summary>
    /// Copies data and formats of some whole rows.
    /// </summary>
    /// <param name="sourceCells0">Source Cells object contains data and formats to copy.</param>
    /// <param name="sourceRowIndex">Source row index.</param>
    /// <param name="destinationRowIndex">Destination row index.</param>
    /// <param name="rowNumber">The copied row number.</param>
    /// <param name="copyOptions">The copy options.</param>
    /// <param name="pasteOptions">the options of pasting.</param>
    ASPOSE_CELLS_API void CopyRows(const Cells& sourceCells0, int32_t sourceRowIndex, int32_t destinationRowIndex, int32_t rowNumber, const CopyOptions& copyOptions, const PasteOptions& pasteOptions);
    /// <summary>
    /// Gets the outline level (zero-based) of the row.
    /// </summary>
    /// <param name="rowIndex">The row index.</param>
    /// <returns>The outline level (zero-based) of the row.</returns>
    /// <remarks>If the row is not grouped, returns zero.</remarks>
    ASPOSE_CELLS_API int32_t GetGroupedRowOutlineLevel(int32_t rowIndex);
    /// <summary>
    /// Gets the outline level (zero-based) of the column.
    /// </summary>
    /// <param name="columnIndex">The column index</param>
    /// <returns>The outline level of the column</returns>
    /// <remarks>If the column is not grouped, returns zero.</remarks>
    ASPOSE_CELLS_API int32_t GetGroupedColumnOutlineLevel(int32_t columnIndex);
    /// <summary>
    /// Gets the max grouped column outline level (zero-based).
    /// </summary>
    /// <returns> The max grouped column outline level (zero-based)</returns>
    ASPOSE_CELLS_API int32_t GetMaxGroupedColumnOutlineLevel();
    /// <summary>
    /// Gets the max grouped row outline level (zero-based).
    /// </summary>
    /// <returns> The max grouped row outline level (zero-based)</returns>
    ASPOSE_CELLS_API int32_t GetMaxGroupedRowOutlineLevel();
    /// <summary>
    /// Expands the grouped rows/columns.
    /// </summary>
    /// <param name="isVertical">True, expands the grouped rows.</param>
    /// <param name="index">The row/column index</param>
    ASPOSE_CELLS_API void ShowGroupDetail(bool isVertical, int32_t index);
    /// <summary>
    /// Collapses the grouped rows/columns.
    /// </summary>
    /// <param name="isVertical">True, collapse the grouped rows.</param>
    /// <param name="index">The row/column index</param>
    ASPOSE_CELLS_API void HideGroupDetail(bool isVertical, int32_t index);
    /// <summary>
    /// Ungroups columns.
    /// </summary>
    /// <param name="firstIndex">The first column index to be ungrouped.</param>
    /// <param name="lastIndex">The last column index to be ungrouped.</param>
    ASPOSE_CELLS_API void UngroupColumns(int32_t firstIndex, int32_t lastIndex);
    /// <summary>
    /// Groups columns.
    /// </summary>
    /// <param name="firstIndex">The first column index to be grouped.</param>
    /// <param name="lastIndex">The last column index to be grouped.</param>
    ASPOSE_CELLS_API void GroupColumns(int32_t firstIndex, int32_t lastIndex);
    /// <summary>
    /// Groups columns.
    /// </summary>
    /// <param name="firstIndex">The first column index to be grouped.</param>
    /// <param name="lastIndex">The last column index to be grouped.</param>
    /// <param name="isHidden">Specifies if the grouped columns are hidden.</param>
    ASPOSE_CELLS_API void GroupColumns(int32_t firstIndex, int32_t lastIndex, bool isHidden);
    /// <summary>
    /// Ungroups rows.
    /// </summary>
    /// <param name="firstIndex">The first row index to be ungrouped.</param>
    /// <param name="lastIndex">The last row index to be ungrouped.</param>
    /// <param name="isAll">True, removes all grouped info.Otherwise, remove the outer group info.</param>
    ASPOSE_CELLS_API void UngroupRows(int32_t firstIndex, int32_t lastIndex, bool isAll);
    /// <summary>
    /// Ungroups rows.
    /// </summary>
    /// <param name="firstIndex">The first row index to be ungrouped.</param>
    /// <param name="lastIndex">The last row index to be ungrouped.</param>
    /// <remarks>
    /// Only removes outer group info.
    /// </remarks>
    ASPOSE_CELLS_API void UngroupRows(int32_t firstIndex, int32_t lastIndex);
    /// <summary>
    /// Groups rows.
    /// </summary>
    /// <param name="firstIndex">The first row index to be grouped.</param>
    /// <param name="lastIndex">The last row index to be grouped.</param>
    /// <param name="isHidden">Specifies if the grouped rows are hidden.</param>
    ASPOSE_CELLS_API void GroupRows(int32_t firstIndex, int32_t lastIndex, bool isHidden);
    /// <summary>
    /// Groups rows.
    /// </summary>
    /// <param name="firstIndex">The first row index to be grouped.</param>
    /// <param name="lastIndex">The last row index to be grouped.</param>
    ASPOSE_CELLS_API void GroupRows(int32_t firstIndex, int32_t lastIndex);
    /// <summary>
    /// Deletes a column.
    /// </summary>
    /// <param name="columnIndex">Index of the column to be deleted.</param>
    /// <param name="updateReference">Indicates whether update references in other worksheets.</param>
    ASPOSE_CELLS_API void DeleteColumn(int32_t columnIndex, bool updateReference);
    /// <summary>
    /// Deletes a column.
    /// </summary>
    /// <param name="columnIndex">Index of the column to be deleted.</param>
    ASPOSE_CELLS_API void DeleteColumn(int32_t columnIndex);
    /// <summary>
    /// Deletes several columns.
    /// </summary>
    /// <param name="columnIndex">Index of the first column to be deleted.</param>
    /// <param name="totalColumns">Count of columns to be deleted.</param>
    /// <param name="updateReference">Indicates whether update references in other worksheets.</param>
    ASPOSE_CELLS_API void DeleteColumns(int32_t columnIndex, int32_t totalColumns, bool updateReference);
    /// <summary>
    /// Check whether the range could be deleted.
    /// </summary>
    /// <param name="startRow">The start row index of the range.</param>
    /// <param name="startColumn">The start column index of the range.</param>
    /// <param name="totalRows">The number of the rows in the range.</param>
    /// <param name="totalColumns">The number of the columns in the range.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool IsDeletingRangeEnabled(int32_t startRow, int32_t startColumn, int32_t totalRows, int32_t totalColumns);
    /// <summary>
    /// Deletes a row.
    /// </summary>
    /// <param name="rowIndex">Index of the row to be deleted.</param>
    ASPOSE_CELLS_API void DeleteRow(int32_t rowIndex);
    /// <summary>
    /// Deletes several rows.
    /// </summary>
    /// <param name="rowIndex">The first row index to be deleted.</param>
    /// <param name="totalRows">Count of rows to be deleted.</param>
    /// <remarks>
    /// If the deleted range contains the top part(not whole) of the table(ListObject),
    /// the ranged could not be deleted and nothing will be done.
    /// It works in the same way with MS Excel.
    /// </remarks>
    ASPOSE_CELLS_API bool DeleteRows(int32_t rowIndex, int32_t totalRows);
    /// <summary>
    /// Deletes a row.
    /// </summary>
    /// <param name="rowIndex">Index of the row to be deleted.</param>
    /// <param name="updateReference">Indicates whether update references in other worksheets.</param>
    ASPOSE_CELLS_API void DeleteRow(int32_t rowIndex, bool updateReference);
    /// <summary>
    /// Deletes multiple rows in the worksheet.
    /// </summary>
    /// <param name="rowIndex">Index of the first row to be deleted.</param>
    /// <param name="totalRows">Count of rows to be deleted.</param>
    /// <param name="updateReference">Indicates whether update references in other worksheets.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool DeleteRows(int32_t rowIndex, int32_t totalRows, bool updateReference);
    /// <summary>
    /// Delete all blank columns which do not contain any data.
    /// </summary>
    ASPOSE_CELLS_API void DeleteBlankColumns();
    /// <summary>
    /// Delete all blank columns which do not contain any data.
    /// </summary>
    /// <param name="options">The options of deleting range.</param>
    ASPOSE_CELLS_API void DeleteBlankColumns(const DeleteOptions& options);
    /// <summary>
    /// Checks whether given column is blank(does not contain any data).
    /// </summary>
    /// <param name="columnIndex">the column index</param>
    /// <returns>true if given column does not contain any data</returns>
    ASPOSE_CELLS_API bool IsBlankColumn(int32_t columnIndex);
    /// <summary>
    /// Delete all blank rows which do not contain any data or other object.
    /// </summary>
    ASPOSE_CELLS_API void DeleteBlankRows();
    /// <summary>
    /// Delete all blank rows which do not contain any data or other object.
    /// </summary>
    /// <param name="options">The options of deleting range.</param>
    /// <remarks>
    /// For blank rows that will be deleted, it is not only required that <see cref="Row.IsBlank"/> should be true,
    /// but also there should be no visible comment defined for any cell in those rows,
    /// and no pivot table whose range intersects with them.
    /// </remarks>
    ASPOSE_CELLS_API void DeleteBlankRows(const DeleteOptions& options);
    /// <summary>
    /// Inserts some columns into the worksheet.
    /// </summary>
    /// <param name="columnIndex">Column index.</param>
    /// <param name="totalColumns">The number of columns.</param>
    ASPOSE_CELLS_API void InsertColumns(int32_t columnIndex, int32_t totalColumns);
    /// <summary>
    /// Inserts some columns into the worksheet.
    /// </summary>
    /// <param name="columnIndex">Column index.</param>
    /// <param name="totalColumns">The number of columns.</param>
    /// <param name="updateReference">Indicates if references in other worksheets will be updated.</param>
    ASPOSE_CELLS_API void InsertColumns(int32_t columnIndex, int32_t totalColumns, bool updateReference);
    /// <summary>
    /// Inserts a new column into the worksheet.
    /// </summary>
    /// <param name="columnIndex">Column index.</param>
    /// <param name="updateReference">Indicates if references in other worksheets will be updated.</param>
    ASPOSE_CELLS_API void InsertColumn(int32_t columnIndex, bool updateReference);
    /// <summary>
    /// Inserts a new column into the worksheet.
    /// </summary>
    /// <param name="columnIndex">Column index.</param>
    ASPOSE_CELLS_API void InsertColumn(int32_t columnIndex);
    /// <summary>
    /// Inserts multiple rows into the worksheet.
    /// </summary>
    /// <param name="rowIndex">Row index.</param>
    /// <param name="totalRows">Number of rows to be inserted.</param>
    /// <param name="updateReference">Indicates if references in other worksheets will be updated.</param>
    ASPOSE_CELLS_API void InsertRows(int32_t rowIndex, int32_t totalRows, bool updateReference);
    /// <summary>
    /// Inserts multiple rows into the worksheet.
    /// </summary>
    /// <param name="rowIndex">Row index.</param>
    /// <param name="totalRows">Number of rows to be inserted.</param>
    /// <param name="options">Indicates if references in other worksheets will be updated.</param>
    ASPOSE_CELLS_API void InsertRows(int32_t rowIndex, int32_t totalRows, const InsertOptions& options);
    /// <summary>
    /// Inserts multiple rows into the worksheet.
    /// </summary>
    /// <param name="rowIndex">Row index.</param>
    /// <param name="totalRows">Number of rows to be inserted.</param>
    ASPOSE_CELLS_API void InsertRows(int32_t rowIndex, int32_t totalRows);
    /// <summary>
    /// Inserts a new row into the worksheet.
    /// </summary>
    /// <param name="rowIndex">Row index.</param>
    ASPOSE_CELLS_API void InsertRow(int32_t rowIndex);
    /// <summary>
    /// Gets the collection of <see cref="Range"/> objects created at run time.
    /// </summary>
    ASPOSE_CELLS_API RangeCollection GetRanges();
    /// <summary>
    /// Clears contents and formatting of a range.
    /// </summary>
    /// <param name="range">Range to be cleared.</param>
    ASPOSE_CELLS_API void ClearRange(const CellArea& range);
    /// <summary>
    /// Clears contents and formatting of a range.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="endColumn">End column index.</param>
    ASPOSE_CELLS_API void ClearRange(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn);
    /// <summary>
    /// Clears contents of a range.
    /// </summary>
    /// <param name="range">Range to be cleared.</param>
    ASPOSE_CELLS_API void ClearContents(const CellArea& range);
    /// <summary>
    /// Clears contents of a range.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="endColumn">End column index.</param>
    ASPOSE_CELLS_API void ClearContents(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn);
    /// <summary>
    /// Clears formatting of a range.
    /// </summary>
    /// <param name="range">Range to be cleared.</param>
    ASPOSE_CELLS_API void ClearFormats(const CellArea& range);
    /// <summary>
    /// Clears formatting of a range.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="endColumn">End column index.</param>
    ASPOSE_CELLS_API void ClearFormats(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn);
    /// <summary>
    /// Gets the last cell in this worksheet.
    /// </summary>
    /// <remarks>
    /// Returns null if there is no data in the worksheet.
    /// </remarks>
    ASPOSE_CELLS_API Cell GetLastCell();
    /// <summary>
    /// Link to a xml map.
    /// </summary>
    /// <param name="mapName">name of xml map</param>
    /// <param name="row">row of the destination cell</param>
    /// <param name="column">column of the destination cell</param>
    /// <param name="path">path of xml element in xml map</param>
    /// e.g. A xml map element structure:
    /// -RootElement
    /// |-Attribute1
    /// |-SubElement
    /// |-Attribute2
    /// |-Attribute3
    /// To link "Attribute1", path is "/RootElement/Attribute1"
    /// To link "Attribute2", path is "/RootElement/SubElement/Attribute2"
    /// To link whole "SubElement", path is "/RootElement/SubElement"
    ASPOSE_CELLS_API void LinkToXmlMap(const U16String& mapName, int32_t row, int32_t column, const U16String& path);
    /// <summary>
    /// Link to a xml map.
    /// </summary>
    /// <param name="mapName">name of xml map</param>
    /// <param name="row">row of the destination cell</param>
    /// <param name="column">column of the destination cell</param>
    /// <param name="path">path of xml element in xml map</param>
    /// e.g. A xml map element structure:
    /// -RootElement
    /// |-Attribute1
    /// |-SubElement
    /// |-Attribute2
    /// |-Attribute3
    /// To link "Attribute1", path is "/RootElement/Attribute1"
    /// To link "Attribute2", path is "/RootElement/SubElement/Attribute2"
    /// To link whole "SubElement", path is "/RootElement/SubElement"
    ASPOSE_CELLS_API void LinkToXmlMap(const char16_t* mapName, int32_t row, int32_t column, const char16_t* path);
    /// <summary>
    /// Gets the max range which includes data, merged cells and shapes.
    /// </summary>
    /// <remarks>
    /// Reutrns null if the worksheet is empty since Aspose.Cells 21.5.2.
    /// </remarks>
    ASPOSE_CELLS_API Range GetMaxDisplayRange();
    /// <summary>
    /// Gets the first cell in this worksheet.
    /// </summary>
    /// <remarks>
    /// Returns null if there is no data in the worksheet.
    /// </remarks>
    ASPOSE_CELLS_API Cell GetFirstCell();
    /// <summary>
    /// Gets the last cell in this row.
    /// </summary>
    /// <param name="rowIndex">Row index.</param>
    /// <returns>Cell object.</returns>
    ASPOSE_CELLS_API Cell EndCellInRow(int32_t rowIndex);
    /// <summary>
    /// Gets the last cell in this column.
    /// </summary>
    /// <param name="columnIndex">Column index.</param>
    /// <returns>Cell object.</returns>
    ASPOSE_CELLS_API Cell EndCellInColumn(int16_t columnIndex);
    /// <summary>
    /// Gets the last cell with maximum column index in this range.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endColumn">End column index.</param>
    /// <returns>Cell object.</returns>
    ASPOSE_CELLS_API Cell EndCellInColumn(int32_t startRow, int32_t endRow, int16_t startColumn, int16_t endColumn);
    /// <summary>
    /// Gets the last cell with maximum row index in this range.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endColumn">End column index.</param>
    /// <returns>Cell object.</returns>
    ASPOSE_CELLS_API Cell EndCellInRow(int32_t startRow, int32_t endRow, int32_t startColumn, int32_t endColumn);
    /// <summary>
    /// Moves the range.
    /// </summary>
    /// <param name="sourceArea">The range which should be moved.</param>
    /// <param name="destRow">The dest row.</param>
    /// <param name="destColumn">The dest column.</param>
    ASPOSE_CELLS_API void MoveRange(const CellArea& sourceArea, int32_t destRow, int32_t destColumn);
    /// <summary>
    /// Insert cut range.
    /// </summary>
    /// <param name="cutRange">The cut range.</param>
    /// <param name="row">The row.</param>
    /// <param name="column">The column.</param>
    /// <param name="shiftType">The shift type .</param>
    ASPOSE_CELLS_API void InsertCutCells(const Range& cutRange, int32_t row, int32_t column, ShiftType shiftType);
    /// <summary>
    /// Inserts a range of cells and shift cells according to the shift option.
    /// </summary>
    /// <param name="area">Shift area.</param>
    /// <param name="shiftNumber">Number of rows or columns to be inserted.</param>
    /// <param name="shiftType">Shift cells option.</param>
    /// <param name="updateReference">Indicates whether update references in other worksheets.</param>
    ASPOSE_CELLS_API void InsertRange(const CellArea& area, int32_t shiftNumber, ShiftType shiftType, bool updateReference);
    /// <summary>
    /// Inserts a range of cells and shift cells according to the shift option.
    /// </summary>
    /// <param name="area">Shift area.</param>
    /// <param name="shiftType">Shift cells option.</param>
    ASPOSE_CELLS_API void InsertRange(const CellArea& area, ShiftType shiftType);
    /// <summary>
    /// Inserts a range of cells and shift cells according to the shift option.
    /// </summary>
    /// <param name="area">Shift area.</param>
    /// <param name="shiftNumber">Number of rows or columns to be inserted.</param>
    /// <param name="shiftType">Shift cells option.</param>
    ASPOSE_CELLS_API void InsertRange(const CellArea& area, int32_t shiftNumber, ShiftType shiftType);
    /// <summary>
    /// Deletes a range of cells and shift cells according to the shift option.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="endColumn">End column index.</param>
    /// <param name="shiftType">Shift cells option.</param>
    ASPOSE_CELLS_API void DeleteRange(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn, ShiftType shiftType);
    /// <summary>
    /// Retrieves subtotals setting of the range.
    /// </summary>
    /// <param name="ca">The range</param>
    /// <returns></returns>
    ASPOSE_CELLS_API SubtotalSetting RetrieveSubtotalSetting(const CellArea& ca);
    /// <summary>
    /// Creates subtotals for the range.
    /// </summary>
    /// <param name="ca">The range</param>
    /// <param name="groupBy">The field to group by, as a zero-based integer offset</param>
    /// <param name="function">The subtotal function.</param>
    /// <param name="totalList">An array of zero-based field offsets, indicating the fields to which the subtotals are added.</param>
    ASPOSE_CELLS_API void Subtotal(const CellArea& ca, int32_t groupBy, ConsolidationFunction function, const Vector<int32_t>& totalList);
    /// <summary>
    /// Creates subtotals for the range.
    /// </summary>
    /// <param name="ca">The range</param>
    /// <param name="groupBy">The field to group by, as a zero-based integer offset</param>
    /// <param name="function">The subtotal function.</param>
    /// <param name="totalList">An array of zero-based field offsets, indicating the fields to which the subtotals are added.</param>
    /// <param name="replace">Indicates whether replace the current subtotals</param>
    /// <param name="pageBreaks">Indicates whether add page break between groups</param>
    /// <param name="summaryBelowData">Indicates whether add summary below data.</param>
    ASPOSE_CELLS_API void Subtotal(const CellArea& ca, int32_t groupBy, ConsolidationFunction function, const Vector<int32_t>& totalList, bool replace, bool pageBreaks, bool summaryBelowData);
    /// <summary>
    /// Removes all formula and replaces with the value of the formula.
    /// </summary>
    ASPOSE_CELLS_API void RemoveFormulas();
    /// <summary>
    /// Removes duplicate rows in the sheet.
    /// </summary>
    ASPOSE_CELLS_API void RemoveDuplicates();
    /// <summary>
    /// Removes duplicate values in the range.
    /// </summary>
    /// <param name="startRow">The start row.</param>
    /// <param name="startColumn">The start column</param>
    /// <param name="endRow">The end row index.</param>
    /// <param name="endColumn">The end column index.</param>
    ASPOSE_CELLS_API void RemoveDuplicates(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn);
    /// <summary>
    /// Removes duplicate data of the range.
    /// </summary>
    /// <param name="startRow">The start row.</param>
    /// <param name="startColumn">The start column</param>
    /// <param name="endRow">The end row index.</param>
    /// <param name="endColumn">The end column index.</param>
    /// <param name="hasHeaders">Indicates whether the range contains headers.</param>
    /// <param name="columnOffsets">The column offsets.</param>
    ASPOSE_CELLS_API void RemoveDuplicates(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn, bool hasHeaders, const Vector<int32_t>& columnOffsets);
    /// <summary>
    /// Converts string data in cells to numeric value if possible.
    /// </summary>
    ASPOSE_CELLS_API void ConvertStringToNumericValue();
    /// <summary>
    /// Get all cells which refer to the specific cell.
    /// </summary>
    /// <param name="isAll">Indicates whether check other worksheets</param>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Vector<Cell> GetDependents(bool isAll, int32_t row, int32_t column);
    /// <summary>
    /// Gets all cells whose calculated result depends on specific cell.
    /// </summary>
    /// <param name="row">Row index of the specific cell</param>
    /// <param name="column">Column index of the specific cell.</param>
    /// <param name="recursive">Whether returns those dependents which do not reference to the specific cell directly
    /// but reference to other leafs of that cell.</param>
    /// <returns>Enumerator to enumerate all dependents(Cell objects)</returns>
    /// <remarks>
    /// To use this method, please make sure the workbook has been set with true value for
    /// <see cref="FormulaSettings.EnableCalculationChain"/> and has been fully calculated with this setting.
    /// If there is no formula reference to this cell, null will be returned.
    /// For more details and example, please see <see cref="Cell.GetDependentsInCalculation(bool)"/>
    /// </remarks>
    ASPOSE_CELLS_API Enumerator<Cell> GetDependentsInCalculation(int32_t row, int32_t column, bool recursive);
    /// <summary>
    /// Get the style of given cell.
    /// </summary>
    /// <param name="row">row index</param>
    /// <param name="column">column</param>
    /// <returns>the style of given cell.</returns>
    ASPOSE_CELLS_API Style GetCellStyle(int32_t row, int32_t column);
    
};

} }

#endif
