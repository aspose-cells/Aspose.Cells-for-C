#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Conditional format rule type.
			/// </summary>
	enum FormatConditionType 

	{

			/// <summary>
			/// This conditional formatting rule compares a cell value
			/// to a formula calculated result, using an operator.
			/// </summary>
			FormatConditionType_CellValue ,
			/// <summary>
			/// This conditional formatting rule contains a formula to
			/// evaluate. When the formula result is true, the cell is
			/// highlighted.
			/// </summary>
			FormatConditionType_Expression ,
			/// <summary>
			/// This conditional formatting rule creates a gradated
			/// color scale on the cells.
			/// </summary>
			FormatConditionType_ColorScale ,
			/// <summary>
			/// This conditional formatting rule displays a gradated
			/// data bar in the range of cells.
			/// </summary>
			FormatConditionType_DataBar ,
			/// <summary>
			/// This conditional formatting rule applies icons to cells
			/// according to their values.
			/// </summary>
			FormatConditionType_IconSet ,
			/// <summary>
			/// This conditional formatting rule highlights cells whose
			/// values fall in the top N or bottom N bracket, as
			/// specified.
			/// </summary>
			FormatConditionType_Top10 ,
			/// <summary>
			/// This conditional formatting rule highlights unique
			/// values in the range.
			/// </summary>
			FormatConditionType_UniqueValues ,
			/// <summary>
			/// This conditional formatting rule highlights duplicated
			/// values.
			/// </summary>
			FormatConditionType_DuplicateValues ,
			/// <summary>
			/// This conditional formatting rule highlights cells
			/// containing given text. Equivalent to using the SEARCH()
			/// sheet function to determine whether the cell contains
			/// the text.
			/// </summary>
			FormatConditionType_ContainsText ,
			/// <summary>
			/// This conditional formatting rule highlights cells that
			/// are not blank. Equivalent of using LEN(TRIM()). This
			/// means that if the cell contains only characters that
			/// TRIM() would remove, then it is considered blank. An
			/// empty cell is also considered blank.
			/// </summary>
			FormatConditionType_NotContainsText ,
			/// <summary>
			/// This conditional formatting rule highlights cells in the
			/// range that begin with the given text. Equivalent to
			/// using the LEFT() sheet function and comparing values.
			/// </summary>
			FormatConditionType_BeginsWith ,
			/// <summary>
			/// This conditional formatting rule highlights cells ending
			/// with given text. Equivalent to using the RIGHT() sheet
			/// function and comparing values.
			/// </summary>
			FormatConditionType_EndsWith ,
			/// <summary>
			/// This conditional formatting rule highlights cells that
			/// are completely blank. Equivalent of using LEN(TRIM()).
			/// This means that if the cell contains only characters
			/// that TRIM() would remove, then it is considered blank.
			/// An empty cell is also considered blank.
			/// </summary>
			FormatConditionType_ContainsBlanks ,
			/// <summary>
			/// This conditional formatting rule highlights cells that
			/// are not blank. Equivalent of using LEN(TRIM()). This
			/// means that if the cell contains only characters that
			/// TRIM() would remove, then it is considered blank. An
			/// empty cell is also considered blank.
			/// </summary>
			FormatConditionType_NotContainsBlanks ,
			/// <summary>
			/// This conditional formatting rule highlights cells with
			/// formula errors. Equivalent to using ISERROR() sheet
			/// function to determine if there is a formula error.
			/// </summary>
			FormatConditionType_ContainsErrors ,
			/// <summary>
			/// This conditional formatting rule highlights cells
			/// without formula errors. Equivalent to using ISERROR()
			/// sheet function to determine if there is a formula error.
			/// </summary>
			FormatConditionType_NotContainsErrors ,
			/// <summary>
			/// This conditional formatting rule highlights cells
			/// containing dates in the specified time period. The
			/// underlying value of the cell is evaluated, therefore the
			/// cell does not need to be formatted as a date to be
			/// evaluated. For example, with a cell containing the
			/// value 38913 the conditional format shall be applied if
			/// the rule requires a value of 7/14/2006.
			/// </summary>
			FormatConditionType_TimePeriod ,
			/// <summary>
			/// This conditional formatting rule highlights cells that
			/// are above or below the average for all values in the
			/// range.
			/// </summary>
			FormatConditionType_AboveAverage ,
	};


}

}
