#pragma once
namespace Aspose {
namespace Cells {
namespace Pivot {
			/// <summary>
			/// Represents PivotTable condition formatting rule type.
			/// </summary>
	enum PivotConditionFormatRuleType 

	{

			/// <summary>
			/// Indicates that Top N conditional formatting is not evaluated
			/// </summary>
			PivotConditionFormatRuleType_None ,
			/// <summary>
			/// Indicates that Top N conditional formatting is 
			/// evaluated across the entire scope range.
			/// </summary>
			PivotConditionFormatRuleType_All ,
			/// <summary>
			/// Indicates that Top N conditional formatting is evaluated for each row.
			/// </summary>
			PivotConditionFormatRuleType_Row ,
			/// <summary>
			/// Indicates that Top N conditional formatting is 
			/// evaluated for each column.
			/// </summary>
			PivotConditionFormatRuleType_Column ,
	};


}

}

}
