#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Security/Cryptography/X509Certificates/X509Certificate.h"
#include "Aspose.Cells.Systems/Security/Cryptography/X509Certificates/PublicKey.h"
#include "Aspose.Cells.Systems/Security/Cryptography/AsymmetricAlgorithm.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Security;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {
					namespace X509Certificates {

						class ASPOSE_CELLS_API X509Certificate2 : public X509Certificate //to do
						{
						public:
							X509Certificate2(){}
							X509Certificate2(intrusive_ptr<Array1D<Byte>> rawData){}

							intrusive_ptr<PublicKey> GetPublicKey() {
#ifdef _DEBUG
								Console::WriteLine(NEW String("X509Certificate2->GetPublicKey() Not Supported!!!"));
#endif 
								return NULL; 
							}
							intrusive_ptr<Array1D<Byte>> GetRawData() 
							{
#ifdef _DEBUG
								Console::WriteLine(NEW String("X509Certificate2->GetRawData() Not Supported!!!"));
#endif 
								return NULL; 
							}
							intrusive_ptr<AsymmetricAlgorithm> GetPrivateKey()
							{
#ifdef _DEBUG
								Console::WriteLine(NEW String("X509Certificate2->GetPrivateKey() Not Supported!!!"));
#endif 
								return NULL; }
						};

					} //namespace X509Certificates
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif