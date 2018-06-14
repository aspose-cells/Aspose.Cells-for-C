#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_CONTENTINFO_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_CONTENTINFO_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Security/Cryptography/Oid.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Security::Cryptography;

namespace Aspose {
	namespace Cells {
		namespace System {
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
		}	// namespace System
	}
}
#endif
