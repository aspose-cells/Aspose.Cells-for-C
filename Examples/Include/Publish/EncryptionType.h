#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Encryption Type. 
			/// Only used by excel2003.
			/// We will encrypt 2007/2010 workbook using SHA AES the same as Excel does, and this EncryptionType will be ignored. 
			/// </summary>
	enum EncryptionType 

	{

			/// <summary>
			/// 
			/// </summary>
			EncryptionType_XOR ,
			/// <summary>
			///  Office 97/2000 compatible.
			///  </summary>
			EncryptionType_Compatible ,
			/// <summary>
			/// 
			/// </summary>
			EncryptionType_EnhancedCryptographicProviderV1 ,
			/// <summary>
			/// 
			/// </summary>
			EncryptionType_StrongCryptographicProvider ,
	};


}

}
