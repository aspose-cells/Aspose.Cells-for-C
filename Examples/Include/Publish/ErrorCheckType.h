#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents all errors check type.
			/// </summary>
	enum ErrorCheckType 

	{

			/// <summary>
			///  check for calculation errors
			/// </summary>
			ErrorCheckType_Calc = 0x00000001 ,
			/// <summary>
			///  check for references to empty cells
			/// </summary>
			ErrorCheckType_EmptyCellRef = 0x00000002 ,
			/// <summary>
			///  check the format of numeric values
			/// </summary>
			ErrorCheckType_TextNumber = 0x00000004 ,
			/// <summary>
			///  check formulas with references to less than the entirety
			///  of a range containing continuous data
			/// </summary>
			ErrorCheckType_InconsistRange = 0x00000008 ,
			/// <summary>
			///  check formulas that are inconsistent with formulas in neighboring cells.
			/// </summary>
			ErrorCheckType_InconsistFormula = 0x00000010 ,
			/// <summary>
			///  check the format of date/time values
			/// </summary>
			ErrorCheckType_TextDate = 0x00000020 ,
			/// <summary>
			///  check for unprotected formulas
			/// </summary>
			ErrorCheckType_UnproctedFormula = 0x00000040 ,
			/// <summary>
			///  whether to perform data validation
			/// </summary>
			ErrorCheckType_Validation = 0x00000080 ,
			/// <summary>
			/// Ignore errors when cells contain a value different from a calculated column formula.
			/// </summary>
			ErrorCheckType_CalculatedColumn ,
	};


}

}
