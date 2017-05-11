#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Enumerates strategies for handling calculation precision.
			/// Because of the precision issue of IEEE 754 Floating-Point Arithmetic, some "seemingly simple" formulas may not be calcualted as the expected result.
			/// Such as formula "=-0.45+0.43+0.02", when calcuating operands by '+' operator directly, the result is not zero. For such kind of precision issue,
			/// some special strategies may give the expected result.
			/// </summary>
	enum CalculationPrecisionStrategy 

	{

			/// <summary>
			/// No strategy applied on calculation.
			/// When calculating just use the original double value as operand and return the result directly.
			/// Most efficient for performance and applicable for most cases.
			/// </summary>
			CalculationPrecisionStrategy_None ,
			/// <summary>
			/// Rounds the calculation result according with significant digits.
			/// </summary>
			CalculationPrecisionStrategy_Round ,
			/// <summary>
			/// Uses decimal as operands when possible.
			/// Most inefficient for performance.
			/// </summary>
			CalculationPrecisionStrategy_Decimal ,
	};


}

}
