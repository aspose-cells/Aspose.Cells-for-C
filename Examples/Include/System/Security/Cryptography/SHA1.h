#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Security/Cryptography/HashAlgorithm.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {
					
					class ASPOSE_CELLS_API SHA1 : public HashAlgorithm  //to do
					{
					public:
						static intrusive_ptr<SHA1> Create() {
#ifdef _DEBUG
							Console::WriteLine(NEW String("SHA1->Create() Not Supported!!!"));
#endif
							return NULL; }
						static intrusive_ptr<SHA1> Create(intrusive_ptr<String> hashName) { 
#ifdef _DEBUG
							Console::WriteLine(NEW String("SHA1->Create() Not Supported!!!"));
#endif								
							return NULL; }

					protected:
						SHA1() {}

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif