#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents three types of html corss string.
			/// </summary>
	enum HtmlCrossType 

	{

			/// <summary>
			/// Display like MS Excel,depends on the next cell. 
			/// If the next cell is null,the string will cross,or it will be truncated
			/// </summary>
			HtmlCrossType_Default ,
			/// <summary>
			/// Display HTML cross string, this performance for creating large html files will be more than ten times faster than setting the value to Deault or FitToCell.
			/// </summary>
			HtmlCrossType_Cross ,
			/// <summary>
			/// Only displaying the string within the width of cell.
			/// </summary>
			HtmlCrossType_FitToCell ,
	};


}

}
