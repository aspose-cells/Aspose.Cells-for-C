#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Condition value type.
			/// </summary>
	enum FormatConditionValueType 

	{

			/// <summary>
			/// The minimum/ midpoint / maximum value for the
			/// gradient is determined by a formula.
			/// </summary>
			FormatConditionValueType_Formula ,
			/// <summary>
			/// Indicates that the maximum value in the range shall be
			/// used as the maximum value for the gradient.
			/// </summary>
			FormatConditionValueType_Max ,
			/// <summary>
			/// Indicates that the minimum value in the range shall be
			/// used as the minimum value for the gradient.
			/// </summary>
			FormatConditionValueType_Min ,
			/// <summary>
			/// Indicates that the minimum / midpoint / maximum
			/// value for the gradient is specified by a constant
			/// numeric value.
			/// </summary>
			FormatConditionValueType_Number ,
			/// <summary>
			/// Value indicates a percentage between the minimum
			/// and maximum values in the range shall be used as the
			/// minimum / midpoint / maximum value for the gradient.
			/// </summary>
			FormatConditionValueType_Percent ,
			/// <summary>
			/// Value indicates a percentile ranking in the range shall
			/// be used as the minimum / midpoint / maximum value
			/// for the gradient.
			/// </summary>
			FormatConditionValueType_Percentile ,
			/// <summary>
			/// Indicates that the Automatic maximum value in the range shall be
			/// used as the Automatic maximum value for the gradient.
			/// </summary>
			FormatConditionValueType_AutomaticMax ,
			/// <summary>
			/// Indicates that the Automatic minimum value in the range shall be
			/// used as the Automatic minimum value for the gradient.
			/// </summary>
			FormatConditionValueType_AutomaticMin ,
	};


}

}
