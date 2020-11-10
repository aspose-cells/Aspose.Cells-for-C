#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_H_

#include "Aspose.Cells.Systems/Object.h"
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

						class ASPOSE_CELLS_API PublicKey : public Object //to do
						{
						public:
							intrusive_ptr<Cryptography::AsymmetricAlgorithm> GetKey() {
#ifdef _DEBUG
								Console::WriteLine(NEW String("PublicKey->GetKey() Not Supported!!!"));
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