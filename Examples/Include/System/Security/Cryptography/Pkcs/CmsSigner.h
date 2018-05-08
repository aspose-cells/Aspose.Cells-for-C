#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_CMSSIGNER_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_CMSSIGNER_H_

#include "System/Object.h"
#include "System/Security/Cryptography/Oid.h"
#include "System/Security/Cryptography/X509Certificates/X509Certificate2.h"
#include "System/Security/Cryptography/X509Certificates/X509IncludeOption.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Security;
using namespace Aspose::Cells::System::Security::Cryptography;
using namespace Aspose::Cells::System::Security::Cryptography::X509Certificates;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {
					namespace Pkcs {

						class ASPOSE_CELLS_API CmsSigner : public Object //to do
						{
						public:
							CmsSigner(){}
							CmsSigner(intrusive_ptr<X509Certificate2> certificate){}


						public://tmp, member instead of property
							intrusive_ptr<Oid> DigestAlgorithm;
							X509IncludeOption IncludeOption;


						};

					} //namespace Pkcs
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif