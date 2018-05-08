#pragma once
namespace Aspose {
namespace Cells {
namespace Pivot {
			/// <summary>
			/// Represents number of items to retain per field.
			/// </summary>
	enum PivotMissingItemLimitType 

	{

			/// <summary>
			/// The default number of unique items per PivotField allowed.
			/// </summary>
			PivotMissingItemLimitType_Automatic = 0 ,
			/// <summary>
			/// The maximum number of unique items per PivotField allowed (>32,500).
			/// </summary>
			PivotMissingItemLimitType_Max = 1 ,
			/// <summary>
			/// No unique items per PivotField allowed.
			/// </summary>
			PivotMissingItemLimitType_None = 2 ,
	};


}

}

}
