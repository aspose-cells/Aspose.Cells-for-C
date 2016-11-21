#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents workbook/worksheet protection type.
			/// </summary>
			/// 
			/// 
	enum ProtectionType 
	{

			/// <summary>
			/// Represents to protect all.
			/// </summary>
			/// 
			/// 
			ProtectionType_All ,
			/// <summary>
			/// Represents to protect contents, used in Worksheet protection.
			/// </summary>
			/// 
			/// 
			ProtectionType_Contents ,
			/// <summary>
			/// Represents to protect objects, used in Worksheet protection.
			/// </summary>
			/// 
			/// 
			ProtectionType_Objects ,
			/// <summary>
			/// Represents to protect scenarios, used in Worksheet protection.
			/// </summary>
			/// 
			/// 
			ProtectionType_Scenarios ,
			/// <summary>
			/// Represents to protect structure, used in Workbook protection.
			/// </summary>
			/// 
			/// 
			ProtectionType_Structure ,
			/// <summary>
			/// Represents to protect window, used in Workbook protection.
			/// </summary>
			/// 
			/// 
			ProtectionType_Windows ,
			/// <summary>
			/// Represents no protection. Only for Reading property.
			/// </summary>
			/// 
			/// 
			ProtectionType_None ,
	};


}

}
