#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Specifies a cell value type.
			/// </summary>
	enum CellValueType 

	{

			/// <summary>
			/// Cell value is boolean.
			/// </summary>
			CellValueType_IsBool ,
			/// <summary>
			/// Cell value is datetime.
			/// </summary>
			CellValueType_IsDateTime ,
			/// <summary>
			/// Cell contains error value
			/// </summary>
			CellValueType_IsError ,
			/// <summary>
			/// Blank cell.
			/// </summary>
			CellValueType_IsNull ,
			/// <summary>
			/// Cell value is numeric.
			/// </summary>
			CellValueType_IsNumeric ,
			/// <summary>
			/// Cell value is string.
			/// </summary>
			CellValueType_IsString ,
			/// <summary>
			/// Cell value type is unknown.
			/// </summary>
			CellValueType_IsUnknown ,
	};


}

}
