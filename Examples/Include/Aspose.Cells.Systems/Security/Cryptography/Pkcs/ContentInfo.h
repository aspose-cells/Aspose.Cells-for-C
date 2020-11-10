#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_CONTENTINFO_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_CONTENTINFO_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Security/Cryptography/Oid.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Security::Cryptography;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {
					namespace Pkcs {

						class ASPOSE_CELLS_API ContentInfo : public Object //to do
						{
						public:
							ContentInfo(){}
							ContentInfo(intrusive_ptr<Array1D<Byte>> content){}
							ContentInfo(intrusive_ptr<Oid> contentType, intrusive_ptr<Array1D<Byte>> content){}

						public://tmp, member instead of property
							intrusive_ptr<Array1D<Byte>> Content;

						};

					} //namespace Pkcs
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif
