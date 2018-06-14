#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Specifies how to apply style for parsed values when converting string value to number or datetime.
			/// </summary>
	enum TxtLoadStyleStrategy 

	{

			/// <summary>
			/// Does not set style for the parsed value.
			/// </summary>
			TxtLoadStyleStrategy_None ,
			/// <summary>
			/// Set the style as built-in number/datetime when the parsed value are plain numeric/datetime values.
			/// </summary>
			/// <remarks>
			/// When ms excel parsing datetime or numeric values according to user's input(such as CSV file),
			/// the formatting of those values may be changed, such as
			/// leading/tailing zeros of number, year/month/day order of datetime, ...etc.
			/// This type is for simulating ms excel's behavior.
			/// </remarks>
			TxtLoadStyleStrategy_BuiltIn ,
			/// <summary>
			/// Set the exact custom format for the parsed value to make the formatted value be same with the original input one.
			/// </summary>
			TxtLoadStyleStrategy_ExactFormat ,
	};


}

}
