#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_H_

#include "System/Security/Cryptography/RandomNumberGenerator.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API RNGCryptoServiceProvider : public RandomNumberGenerator //to do
					{
					public:
						RNGCryptoServiceProvider(){}

						void GetBytes(intrusive_ptr<Array1D<Byte>> data) {
#ifdef _DEBUG
							Console::WriteLine(NEW String("RNGCryptoServiceProvider->GetBytes() Not Supported!!!"));
#endif						
						
						}
						void GetNonZeroBytes(intrusive_ptr<Array1D<Byte>> data) {
#ifdef _DEBUG
							Console::WriteLine(NEW String("RNGCryptoServiceProvider->GetNonZeroBytes() Not Supported!!!"));
#endif						
						}
					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_