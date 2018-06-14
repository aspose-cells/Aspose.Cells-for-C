#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_H_

#include "System/Object.h"
#include "System/Security/Cryptography/AsymmetricAlgorithm.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Security;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {
					namespace X509Certificates {

						class ASPOSE_CELLS_API X509Certificate : public Object //to do
						{
						public:
							intrusive_ptr<Cryptography::AsymmetricAlgorithm> GetKey() {
#ifdef _DEBUG
								Console::WriteLine(NEW String("PublicKey->GetKey() Not Supported!!!"));
#endif
								return NULL;
							}

						};

					} //namespace X509Certificates
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif