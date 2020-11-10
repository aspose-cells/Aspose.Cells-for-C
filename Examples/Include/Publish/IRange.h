#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		class IRange;
		class IStyle;
		class IStyleFlag;
		enum CellBorderType;
		enum BorderType;
		class IPasteOptions;
		class ICell;
		class IWorksheet;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents a range of cells within a spreadsheet.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IRange : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the cells enumerator
			/// </summary>
			/// 
			/// <returns>The cells enumerator</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetEnumerator()=0;
			/// <summary>
			/// Indicates whether the range is intersect.
			/// </summary>
			/// 
			/// <param name="range" >The range.</param>
			/// 
			/// <returns> Whether the range is intersect.</returns>
			/// 
			/// <remarks>If the two ranges area not in the same worksheet, return false.</remarks>
			/// 
			/// 
			 virtual bool IsIntersect(intrusive_ptr<Aspose::Cells::IRange> range)=0;
			/// <summary>
			/// Returns an IRange object that represents the rectangular intersection of two ranges.
			/// </summary>
			/// 
			/// <param name="range" >The intersecting range.</param>
			/// 
			/// <returns>A Range object</returns>
			/// 
			/// <remarks>If the two ranges are not intersected, returns null.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRange> Intersect(intrusive_ptr<Aspose::Cells::IRange> range)=0;
			/// <summary>
			/// Returns the union of two ranges.
			/// </summary>
			/// 
			/// <param name="range" >The range</param>
			/// 
			/// <returns>The union of two ranges.
			/// </returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> Union(intrusive_ptr<Aspose::Cells::IRange> range)=0;
			/// <summary>
			/// Gets the count of rows in the range.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetRowCount()=0;
			/// <summary>
			/// Gets the count of columns in the range.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetColumnCount()=0;
			/// <summary>
			/// Gets the name of the range.
			/// </summary>
			/// 
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Sets the name of the range.
			/// </summary>
			/// 
			/// <remarks>Named range is supported. For example,
			/// <p>range->SetName(new String("Sheet1!MyRange"));</p>
			/// 
			/// </remarks>
			/// 
			/// 
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the range's refers to.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetRefersTo()=0;
			/// <summary>
			/// Gets the index of the first row of the range.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetFirstRow()=0;
			/// <summary>
			/// Gets the index of the first column of the range.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetFirstColumn()=0;
			/// <summary>
			///  Combines a range of cells into a single cell. 		
			///  </summary>
			/// 
			/// <remarks>
			///  Reference the merged cell via the address of the upper-left cell in the range.
			/// </remarks>
			/// 
			/// 
			 virtual void Merge()=0;
			/// <summary>
			/// Unmerges merged cells of this range.
			/// </summary>
			/// 
			/// 
			 virtual void UnMerge()=0;
			/// <summary>
			/// Puts a value into the range, if appropriate the value will be converted to other data type and cell's number format will be reset.
			/// </summary>
			/// 
			/// <param name="stringValue" >Input value</param>
			/// 
			/// <param name="isConverted" >True: converted to other data type if appropriate.</param>
			/// 
			/// <param name="setStyle" >True: set the number format to cell's style when converting to other data type</param>
			/// 
			/// 
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::Systems::String> stringValue , bool isConverted , bool setStyle)=0;
			/// <summary>
			/// Gets the value of the range.
			/// </summary>
			/// 
			/// <remarks>
			/// If the range contains multiple cells, return a two-dimension <see cref="Array" />
			///  object.
			/// If applies object array to the range, it should be a two-dimension <see cref="Array" />
			///  object.
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValue()=0;
			/// <summary>
			/// Sets the value of the range.
			/// </summary>
			/// 
			/// <remarks>
			/// If the range contains multiple cells, return a two-dimension <see cref="Array" />
			///  object.
			/// If applies object array to the range, it should be a two-dimension <see cref="Array" />
			///  object.
			/// </remarks>
			/// 
			/// 
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Applies formatting for a whole range.
			/// </summary>
			/// 
			/// <param name="style" >The style object which will be applied.</param>
			/// 
			/// <param name="flag" >Flags which indicates applied formatting properties.</param>
			/// 
			/// <remarks>Each cell in this range will contains an <see cref="IStyle" />
			///  object. 
			/// So this is a memory-consuming method. Please use it carefully.</remarks>
			/// 
			/// 
			 virtual void ApplyIStyle(intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Sets the style of the range.
			/// </summary>
			/// 
			/// <param name="style" >The Style object.</param>
			/// 
			/// 
			 virtual void SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> style)=0;
			/// <summary>
			/// Sets the outline borders around a range of cells with same border style and color.
			/// </summary>
			/// 
			/// <param name="borderStyle" >Border style.</param>
			/// 
			/// <param name="borderColor" >Border color.</param>
			/// 
			/// 
			 virtual void SetOutlineBorders(Aspose::Cells::CellBorderType borderStyle , intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> borderColor)=0;
			/// <summary>
			/// Sets out line borders around a range of cells.
			/// </summary>
			/// 
			/// <param name="borderStyles" >Border styles.</param>
			/// 
			/// <param name="borderColors" >Border colors.</param>
			/// 
			/// <remarks>
			/// Both the length of borderStyles and borderColors must be 4.
			/// The order of of borderStyles and borderColors must be top, bottom, left, right
			/// </remarks>
			/// 
			/// 
			 virtual void SetOutlineBorders(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::CellBorderType>> borderStyles , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Drawing::Color*>> borderColors)=0;
			/// <summary>
			/// Sets outline border around a range of cells.
			/// </summary>
			/// 
			/// <param name="borderEdge" >Border edge.</param>
			/// 
			/// <param name="borderStyle" >Border style.</param>
			/// 
			/// <param name="borderColor" >Border color.</param>
			/// 
			/// 
			 virtual void SetOutlineBorder(Aspose::Cells::BorderType borderEdge , Aspose::Cells::CellBorderType borderStyle , intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> borderColor)=0;
			/// <summary>
			///  Sets or gets the column width of this range
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetColumnWidth()=0;
			/// <summary>
			///  Sets or gets the column width of this range
			/// </summary>
			/// 
			/// 
			 virtual void SetColumnWidth(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Sets or gets the height of rows in this range
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetRowHeight()=0;
			/// <summary>
			/// Sets or gets the height of rows in this range
			/// </summary>
			/// 
			/// 
			 virtual void SetRowHeight(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Move the current range to the destination range.
			/// </summary>
			/// 
			/// <param name="destRow" >The start row of the destination range.</param>
			/// 
			/// <param name="destColumn" >The start column of the destination range.</param>
			/// 
			/// 
			 virtual void MoveTo(Aspose::Cells::Systems::Int32 destRow , Aspose::Cells::Systems::Int32 destColumn)=0;
			/// <summary>
			/// Copies cell data (including formulas) from a source range.
			/// </summary>
			/// 
			/// <param name="range" >Source <see cref="IRange" />
			///  object.</param>
			/// 
			/// 
			 virtual void CopyData(intrusive_ptr<Aspose::Cells::IRange> range)=0;
			/// <summary>
			/// Copies cell value from a source range.
			/// </summary>
			/// 
			/// <param name="range" >Source <see cref="IRange" />
			///  object.</param>
			/// 
			/// 
			 virtual void CopyValue(intrusive_ptr<Aspose::Cells::IRange> range)=0;
			/// <summary>
			/// Copies style settings from a source range.
			/// </summary>
			/// 
			/// <param name="range" >Source <see cref="IRange" />
			///  object.</param>
			/// 
			/// 
			 virtual void CopyStyle(intrusive_ptr<Aspose::Cells::IRange> range)=0;
			/// <summary>
			/// Copying the range with paste special options.
			/// </summary>
			/// <param name="range" >The source range.</param>
			/// <param name="options" >The paste special options.</param>
			 virtual void Copy(intrusive_ptr<Aspose::Cells::IRange> range , intrusive_ptr<Aspose::Cells::IPasteOptions> options)=0;
			/// <summary>
			/// Copies data (including formulas), formatting, drawing objects etc. from a source range.
			/// </summary>
			/// 
			/// <param name="range" >Source <see cref="IRange" />
			///  object.</param>
			/// 
			/// 
			 virtual void Copy(intrusive_ptr<Aspose::Cells::IRange> range)=0;
			/// <summary>
			/// Gets <see cref="ICell" />
			///  object in this range.
			/// </summary>
			/// 
			/// <param name="rowIndex" >Row index in this range, zero based.</param>
			/// 
			/// <param name="columnIndex" >Column index in this range, zero based.</param>
			/// 
			/// <returns><see cref="ICell" />
			///  object.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 rowIndex , Aspose::Cells::Systems::Int32 columnIndex)=0;
			/// <summary>
			/// Gets <see cref="ICell" />
			///  object or null in this range.
			/// </summary>
			/// 
			/// <param name="rowIndex" >Row index in this range, zero based.</param>
			/// 
			/// <param name="columnIndex" >Column index in this range, zero based.</param>
			/// 
			/// <returns><see cref="ICell" />
			///  object.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetICellOrNull(Aspose::Cells::Systems::Int32 rowIndex , Aspose::Cells::Systems::Int32 columnIndex)=0;
			/// <summary>
			/// Gets the <see cref="IWorksheet" />
			/// object which contains this range.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetIWorksheet()=0;

	};
}
}
