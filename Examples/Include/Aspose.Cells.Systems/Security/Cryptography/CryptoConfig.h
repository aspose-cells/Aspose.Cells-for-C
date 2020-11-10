#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"

#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif

//#include "Aspose.Cells.Systems/Security/Cryptography/HashAlgorithm.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API CryptoConfig : public Object //to do
					{
					public:
						CryptoConfig(){}

						static ObjectPtr CreateFromName(StringPtr name){ 
#ifdef _DEBUG
							Console::WriteLine(NEW String("Cryptography->CreateFromName() Not Supported!!!"));
#endif		
							return NULL; 
						
						}
						//static ObjectPtr CreateFromName(StringPtr name, params object[] args);
						static intrusive_ptr<Array1D<Byte>> EncodeOID(StringPtr str){ 
#ifdef _DEBUG
							Console::WriteLine(NEW String("Cryptography->EncodeOID() Not Supported!!!"));
#endif									
							return NULL; 
						}
						static StringPtr MapNameToOID(StringPtr name){ 
#ifdef _DEBUG
							Console::WriteLine(NEW String("Cryptography->MapNameToOID() Not Supported!!!"));
#endif									
							return NULL; 		
						}

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_