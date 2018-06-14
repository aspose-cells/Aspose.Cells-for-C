#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_H_

#include "System/Security/Cryptography/AsymmetricSignatureFormatter.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API RSAPKCS1SignatureFormatter : public AsymmetricSignatureFormatter  //to do
					{
					public:
						RSAPKCS1SignatureFormatter(){}
						RSAPKCS1SignatureFormatter(intrusive_ptr<AsymmetricAlgorithm> key){}

						intrusive_ptr<Array1D<Byte>> CreateSignature(intrusive_ptr<Array1D<Byte>> rgbHash){ 
#ifdef _DEBUG
							Console::WriteLine(NEW String("RSAPKCS1SignatureFormatter->CreateSignature() Not Supported!!!"));
#endif							
							
							return NULL; }
						void SetHashAlgorithm(StringPtr strName){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RSAPKCS1SignatureFormatter->SetHashAlgorithm() Not Supported!!!"));
#endif							
						}
						void SetKey(intrusive_ptr<AsymmetricAlgorithm> key){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RSAPKCS1SignatureFormatter->SetKey() Not Supported!!!"));
#endif							
						}
					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_