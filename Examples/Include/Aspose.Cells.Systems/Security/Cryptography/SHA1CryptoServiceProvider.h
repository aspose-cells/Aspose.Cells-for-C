#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Security/Cryptography/SHA1.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API SHA1CryptoServiceProvider : public SHA1  //to do
					{
					public:
						SHA1CryptoServiceProvider() {}
						void Initialize() {}
					protected:
						void Dispose(bool disposing) {}
						void HashCore(intrusive_ptr<Array1D<Byte>> rgb, int ibStart, int cbSize) {
#ifdef _DEBUG
							Console::WriteLine(NEW String("SHA1CryptoServiceProvider->HashCore() Not Supported!!!"));
#endif	
						}
						intrusive_ptr<Array1D<Byte>> HashFinal() { 
#ifdef _DEBUG
							Console::WriteLine(NEW String("SHA1CryptoServiceProvider->HashFinal() Not Supported!!!"));
#endif	
							return NULL; }

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif