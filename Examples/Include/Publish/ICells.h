#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/IEnumerator.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Double.h"
#include "System/Array2D.h"
#include "System/Array1D.h"
#include "System/IO/Stream.h"
#include "System/Int16.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/IEnumerable.h"

namespace Aspose {
	namespace Cells {
		class IRowCollection;
		class ICell;
		class IRow;
		class IColumn;
		class IRange;
		enum MemorySetting;
		class IStyle;
		class ITxtLoadOptions;
		class IColumnCollection;
		class IStyleFlag;
		class ICells;
		class ICopyOptions;
		class IRangeCollection;
		class ICellArea;
		class IFindOptions;
		enum ShiftType;
		enum CellValueType;
		enum ConsolidationFunction;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Encapsulates a collection of <see cref="ICell" />
			///  objects.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  intrusive_ptr<IWorkbook> excel = Factory::CreateIWorkbook();
			///  intrusive_ptr<ICells> cells = excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells();
			///  //Set default row height
			///  cells->SetStandardHeight(20);
			///  //Set row height
			///  cells->SetRowHeight(2, 20.5);
			///  //Set default colum width
			///  cells->SetStandardWidth(15);
			///  //Set column width
			///  cells->SetColumnWidth(3, 12.57);
			///  //Merge cells
			///  cells->Merge(5, 4, 2, 2);
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API ICells : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the number of cells.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCount()=0;
			/// <summary>
			/// Gets the cells enumerator.
			/// </summary>
			/// <remarks>When traversing elements by the returned Enumerator, the cells collection
			/// should not be modified (such as operations that will cause new Cell/Row be instantiated or existing Cell/Row be deleted).
			/// Otherwise the enumerator may not be able to traverse all cells correctly (some elements may be traversed repeatedly or skipped).</remarks>
			/// <returns>The cells enumerator</returns>
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator()=0;
			/// <summary>
			/// Gets the rows enumerator
			/// </summary>
			/// <returns>The rows enuerator.</returns>
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetRowEnumerator()=0;
			/// <summary>
			/// Gets the collection of <see cref="IRow" />
			///  objects that represents the individual rows in this worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IRowCollection> 		GetIRows()=0;
			/// <summary>
			/// Gets the collection of merged cells.
			/// </summary>
			/// <remarks>In this collection, each item is a <see cref="CellArea" />
			///  structure which represents an area of merged cells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetMergedCells()=0;
			/// <summary>
			/// Gets the <see cref="ICell" />
			///  element or null at the specified cell row index and column index.
			/// </summary>
			/// <param name="row" >Row index</param>
			/// <param name="column" >Column index</param>
			/// <returns>Return Cell object if a Cell object exists.
			/// Return null if the cell does not exist.
			/// </returns>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetICell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			///  Gets the <see cref="IRow" />
			///  element at the specified cell row index.
			/// </summary>
			/// <param name="row" >Row index</param>
			/// <returns>
			/// If the row object does exist return IRow object, otherwise return null.
			/// </returns>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRow> 		GetIRow(Aspose::Cells::System::Int32 row)=0;
			/// <summary>
			/// Gets the <see cref="ICell" />
			///  element or null at the specified cell row index and column index.
			/// </summary>
			/// <param name="row" >Row index</param>
			/// <param name="column" >Column index</param>
			/// <returns>Return Cell object if a Cell object exists.
			/// Return null if the cell does not exist.
			/// </returns>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		CheckICell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			///  Gets the <see cref="IRow" />
			///  element or at the specified cell row index.
			/// </summary>
			/// <param name="row" >Row index</param>
			/// <returns>
			/// If the row object does exist return Row object, otherwise return null.
			/// </returns>
			 virtual intrusive_ptr<Aspose::Cells::IRow> 		CheckIRow(Aspose::Cells::System::Int32 row)=0;
			/// <summary>
			///  Gets the <see cref="IColumn" />
			///  element or null at the specified column index.
			/// </summary>
			/// <param name="columnIndex" >The column index.</param>
			/// <returns>The Column object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IColumn> 		CheckIColumn(Aspose::Cells::System::Int32 columnIndex)=0;
			/// <summary>
			/// Checks whether a row at given index is hidden.
			/// </summary>
			/// <param name="rowIndex" >row index</param>
			/// <returns>true if the row is hidden</returns>
			 virtual bool IsRowHidden(Aspose::Cells::System::Int32 rowIndex)=0;
			/// <summary>
			/// Checks whether a column at given index is hidden.
			/// </summary>
			/// <param name="columnIndex" >column index</param>
			/// <returns>true if the column is hidden.</returns>
			 virtual bool IsColumnHidden(Aspose::Cells::System::Int32 columnIndex)=0;
			/// <summary>
			/// Adds a range object reference to cells.
			/// </summary>
			/// <param name="rangeObject" >The range object will be contained in the cells</param>
			 virtual void AddRange(intrusive_ptr<Aspose::Cells::IRange> rangeObject)=0;
			/// <summary>
			/// Creates an <see cref="IRange" />
			///  object from a range of cells.
			/// </summary>
			/// <param name="upperLeftCell" >Upper left cell name.</param>
			/// <param name="lowerRightCell" >Lower right cell name.</param>
			/// <returns>A <see cref="IRange" />
			///  object</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		CreateIRange(intrusive_ptr<Aspose::Cells::System::String> upperLeftCell , intrusive_ptr<Aspose::Cells::System::String> lowerRightCell)=0;
			/// <summary>
			/// Creates an <see cref="IRange" />
			///  object from a range of cells.
			/// </summary>
			/// <param name="firstRow" >First row of this range</param>
			/// <param name="firstColumn" >First column of this range</param>
			/// <param name="totalRows" >Number of rows</param>
			/// <param name="totalColumns" >Number of columns</param>
			/// <returns>An <see cref="IRange" />
			///  object</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		CreateIRange(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			///  Creates an <see cref="IRange" />
			///  object from an address of the range.
			/// </summary>
			/// <param name="address" >The address of the range.</param>
			/// <returns>An <see cref="IRange" />
			///  object</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		CreateIRange(intrusive_ptr<Aspose::Cells::System::String> address)=0;
			/// <summary>
			/// Creates an <see cref="IRange" />
			///  object from rows of cells or columns of cells.
			/// </summary>
			/// <param name="firstIndex" >First row index or first column index, zero based.</param>
			/// <param name="number" >Total number of rows or columns, one based.</param>
			/// <param name="isVertical" >True - Range created from columns of cells. False - Range created from rows of cells. </param>
			/// <returns>An <see cref="IRange" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		CreateIRange(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 number , bool isVertical)=0;
			/// <summary>
			/// Gets <see cref="ICell" />
			///  item within the worksheet.
			/// </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <value>The element at the specified index.</value>
			/// <remarks>NOTE: This member is now obsolete. 
			/// Instead, please use  GetEnumerator() method of ICells to iterate all cells in this worksheet.
			/// This method will be removed 12 months later since February 2015. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the <see cref="ICell" />
			///  element at the specified cell row index and column index.
			/// </summary>
			/// <param name="row" >Row index.</param>
			/// <param name="column" >Column index.</param>
			/// <returns>The <see cref="ICell" />
			///  object.</returns>
			/// 
			/// <example>
			/// <code> 
			/// [C++]
			/// 
			/// intrusive_ptr<ICells> cells = excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells();
			/// intrusive_ptr<ICell> cell = cells->GetObjectByIndex(0, 0);	//Gets the cell at "A1"
			/// 
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetObjectByIndex(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Gets the <see cref="ICell" />
			///  element at the specified cell name.
			/// </summary>
			/// <param name="cellName" >Cell name,including its column letter and row number, for example A5.</param>
			/// 
			/// <returns>A <see cref="ICell" />
			///  object</returns>
			/// 
			/// <example>
			/// <code> 
			/// [C++]
			/// 
			/// intrusive_ptr<ICells> cells = excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells();
			/// intrusive_ptr<ICell> cell = cells->GetObjectByIndex(new String("A1"));	//Gets the cell at "A1"
			/// 
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> cellName)=0;
			/// <summary>
			/// Gets whether the cells data model should support Multi-Thread reading.
			/// Default value is false.
			/// If there are multiple threads to read Row/Cell objects in this collection concurrently,
			/// this method should be set as true, otherwise unexpected result may be produced.
			/// Supporting Multi-Thread reading may degrade the performance for accessing Row/Cell objects from this collection.
			/// </summary>
			 virtual bool GetMultiThreadReading()=0;
			/// <summary>
			/// Sets whether the cells data model should support Multi-Thread reading.
			/// Default value is false.
			/// If there are multiple threads to read Row/Cell objects in this collection concurrently,
			/// this method should be set as true, otherwise unexpected result may be produced.
			/// Supporting Multi-Thread reading may degrade the performance for accessing Row/Cell objects from this collection.
			/// </summary>
			 virtual void SetMultiThreadReading(bool value)=0;
			/// <summary>
			/// Gets the memory usage option for this cells.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::MemorySetting GetMemorySetting()=0;
			/// <summary>
			/// Sets the memory usage option for this cells.
			/// </summary>
			 virtual void SetMemorySetting(Aspose::Cells::MemorySetting value)=0;
			/// <summary>
			/// Clear all cell objects.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			/// Gets the default style.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;
			/// <summary>
			/// Sets the default style.
			/// </summary>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> value)=0;
			/// <summary>
			///  Gets the default column width in the worksheet, in unit of inches.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetStandardWidthInch()=0;
			/// <summary>
			///  Sets the default column width in the worksheet, in unit of inches.
			/// </summary>
			 virtual void SetStandardWidthInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			///  Gets the default column width in the worksheet, in unit of pixels.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetStandardWidthPixels()=0;
			/// <summary>
			///  Sets the default column width in the worksheet, in unit of pixels.
			/// </summary>
			 virtual void SetStandardWidthPixels(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the default column width in the worksheet, in unit of characters.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetStandardWidth()=0;
			/// <summary>
			/// Sets the default column width in the worksheet, in unit of characters.
			/// </summary>
			 virtual void SetStandardWidth(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the default row height in this worksheet, in unit of points.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetStandardHeight()=0;
			/// <summary>
			/// Sets the default row height in this worksheet, in unit of points.
			/// </summary>
			 virtual void SetStandardHeight(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the default row height in this worksheet, in unit of pixels.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetStandardHeightPixels()=0;
			/// <summary>
			/// Sets the default row height in this worksheet, in unit of pixels.
			/// </summary>
			 virtual void SetStandardHeightPixels(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Imports a two-dimension array of data into a worksheet.
			/// </summary>
			/// <param name="objArray" >Two-dimension data array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			 virtual void ImportTwoDimensionArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> objArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn)=0;
			/// <summary>
			/// Imports a two-dimension array of data into a worksheet.
			/// </summary>
			/// <param name="objArray" >Two-dimension data array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="convertStringToNumber" >Indicates if this method will try to convert string to number.</param>
			 virtual void ImportTwoDimensionArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> objArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool convertStringToNumber)=0;
			/// <summary>
			/// Imports a two-dimension array of data into a worksheet.
			/// </summary>
			/// <param name="objArray" >Two-dimension data array.</param>
			/// <param name="styles" >Two-dimension data style.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="convertStringToNumber" >Indicates if this method will try to convert string to number.</param>
			 virtual void ImportTwoDimensionArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> objArray , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> styles , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool convertStringToNumber)=0;
			/// <summary>
			/// Imports a two-dimension array of data into a worksheet.
			/// </summary>
			/// <param name="objArray" >Two-dimension data array.</param>
			/// <param name="styles" >Two-dimension data style.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="opts" >Options for converting string values</param>
			 virtual void 		ImportTwoDimensionArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> objArray , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> styles , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , intrusive_ptr<Aspose::Cells::ITxtLoadOptions> opts)=0;
			/// <summary>
			/// Imports an array of data into a worksheet.
			/// </summary>
			/// <param name="objArray" >Data array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="isVertical" >Specifies to import data vertically or horizontally.</param>
			 virtual void ImportObjectArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> objArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical)=0;
			/// <summary>
			/// Imports an arraylist of data into a worksheet.
			/// </summary>
			/// <param name="arrayList" >Data arraylist.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="isVertical" >Specifies to import data vertically or horizontally.</param>
			 virtual void ImportArrayList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> arrayList , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical)=0;
			/// <summary>
			/// Imports an array of data into a worksheet.
			/// </summary>
			/// <param name="objArray" >Data array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="isVertical" >Specifies to import data vertically or horizontally.</param>
			/// <param name="skip" >Skipped number of rows or columns.</param>
			 virtual void ImportObjectArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> objArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical , Aspose::Cells::System::Int32 skip)=0;
			/// <summary>
			/// Imports a two-dimension array of string into a worksheet.
			/// </summary>
			/// <param name="stringArray" >Two-dimension string array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			 virtual void ImportArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::String*>> stringArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn)=0;
			/// <summary>
			/// Imports an array of formula into a worksheet.
			/// </summary>
			/// <param name="stringArray" >Formula array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="isVertical" >Specifies to import data vertically or horizontally.</param>
			 virtual void ImportFormulaArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> stringArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical)=0;
			/// <summary>
			/// Imports an array of string into a worksheet.
			/// </summary>
			/// <param name="stringArray" >String array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="isVertical" >Specifies to import data vertically or horizontally.</param>
			 virtual void ImportArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> stringArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical)=0;
			/// <summary>
			/// Imports a two-dimension array of integer into a worksheet.
			/// </summary>
			/// <param name="intArray" >Two-dimension integer array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			 virtual void ImportArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> intArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn)=0;
			/// <summary>
			/// Imports an array of integer into a worksheet.
			/// </summary>
			/// <param name="intArray" >Integer array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="isVertical" >Specifies to import data vertically or horizontally.</param>
			 virtual void ImportArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> intArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical)=0;
			/// <summary>
			/// Imports a two-dimension array of double into a worksheet.
			/// </summary>
			/// <param name="doubleArray" >Two-dimension double array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			 virtual void ImportArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> doubleArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn)=0;
			/// <summary>
			/// Imports an array of double into a worksheet.
			/// </summary>
			/// <param name="doubleArray" >Double array.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="isVertical" >Specifies to import data vertically or horizontally.</param>
			 virtual void ImportArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> doubleArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical)=0;
			/// <summary>
			/// Import a CSV file to the cells.
			/// </summary>
			/// <param name="fileName" >The CSV file name.</param>
			/// <param name="spliter" >The spliter</param>
			/// <param name="convertNumericData" > Whether the string in text file is converted to numeric data.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			 virtual void ImportCSV(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::String> spliter , bool convertNumericData , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn)=0;
			/// <summary>
			/// Import a CSV file to the cells.
			/// </summary>
			/// <param name="stream" >The CSV file stream.</param>
			/// <param name="spliter" >The spliter</param>
			/// <param name="convertNumericData" > Whether the string in text file is converted to numeric data.</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			 virtual void ImportCSV(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::System::String> spliter , bool convertNumericData , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn)=0;
			/// <summary>
			/// Import a CSV file to the cells.
			/// </summary>
			/// <param name="fileName" >The CSV file name.</param>
			/// <param name="options" >The load options for reading text file</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			 virtual void 		ImportCSV(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::ITxtLoadOptions> options , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn)=0;
			/// <summary>
			/// Import a CSV file to the cells.
			/// </summary>
			/// <param name="stream" >The CSV file stream.</param>
			/// <param name="options" >The load options for reading text file</param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			 virtual void 		ImportCSV(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::ITxtLoadOptions> options , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn)=0;
			/// <summary>
			/// Gets or sets a value indicating whether all worksheet values are preserved as strings. 
			/// Default is false.
			/// </summary>
			 virtual bool GetPreserveString()=0;
			/// <summary>
			/// Gets or sets a value indicating whether all worksheet values are preserved as strings. 
			/// Default is false.
			/// </summary>
			 virtual void SetPreserveString(bool value)=0;
			/// <summary>
			/// Merges a specified range of cells into a single cell. 		
			/// </summary>
			/// <param name="firstRow" >First row of this range(zero based)</param>
			/// <param name="firstColumn" >First column of this range(zero based)</param>
			/// <param name="totalRows" >Number of rows(one based)</param>
			/// <param name="totalColumns" >Number of columns(one based)</param>
			/// <remarks>
			/// Reference the merged cell via the address of the upper-left cell in the range. 
			/// </remarks>
			 virtual void Merge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			/// Merges a specified range of cells into a single cell. 		
			/// </summary>
			/// <param name="firstRow" >First row of this range(zero based)</param>
			/// <param name="firstColumn" >First column of this range(zero based)</param>
			/// <param name="totalRows" >Number of rows(one based)</param>
			/// <param name="totalColumns" >Number of columns(one based)</param>
			/// <param name="mergeConflict" >Merge conflict merged ranges.</param>
			/// <remarks>
			/// Reference the merged cell via the address of the upper-left cell in the range. 
			/// If mergeConflict is true and the merged range conflicts with other merged cells,
			/// other merged cells will be  automatically removed.
			/// </remarks>
			 virtual void Merge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool mergeConflict)=0;
			/// <summary>
			/// Merges a specified range of cells into a single cell. 		
			/// </summary>
			/// <param name="firstRow" >First row of this range(zero based)</param>
			/// <param name="firstColumn" >First column of this range(zero based)</param>
			/// <param name="totalRows" >Number of rows(one based)</param>
			/// <param name="totalColumns" >Number of columns(one based)</param>
			/// <param name="checkConflict" >Indicates whether check the merged cells intersects other merged cells</param>
			/// <param name="mergeConflict" >Merge conflict merged ranges.</param>
			/// <remarks>
			/// Reference the merged cell via the address of the upper-left cell in the range. 
			/// If mergeConflict is true and the merged range conflicts with other merged cells,
			/// other merged cells will be  automatically removed.
			/// </remarks>
			 virtual void Merge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool checkConflict , bool mergeConflict)=0;
			/// <summary>
			/// Unmerges a specified range of merged cells. 		
			/// </summary>
			/// <param name="firstRow" >First row of this range(zero based)</param>
			/// <param name="firstColumn" >First column of this range(zero based)</param>
			/// <param name="totalRows" >Number of rows(one based)</param>
			/// <param name="totalColumns" >Number of columns(one based)</param>
			 virtual void UnMerge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			/// Hides a row.
			/// </summary>
			/// <param name="row" >Row index.</param>
			 virtual void HideRow(Aspose::Cells::System::Int32 row)=0;
			/// <summary>
			/// Unhides a row.
			/// </summary>
			/// <param name="row" >Row index.</param>
			/// <param name="height" >Row height. The row's height will be changed only when the row is hidden and given height value is positive.</param>
			 virtual void UnhideRow(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Double height)=0;
			/// <summary>
			/// Hides multiple rows.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="totalRows" >The row number.</param>
			 virtual void HideRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 totalRows)=0;
			/// <summary>
			/// Unhides the hidden rows.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="totalRows" >The row number.</param>
			/// <param name="height" >Row height. The row's height will be changed only when the row is hidden and given height value is positive.</param>
			 virtual void UnhideRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Double height)=0;
			/// <summary>
			/// Sets row height in unit of pixels.
			/// </summary>
			/// <param name="row" >Row index.</param>
			/// <param name="pixels" >Number of pixels.</param>
			 virtual void SetRowHeightPixel(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 pixels)=0;
			/// <summary>
			/// Sets row height in unit of inches.
			/// </summary>
			/// <param name="row" >Row index.</param>
			/// <param name="inches" >Number of inches.It should be between 0 and 409.5/72.</param>
			 virtual void SetRowHeightInch(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Double inches)=0;
			/// <summary>
			/// Sets the height of the specified row.
			/// </summary>
			/// <param name="row" >Row index.</param>
			/// <param name="height" >Height of row.In unit of point It should be between 0 and 409.5.</param>
			 virtual void SetRowHeight(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Double height)=0;
			/// <summary>
			/// Gets the height of a specified row.
			/// </summary>
			/// <param name="row" >Row index</param>
			/// <returns>Height of row</returns>
			 virtual Aspose::Cells::System::Double GetRowHeight(Aspose::Cells::System::Int32 row)=0;
			/// <summary>
			/// Hides a column.
			/// </summary>
			/// <param name="column" >Column index.</param>
			 virtual void HideColumn(Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Unhides a column.
			/// </summary>
			/// <param name="column" >Column index.</param>
			/// <param name="width" >Column width.</param>
			 virtual void UnhideColumn(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Double width)=0;
			/// <summary>
			/// Hide mutiple columns.
			/// </summary>
			/// <param name="column" >Column index.</param>
			/// <param name="totalColumns" >Column number.</param>
			 virtual void HideColumns(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			/// Unhide mutiple columns.
			/// </summary>
			/// <param name="column" >Column index.</param>
			/// <param name="totlaColumns" >Column number</param>
			/// <param name="width" >Column width.</param>
			/// <remarks>
			/// Only applies the column width to the hidden columns.
			/// </remarks>
			 virtual void UnhideColumns(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 totlaColumns , Aspose::Cells::System::Double width)=0;
			/// <summary>
			/// Gets the height of a specified row in unit of pixel.
			/// </summary>
			/// <param name="row" >Row index</param>
			/// <returns>Height of row</returns>
			 virtual Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 row)=0;
			/// <summary>
			/// Gets the height of a specified row in unit of inches.
			/// </summary>
			/// <param name="row" >Row index</param>
			/// <returns>Height of row</returns>
			 virtual Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 row)=0;
			/// <summary>
			/// Sets column width in unit of pixels.
			/// </summary>
			/// <param name="column" >Column index.</param>
			/// <param name="pixel" >Number of pixels.</param>
			 virtual void SetColumnWidthPixel(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 pixel)=0;
			/// <summary>
			/// Sets column width in unit of inches.
			/// </summary>
			/// <param name="column" >Column index.</param>
			/// <param name="inches" >Number of inches.</param>
			 virtual void SetColumnWidthInch(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Double inches)=0;
			/// <summary>
			/// Sets the width of the specified column.
			/// </summary>
			/// <param name="column" >Column index.</param>
			/// <param name="width" >Width of column.Column width must be between 0 and 255.</param>
			/// <remarks>To hide a column, sets column width to zero.</remarks>
			 virtual void SetColumnWidth(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Double width)=0;
			/// <summary>
			/// Get the width in different view type.
			/// </summary>
			/// <param name="column" >The column index.</param>
			/// <returns>the column width in unit of pixels</returns>
			 virtual Aspose::Cells::System::Int32 GetViewColumnWidthPixel(Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Gets the width of the specified column, in units of pixel.
			/// </summary>
			/// <param name="column" >Column index</param>
			/// <returns>Width of column in normal view.</returns>
			 virtual Aspose::Cells::System::Int32 GetColumnWidthPixel(Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Gets the width of the specified column, in units of inches.
			/// </summary>
			/// <param name="column" >Column index</param>
			/// <returns>Width of column</returns>
			 virtual Aspose::Cells::System::Double GetColumnWidthInch(Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Gets the width of the specified column
			/// </summary>
			/// <param name="column" >Column index</param>
			/// <returns>Width of column</returns>
			 virtual Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Minimum row index of cell which contains data or style.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMinRow()=0;
			/// <summary>
			/// Maximum row index of cell which contains data or style.
			/// </summary>
			/// <remarks>
			/// Return -1 if there is no cell which contains data or style in the worksheet.
			/// </remarks>
			 virtual Aspose::Cells::System::Int32 GetMaxRow()=0;
			/// <summary>
			/// Minimum column index of cell which contains data or style.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMinColumn()=0;
			/// <summary>
			/// Maximum column index of cell which contains data or style.
			/// </summary>
			/// <remarks>
			/// Return -1 if there is no cell.
			/// </remarks>
			 virtual Aspose::Cells::System::Int32 GetMaxColumn()=0;
			/// <summary>
			/// Minimum row index of cell which contains data.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMinDataRow()=0;
			/// <summary>
			/// Maximum row index of cell which contains data.
			/// </summary>
			/// <remarks>
			/// Return -1 if there is no cell which contains data.
			/// </remarks>
			 virtual Aspose::Cells::System::Int32 GetMaxDataRow()=0;
			/// <summary>
			/// Minimum column index of cell which contains data.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMinDataColumn()=0;
			/// <summary>
			/// Maximum column index of cell which contains data.
			/// </summary>
			/// <remarks>
			/// Return -1 if there is not cell which contains data.
			/// Don't call this property repeatedly. This property will iterate all cells in a worksheet.</remarks>
			 virtual Aspose::Cells::System::Int32 GetMaxDataColumn()=0;
			/// <summary>
			/// Gets the last row index of cell which contains data in the specified column.
			/// </summary>
			/// <param name="column" >Column index.</param>
			/// <returns>last row index.</returns>
			 virtual Aspose::Cells::System::Int32 GetLastDataRow(Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Indicates that row height and default font height matches
			/// </summary>
			 virtual bool IsDefaultRowHeightMatched()=0;
			/// <summary>
			/// Indicates that row height and default font height matches
			/// </summary>
			 virtual void SetIsDefaultRowHeightMatched(bool value)=0;
			/// <summary>
			/// Indicates whether the row is default hidden.
			/// </summary>
			 virtual bool IsDefaultRowHidden()=0;
			/// <summary>
			/// Indicates whether the row is default hidden.
			/// </summary>
			 virtual void SetIsDefaultRowHidden(bool value)=0;
			/// <summary>
			/// Gets the collection of <see cref="IColumn" />
			///  objects that represents the individual columns in this worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IColumnCollection> 		GetIColumns()=0;
			/// <summary>
			/// Applies formatting for a whole column.
			/// </summary>
			/// <param name="column" >The column index.</param>
			/// <param name="style" >The style object which will be applied.</param>
			/// <param name="flag" >Flags which indicates applied formatting properties.</param>
			 virtual void 		ApplyColumnStyle(Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Applies formatting for a whole row.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="style" >The style object which will be applied.</param>
			/// <param name="flag" >Flags which indicates applied formatting properties.</param>
			 virtual void 		ApplyRowStyle(Aspose::Cells::System::Int32 row , intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Applies formatting for a whole worksheet.
			/// </summary>
			/// <param name="style" >The style object which will be applied.</param>
			/// <param name="flag" >Flags which indicates applied formatting properties.</param>
			 virtual void 		ApplyStyle(intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Copies data and formatting of a whole column.
			/// </summary>
			/// <param name="sourceCells" >Source Cells object contains data and formatting to copy.</param>
			/// <param name="sourceColumnIndex" >Source column index.</param>
			/// <param name="destinationColumnIndex" >Destination column index.</param>
			 virtual void 		CopyColumn(intrusive_ptr<Aspose::Cells::ICells> sourceCells , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 destinationColumnIndex)=0;
			/// <summary>
			/// Copies data and formatting of a whole column.
			/// </summary>
			/// <param name="sourceCells" >Source Cells object contains data and formatting to copy.</param>
			/// <param name="sourceColumnIndex" >Source column index.</param>
			/// <param name="destinationColumnIndex" >Destination column index.</param>
			/// <param name="columnNumber" >The copied column number.</param>
			 virtual void 		CopyColumns(intrusive_ptr<Aspose::Cells::ICells> sourceCells , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 destinationColumnIndex , Aspose::Cells::System::Int32 columnNumber)=0;
			/// <summary>
			/// Copies data and formatting of the whole columns.
			/// </summary>
			/// <param name="sourceCells" >Source Cells object contains data and formatting to copy.</param>
			/// <param name="sourceColumnIndex" >Source column index.</param>
			/// <param name="sourceTotalColumns" >The number of the source columns.</param>
			/// <param name="destinationColumnIndex" >Destination column index.</param>
			/// <param name="destinationTotalColumns" >The number of the destination columns.</param>
			 virtual void 		CopyColumns(intrusive_ptr<Aspose::Cells::ICells> sourceCells , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 sourceTotalColumns , Aspose::Cells::System::Int32 destinationColumnIndex , Aspose::Cells::System::Int32 destinationTotalColumns)=0;
			/// <summary>
			/// Copies data and formatting of a whole row.
			/// </summary>
			/// <param name="sourceCells" >Source Cells object contains data and formatting to copy.</param>
			/// <param name="sourceRowIndex" >Source row index.</param>
			/// <param name="destinationRowIndex" >Destination row index.</param>
			 virtual void 		CopyRow(intrusive_ptr<Aspose::Cells::ICells> sourceCells , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex)=0;
			/// <summary>
			/// Copies data and formatting of some whole rows.
			/// </summary>
			/// <param name="sourceCells" >Source Cells object contains data and formatting to copy.</param>
			/// <param name="sourceRowIndex" >Source row index.</param>
			/// <param name="destinationRowIndex" >Destination row index.</param>
			/// <param name="rowNumber" >The copied row number.</param>
			 virtual void 		CopyRows(intrusive_ptr<Aspose::Cells::ICells> sourceCells , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex , Aspose::Cells::System::Int32 rowNumber)=0;
			/// <summary>
			/// Copies data and formatting of some whole rows.
			/// </summary>
			/// <param name="sourceCells" >Source Cells object contains data and formatting to copy.</param>
			/// <param name="sourceRowIndex" >Source row index.</param>
			/// <param name="destinationRowIndex" >Destination row index.</param>
			/// <param name="rowNumber" >The copied row number.</param>
			/// <param name="copyOptions" >The copy options.</param>
			 virtual void 		CopyRows(intrusive_ptr<Aspose::Cells::ICells> sourceCells , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex , Aspose::Cells::System::Int32 rowNumber , intrusive_ptr<Aspose::Cells::ICopyOptions> copyOptions)=0;
			/// <summary>
			/// Gets the outline level (zero-based) of the row.
			/// </summary>
			/// <param name="rowIndex" >The row index.</param>
			/// <returns>The outline level (zero-based) of the row.</returns>
			/// <remarks>If the row is not grouped, returns zero.</remarks>
			 virtual Aspose::Cells::System::Int32 GetGroupedRowOutlineLevel(Aspose::Cells::System::Int32 rowIndex)=0;
			/// <summary>
			/// Gets the outline level (zero-based) of the column.
			/// </summary>
			/// <param name="columnIndex" >The column index</param>
			/// <returns>The outline level of the column</returns>
			/// <remarks>If the column is not grouped, returns zero.</remarks>
			 virtual Aspose::Cells::System::Int32 GetGroupedColumnOutlineLevel(Aspose::Cells::System::Int32 columnIndex)=0;
			/// <summary>
			/// Gets the max grouped column outline level (zero-based).
			/// </summary>
			/// <returns> The max grouped column outline level (zero-based)</returns>
			 virtual Aspose::Cells::System::Int32 GetMaxGroupedColumnOutlineLevel()=0;
			/// <summary>
			/// Gets the max grouped row outline level (zero-based).
			/// </summary>
			/// <returns> The max grouped row outline level (zero-based)</returns>
			 virtual Aspose::Cells::System::Int32 GetMaxGroupedRowOutlineLevel()=0;
			/// <summary>
			/// Unclasps the grouped rows/columns. 
			/// </summary>
			/// <param name="isVertical" >True, uncollapse the grouped rows.</param>
			/// <param name="index" >The row/column index</param>
			 virtual void ShowGroupDetail(bool isVertical , Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Collapses the grouped rows/columns. 
			/// </summary>
			/// <param name="isVertical" >True, collapse the grouped rows.</param>
			/// <param name="index" >The row/column index</param>
			 virtual void HideGroupDetail(bool isVertical , Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Ungroups columns.
			/// </summary>
			/// <param name="firstIndex" >The first column index to be ungrouped.</param>
			/// <param name="lastIndex" >The last column index to be ungrouped.</param>
			 virtual void UngroupColumns(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex)=0;
			/// <summary>
			/// Groups columns.
			/// </summary>
			/// <param name="firstIndex" >The first column index to be grouped.</param>
			/// <param name="lastIndex" >The last column index to be grouped.</param>
			 virtual void GroupColumns(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex)=0;
			/// <summary>
			/// Groups columns.
			/// </summary>
			/// <param name="firstIndex" >The first column index to be grouped.</param>
			/// <param name="lastIndex" >The last column index to be grouped.</param>
			/// <param name="isHidden" >Specifies if the grouped columns are hidden.</param>
			 virtual void GroupColumns(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex , bool isHidden)=0;
			/// <summary>
			/// Ungroups rows.
			/// </summary>
			/// <param name="firstIndex" >The first row index to be ungrouped.</param>
			/// <param name="lastIndex" >The last row index to be ungrouped.</param>
			/// <param name="isAll" >True, removes all grouped info.Otherwise, remove the outter group info.</param>
			 virtual void UngroupRows(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex , bool isAll)=0;
			/// <summary>
			/// Ungroups rows.
			/// </summary>
			/// <param name="firstIndex" >The first row index to be ungrouped.</param>
			/// <param name="lastIndex" >The last row index to be ungrouped.</param>
			/// <remarks>
			/// Only removes outter group info.
			/// </remarks>
			 virtual void UngroupRows(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex)=0;
			/// <summary>
			/// Groups rows.
			/// </summary>
			/// <param name="firstIndex" >The first row index to be grouped.</param>
			/// <param name="lastIndex" >The last row index to be grouped.</param>
			/// <param name="isHidden" >Specifies if the grouped columns are hidden.</param>
			 virtual void GroupRows(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex , bool isHidden)=0;
			/// <summary>
			/// Groups rows.
			/// </summary>
			/// <param name="firstIndex" >The first row index to be grouped.</param>
			/// <param name="lastIndex" >The last row index to be grouped.</param>
			 virtual void GroupRows(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex)=0;
			/// <summary>
			/// Deletes a column.
			/// </summary>
			/// <param name="columnIndex" >Column index.</param>
			/// <param name="updateReference" >Indicates if update references in other worksheets.</param>
			 virtual void DeleteColumn(Aspose::Cells::System::Int32 columnIndex , bool updateReference)=0;
			/// <summary>
			/// Deletes a column.
			/// </summary>
			/// <param name="columnIndex" >Column index.</param>
			 virtual void DeleteColumn(Aspose::Cells::System::Int32 columnIndex)=0;
			/// <summary>
			/// Deletes several columns.
			/// </summary>
			/// <param name="columnIndex" >Column index.</param>
			/// <param name="totalColumns" >Number of columns to be deleted.</param>
			/// <param name="updateReference" >Indicates if update references in other worksheets.</param>
			 virtual void DeleteColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns , bool updateReference)=0;
			/// <summary>
			/// Check whether the range could be deleted.
			/// </summary>
			/// <param name="startRow" >The start row index of the range.</param>
			/// <param name="startColumn" >The start column idnex of the range.</param>
			/// <param name="totalRows" >The number of the rows in the range.</param>
			/// <param name="totalColumns" >The number of the columns in the range.</param>
			/// <returns/>
			/// 
			 virtual bool IsDeletingRangeEnabled(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			/// Deletes several rows.
			/// </summary>
			/// <param name="rowIndex" >The first row index to be deleted.</param>
			/// <param name="totalRows" >Number of rows to be deleted.</param>
			/// <remarks>
			/// If the deleted range contains the top part (not whole) of the table(ListObject),
			/// the ranged could not be deleted and nothing will be done.It works as MS Excel.
			/// </remarks>
			 virtual bool DeleteRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows)=0;
			/// <summary>
			/// Deletes a row.
			/// </summary>
			/// <param name="rowIndex" >Row index.</param>
			 virtual void DeleteRow(Aspose::Cells::System::Int32 rowIndex)=0;
			/// <summary>
			/// Deletes multiple rows in the worksheet.
			/// </summary>
			/// <param name="rowIndex" >Row index.</param>
			/// <param name="totalRows" >Number of rows to be deleted.</param>
			/// <param name="updateReference" >Indicates if update references in other worksheets.</param>
			/// <returns/>
			/// 
			 virtual bool DeleteRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , bool updateReference)=0;
			/// <summary>
			/// Delete all blank columns which do not contain any data.
			/// </summary>
			 virtual void DeleteBlankColumns()=0;
			/// <summary>
			/// Checks whether given column is blank (does not contain any data).
			/// </summary>
			/// <param name="columnIndex" >the column index</param>
			/// <returns>true if given column does not contain any data</returns>
			 virtual bool IsBlankColumn(Aspose::Cells::System::Int32 columnIndex)=0;
			/// <summary>
			/// Delete all blank rows which do not contain any data.
			/// </summary>
			 virtual void DeleteBlankRows()=0;
			/// <summary>
			/// Inserts some columns into the worksheet.
			/// </summary>
			/// <param name="columnIndex" >Column index.</param>
			/// <param name="totalColumns" >The number of columns.</param>
			 virtual void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			/// Inserts some columns into the worksheet.
			/// </summary>
			/// <param name="columnIndex" >Column index.</param>
			/// <param name="totalColumns" >The number of columns.</param>
			/// <param name="updateReference" >Indicates if references in other worksheets will be updated.</param>
			 virtual void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns , bool updateReference)=0;
			/// <summary>
			/// Inserts a new column into the worksheet.
			/// </summary>
			/// <param name="columnIndex" >Column index.</param>
			/// <param name="updateReference" >Indicates if references in other worksheets will be updated.</param>
			 virtual void InsertColumn(Aspose::Cells::System::Int32 columnIndex , bool updateReference)=0;
			/// <summary>
			/// Inserts a new column into the worksheet.
			/// </summary>
			/// <param name="columnIndex" >Column index.</param>
			 virtual void InsertColumn(Aspose::Cells::System::Int32 columnIndex)=0;
			/// <summary>
			/// Inserts multiple rows into the worksheet.
			/// </summary>
			/// <param name="rowIndex" >Row index.</param>
			/// <param name="totalRows" >Number of rows to be inserted.</param>
			/// <param name="updateReference" >Indicates if references in other worksheets will be updated.</param>
			 virtual void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , bool updateReference)=0;
			/// <summary>
			/// Inserts multiple rows into the worksheet.
			/// </summary>
			/// <param name="rowIndex" >Row index.</param>
			/// <param name="totalRows" >Number of rows to be inserted.</param>
			 virtual void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows)=0;
			/// <summary>
			/// Inserts a new row into the worksheet.
			/// </summary>
			/// <param name="rowIndex" >Row index.</param>
			 virtual void InsertRow(Aspose::Cells::System::Int32 rowIndex)=0;
			/// <summary>
			/// Gets the collection of <see cref="IRange" />
			///  objects created at run time.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IRangeCollection> 		GetIRanges()=0;
			/// <summary>
			/// Clears contents and formatting of a range.
			/// </summary>
			/// <param name="range" >Range to be cleared.</param>
			 virtual void 		ClearRange(intrusive_ptr<Aspose::Cells::ICellArea> range)=0;
			/// <summary>
			/// Clears contents and formatting of a range.
			/// </summary>
			/// <param name="startRow" >Start row index.</param>
			/// <param name="startColumn" >Start column index.</param>
			/// <param name="endRow" >End row index.</param>
			/// <param name="endColumn" >End column index.</param>
			 virtual void ClearRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn)=0;
			/// <summary>
			/// Clears contents of a range.
			/// </summary>
			/// <param name="range" >Range to be cleared.</param>
			 virtual void 		ClearContents(intrusive_ptr<Aspose::Cells::ICellArea> range)=0;
			/// <summary>
			/// Clears contents of a range.
			/// </summary>
			/// <param name="startRow" >Start row index.</param>
			/// <param name="startColumn" >Start column index.</param>
			/// <param name="endRow" >End row index.</param>
			/// <param name="endColumn" >End column index.</param>
			 virtual void ClearContents(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn)=0;
			/// <summary>
			/// Clears formatting of a range.
			/// </summary>
			/// <param name="range" >Range to be cleared.</param>
			 virtual void 		ClearFormats(intrusive_ptr<Aspose::Cells::ICellArea> range)=0;
			/// <summary>
			/// Clears formatting of a range.
			/// </summary>
			/// <param name="startRow" >Start row index.</param>
			/// <param name="startColumn" >Start column index.</param>
			/// <param name="endRow" >End row index.</param>
			/// <param name="endColumn" >End column index.</param>
			 virtual void ClearFormats(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn)=0;
			/// <summary>
			/// Gets the last cell in this worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetLastICell of ICells. 
			/// This property will be removed 12 months later since December 2015. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetEndICell()=0;
			/// <summary>
			/// Gets the last cell in this worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetLastICell()=0;
			/// <summary>
			///  Link to a xml map.
			///  </summary>
			/// <param name="mapName" >name of xml map</param>
			/// <param name="row" >row of the destination cell</param>
			/// <param name="column" >column of the destination cell</param>
			/// <param name="path" >path of xml element in xml map</param>
			  virtual void LinkToXmlMap(intrusive_ptr<Aspose::Cells::System::String> mapName , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> path)=0;
			/// <summary>
			/// Gets the max range which includes data, merged cells and shapes.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetMaxDisplayIRange()=0;
			/// <summary>
			/// Gets the first cell in this worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetFirstICell method. 
			/// This method will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetStartICell()=0;
			/// <summary>
			/// Gets the first cell in this worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetFirstICell()=0;
			/// <summary>
			/// Finds the cell with the input string.
			/// </summary>
			/// <param name="formula" >The formula to search for.</param>
			/// <param name="previousCell" >Previous cell with the same formula. This parameter can be set to null if searching from the start.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>This method is supported in Standard and above versions of Aspose.Cells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindFormula(intrusive_ptr<Aspose::Cells::System::String> formula , intrusive_ptr<Aspose::Cells::ICell> previousCell)=0;
			/// <summary>
			/// Finds the cell with formula which contains the input string.
			/// </summary>
			/// <param name="formula" >The formula to search for.</param>
			/// <param name="previousCell" >Previous cell with the same formula. This parameter can be set to null if searching from the start.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>This method is supported in Standard and above versions of Aspose.Cells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindFormulaContains(intrusive_ptr<Aspose::Cells::System::String> formula , intrusive_ptr<Aspose::Cells::ICell> previousCell)=0;
			/// <summary>
			/// Finds the cell with the input string.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find(object,Cell,FindOptions) method of ICells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell)=0;
			/// <summary>
			/// Finds the cell with the input string in the specified area.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <param name="area" >Searched area.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells. </remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell , intrusive_ptr<Aspose::Cells::ICellArea> area)=0;
			/// <summary>
			/// Finds the cell with the input string in the specified area.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <param name="area" >Searched area.</param>
			/// <param name="upDown" >Search order. True: Up. False: Down.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell , intrusive_ptr<Aspose::Cells::ICellArea> area , bool upDown)=0;
			/// <summary>
			/// Finds the cell with the input string.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <param name="upDown" >Search order. True: Up. False: Down.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells .</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell , bool upDown)=0;
			/// <summary>
			/// Finds the cell with the input string.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <param name="findOptions" >Sets the find options.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell , intrusive_ptr<Aspose::Cells::IFindOptions> findOptions)=0;
			/// <summary>
			/// Finds the cell starting with the input string.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells .</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindStringStartsWith(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell)=0;
			/// <summary>
			/// Finds the cell ending with the input string.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindStringEndsWith(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell)=0;
			/// <summary>
			/// Finds the cell containing with the input string.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells. </remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindStringContains(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell)=0;
			/// <summary>
			/// Finds the cell containing with the input string.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <param name="isCaseSensitive" >Indicates if the searched string is case sensitive.</param>
			/// <param name="area" >Searched area.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells. </remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindStringContains(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell , bool isCaseSensitive , intrusive_ptr<Aspose::Cells::ICellArea> area)=0;
			/// <summary>
			/// Finds the cell containing with the input string.
			/// </summary>
			/// <param name="inputString" >The string to search for.</param>
			/// <param name="previousCell" >Previous cell with the same string. This parameter can be set to null if searching from the start.</param>
			/// <param name="isCaseSensitive" >Indicates if the searched string is case sensitive.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindStringContains(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::ICell> previousCell , bool isCaseSensitive)=0;
			/// <summary>
			/// Finds the cell with the input integer.
			/// </summary>
			/// <param name="inputNumber" >The integer to search for.</param>
			/// <param name="previousCell" >Previous cell with the same integer. This parameter can be set to null if searching from the start.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindNumber(Aspose::Cells::System::Int32 inputNumber , intrusive_ptr<Aspose::Cells::ICell> previousCell)=0;
			/// <summary>
			/// Finds the cell with the input double.
			/// </summary>
			/// <param name="inputNumber" >The double to search for.</param>
			/// <param name="previousCell" >Previous cell with the same double. This parameter can be set to null if searching from the start.</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Find() method of ICells.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		FindNumber(Aspose::Cells::System::Double inputNumber , intrusive_ptr<Aspose::Cells::ICell> previousCell)=0;
			/// <summary>
			/// Finds the cell containing with the input object.
			/// </summary>
			/// <param name="what" >The object to search for.
			/// The type should be int,double,DateTime,string,bool.
			/// </param>
			/// <param name="previousCell" >Previous cell with the same object. 
			/// This parameter can be set to null if searching from the start.</param>
			/// <param name="findOptions" >Find options</param>
			/// <returns>Cell object.</returns>
			/// <remarks>Returns null (Nothing) if no cell is found.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		Find(intrusive_ptr<Aspose::Cells::System::Object> what , intrusive_ptr<Aspose::Cells::ICell> previousCell , intrusive_ptr<Aspose::Cells::IFindOptions> findOptions)=0;
			/// <summary>
			/// Gets the last cell in this row.
			/// </summary>
			/// <param name="rowIndex" >Row index.</param>
			/// <returns>Cell object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		EndICellInRow(Aspose::Cells::System::Int32 rowIndex)=0;
			/// <summary>
			/// Gets the last cell in this column.
			/// </summary>
			/// <param name="columnIndex" >Column index.</param>
			/// <returns>Cell object.</returns>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		EndICellInColumn(Aspose::Cells::System::Int16 columnIndex)=0;
			/// <summary>
			/// Gets the last cell with maximum column index in this range.
			/// </summary>
			/// <param name="startRow" >Start row index.</param>
			/// <param name="endRow" >End row index.</param>
			/// <param name="startColumn" >Start column index.</param>
			/// <param name="endColumn" >End column index.</param>
			/// <returns>Cell object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		EndICellInColumn(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int16 startColumn , Aspose::Cells::System::Int16 endColumn)=0;
			/// <summary>
			/// Gets the last cell with maximum row index in this range.
			/// </summary>
			/// <param name="startRow" >Start row index.</param>
			/// <param name="endRow" >End row index.</param>
			/// <param name="startColumn" >Start column index.</param>
			/// <param name="endColumn" >End column index.</param>
			/// <returns>Cell object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		EndICellInRow(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn)=0;
			/// <summary>
			/// Moves the range to destination postion.
			/// </summary>
			/// <param name="sourceArea" >The range which should be moved.</param>
			/// <param name="destRow" >The dest row.</param>
			/// <param name="destColumn" >The dest column.</param>
			 virtual void 		MoveRange(intrusive_ptr<Aspose::Cells::ICellArea> sourceArea , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn)=0;
			/// <summary>
			/// Inserts a range of cells and shift cells according to the shift option.
			/// </summary>
			/// <param name="area" >Shift area.</param>
			/// <param name="shiftNumber" >Number of rows or columns to be inserted.</param>
			/// <param name="shiftType" >Shift cells option.</param>
			/// <param name="updateReference" >Indicates if update references in other worksheets.</param>
			 virtual void 		InsertRange(intrusive_ptr<Aspose::Cells::ICellArea> area , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType , bool updateReference)=0;
			/// <summary>
			/// Inserts a range of cells and shift cells according to the shift option.
			/// </summary>
			/// <param name="area" >Shift area.</param>
			/// <param name="shiftType" >Shift cells option.</param>
			 virtual void 		InsertRange(intrusive_ptr<Aspose::Cells::ICellArea> area , Aspose::Cells::ShiftType shiftType)=0;
			/// <summary>
			/// Inserts a range of cells and shift cells according to the shift option.
			/// </summary>
			/// <param name="area" >Shift area.</param>
			/// <param name="shiftNumber" >Number of rows or columns to be inserted.</param>
			/// <param name="shiftType" >Shift cells option.</param>
			 virtual void 		InsertRange(intrusive_ptr<Aspose::Cells::ICellArea> area , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType)=0;
			/// <summary>
			/// Deletes a range of cells and shift cells according to the shift option.
			/// </summary>
			/// <param name="startRow" >Start row index.</param>
			/// <param name="startColumn" >Start column index.</param>
			/// <param name="endRow" >End row index.</param>
			/// <param name="endColumn" >End column index.</param>
			/// <param name="shiftType" >Shift cells option.</param>
			 virtual void DeleteRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::ShiftType shiftType)=0;
			/// <summary>
			/// Exports data in the <see cref="ICells" />
			///  collection to a two-dimension array object.
			/// </summary>
			/// <param name="firstRow" >The row number of the first cell to export out.</param>
			/// <param name="firstColumn" >The column number of the first cell to export out.</param>
			/// <param name="totalRows" >Number of rows to be exported</param>
			/// <param name="totalColumns" >Number of columns to be exported</param>
			/// <returns>Exported cell value array object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> ExportArray(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			/// Exports cell value type in the <see cref="ICells" />
			///  collection to a two-dimension array object.
			/// </summary>
			/// <param name="firstRow" >The row number of the first cell to export out.</param>
			/// <param name="firstColumn" >The column number of the first cell to export out.</param>
			/// <param name="totalRows" >Number of rows to be exported.</param>
			/// <param name="totalColumns" >Number of columns to be exported.</param>
			/// <returns>Exported CellValuetype array object.</returns>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::CellValueType>> ExportTypeArray(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			/// Imports custom objects.
			/// </summary>
			/// <param name="list" >The custom object</param>
			/// <param name="propertyNames" >The property names. If it is null, we will import all properties of the object.</param>
			/// <param name="isPropertyNameShown" >
			/// Indicates whether the property name will be imported to the first row.
			/// </param>
			/// <param name="firstRow" >The row number of the first cell to import in.</param>
			/// <param name="firstColumn" >The column number of the first cell to import in.</param>
			/// <param name="rowNumber" >Number of rows to be imported.</param>
			/// <param name="insertRows" >Indicates whether extra rows are added to fit data.</param>
			/// <param name="dateFormatString" >Date format string for cells.</param>
			/// <param name="convertStringToNumber" >Indicates if this method will try to convert string to number.</param>
			/// <returns>Total number of rows imported.</returns>
			/// <remarks>The custom objects should be the same type.</remarks>
			 virtual Aspose::Cells::System::Int32 ImportCustomObjects(intrusive_ptr<Aspose::Cells::System::Collections::ICollection> list , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> propertyNames , bool isPropertyNameShown , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 rowNumber , bool insertRows , intrusive_ptr<Aspose::Cells::System::String> dateFormatString , bool convertStringToNumber)=0;
			/// <summary>
			/// Creates subtotals for the range.
			/// </summary>
			/// <param name="ca" >The range</param>
			/// <param name="groupBy" >The field to group by, as a zero-based integer offset</param>
			/// <param name="function" >The subtotal function.</param>
			/// <param name="totalList" >An array of zero-based field offsets, indicating the fields to which the subtotals are added.</param>
			 virtual void 		Subtotal(intrusive_ptr<Aspose::Cells::ICellArea> ca , Aspose::Cells::System::Int32 groupBy , Aspose::Cells::ConsolidationFunction function , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> totalList)=0;
			/// <summary>
			/// Creates subtotals for the range.
			/// </summary>
			/// <param name="ca" >The range</param>
			/// <param name="groupBy" >The field to group by, as a zero-based integer offset</param>
			/// <param name="function" >The subtotal function.</param>
			/// <param name="totalList" >An array of zero-based field offsets, indicating the fields to which the subtotals are added.</param>
			/// <param name="replace" >Indicates whether replace the current subtotals</param>
			/// <param name="pageBreaks" >Indicates whether add page break between groups</param>
			/// <param name="summaryBelowData" >Indicates whether add summarry below data.</param>
			 virtual void 		Subtotal(intrusive_ptr<Aspose::Cells::ICellArea> ca , Aspose::Cells::System::Int32 groupBy , Aspose::Cells::ConsolidationFunction function , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> totalList , bool replace , bool pageBreaks , bool summaryBelowData)=0;
			/// <summary>
			/// Removes all formula and replaces with the value of the formula.
			/// </summary>
			 virtual void RemoveFormulas()=0;
			/// <summary>
			/// Remove duplicate values in the range.
			/// </summary>
			/// <param name="startRow" >The start row.</param>
			/// <param name="startColumn" >The start column</param>
			/// <param name="endRow" >The end row index.</param>
			/// <param name="endColumn" >The end column index.</param>
			 virtual void RemoveDuplicates(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn)=0;
			/// <summary>
			/// Converts string data in cells to numeric value if possible.
			/// </summary>
			 virtual void ConvertStringToNumericValue()=0;
			/// <summary>
			/// Get all cells which refer to the specific cell.
			/// </summary>
			/// <param name="isAll" >Indicates whether check other worksheets</param>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::ICell*>> 		GetDependentICells(bool isAll , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Get the style of given cell.
			/// </summary>
			/// <param name="row" >row index</param>
			/// <param name="column" >column</param>
			/// <returns>the style of given cell.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetCellIStyle(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}

	};
}
}
