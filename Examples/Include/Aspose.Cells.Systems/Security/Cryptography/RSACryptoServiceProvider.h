#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Security/Cryptography/CRSA.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API RSACryptoServiceProvider : public CRSA  //to do
					{
					public:
						RSACryptoServiceProvider() {}

						bool VerifyData(intrusive_ptr<Array1D<Byte>> rgbHash, ObjectPtr str, intrusive_ptr<Array1D<Byte>> rgbSignature){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RSACryptoServiceProvider->VerifyData() Not Supported!!!"));
#endif							
							return false; }

					protected:


					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_