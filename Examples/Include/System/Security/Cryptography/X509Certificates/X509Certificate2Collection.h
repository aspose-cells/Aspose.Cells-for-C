#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_H_

#include "System/Object.h"
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.h"
#include "System/Security/Cryptography/X509Certificates/X509Certificate2.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Security;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {
					namespace X509Certificates {

						class ASPOSE_CELLS_API X509Certificate2Collection : public X509CertificateCollection //to do
						{
						public:
							X509Certificate2Collection(){}
							X509Certificate2Collection(intrusive_ptr<X509Certificate2> certificate){}

						};

					} //namespace X509Certificates
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif