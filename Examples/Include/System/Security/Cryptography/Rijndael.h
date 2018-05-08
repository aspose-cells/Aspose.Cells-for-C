#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Security/Cryptography/SymmetricAlgorithm.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API Rijndael : public SymmetricAlgorithm  //to do
					{
					public:
						static intrusive_ptr<Rijndael> Create(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("Rijndael->Create1() Not Supported!!!"));
#endif	
							return NULL; }
						static intrusive_ptr<Rijndael> Create(StringPtr algName){
#ifdef _DEBUG
							Console::WriteLine(NEW String("Rijndael->Create2() Not Supported!!!"));
#endif	
							return NULL; }

					protected:
						Rijndael(){}

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif