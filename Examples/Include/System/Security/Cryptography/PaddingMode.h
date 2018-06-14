#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_PADDINGMODE_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_PADDINGMODE_H_

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {
					
					enum PaddingMode
					{
						// Summary:
						//     No padding is done.
						PaddingMode_None = 1,
						//
						// Summary:
						//     The PKCS #7 padding string consists of a sequence of bytes, each of which
						//     is equal to the total number of padding bytes added.
						PaddingMode_PKCS7 = 2,
						//
						// Summary:
						//     The padding string consists of bytes set to zero.
						PaddingMode_Zeros = 3,
						//
						// Summary:
						//     The ANSIX923 padding string consists of a sequence of bytes filled with zeros
						//     before the length.
						PaddingMode_ANSIX923 = 4,
						//
						// Summary:
						//     The ISO10126 padding string consists of random data before the length.
						PaddingMode_ISO10126 = 5,
					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif