#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_OID_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_OID_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
//#include "Aspose.Cells.Systems/Security/Cryptography/HashAlgorithm.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API Oid : public Object//to do
					{
					public:
						Oid(){}
						Oid(intrusive_ptr<Oid> oid){}
						Oid(StringPtr oid){}
						Oid(StringPtr value, StringPtr friendlyName){}


					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_