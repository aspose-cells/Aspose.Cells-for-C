#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_OID_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_OID_H_

#include "System/Object.h"
#include "System/String.h"
//#include "System/Security/Cryptography/HashAlgorithm.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
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
		}	// namespace System
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_