#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_CMSSIGNER_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_CMSSIGNER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Security/Cryptography/Oid.h"
#include "Aspose.Cells.Systems/Security/Cryptography/X509Certificates/X509Certificate2.h"
#include "Aspose.Cells.Systems/Security/Cryptography/X509Certificates/X509IncludeOption.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Security;
using namespace Aspose::Cells::Systems::Security::Cryptography;
using namespace Aspose::Cells::Systems::Security::Cryptography::X509Certificates;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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
		}	// namespace Systems
	}
}
#endif