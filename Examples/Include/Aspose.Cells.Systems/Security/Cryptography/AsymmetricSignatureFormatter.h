#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Security/Cryptography/HashAlgorithm.h"
#include "Aspose.Cells.Systems/Security/Cryptography/AsymmetricAlgorithm.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API AsymmetricSignatureFormatter : public Object  //to do
					{
					public:
						virtual intrusive_ptr<Array1D<Byte>> CreateSignature(intrusive_ptr<HashAlgorithm> hash) { 
#ifdef _DEBUG
							Console::WriteLine(NEW String("AsymmetricSignatureFormatter->CreateSignature() Not Supported!!!"));
#endif							
							return NULL; }
						virtual intrusive_ptr<Array1D<Byte>> CreateSignature(intrusive_ptr<Array1D<Byte>> rgbHash) = 0;
						virtual void SetHashAlgorithm(StringPtr strName) = 0;
						virtual void SetKey(intrusive_ptr<AsymmetricAlgorithm> key) = 0;

					protected:
						AsymmetricSignatureFormatter(){}
					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_