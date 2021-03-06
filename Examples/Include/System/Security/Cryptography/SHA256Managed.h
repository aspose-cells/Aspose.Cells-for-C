#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_H_

#include "System/Security/Cryptography/SHA256.h"
#include "System/Array1D.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API SHA256Managed : public SHA256  //to do
					{
					public:
						SHA256Managed(){}
						void Initialize(){}

					protected:
						void HashCore(intrusive_ptr<Array1D<Byte>> rgb, int ibStart, int cbSize){}
						intrusive_ptr<Array1D<Byte>> HashFinal(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("SHA256Managed->HashFinal() Not Supported!!!"));
#endif								
							return NULL; }

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif