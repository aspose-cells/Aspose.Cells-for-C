#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_H_

#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Security/Cryptography/HashAlgorithm.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API SHA512 : public HashAlgorithm  //to do
					{
					public:
						static intrusive_ptr<SHA512> Create(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("SHA512->Create1() Not Supported!!!"));
#endif	
							return NULL; }
						static intrusive_ptr<SHA512> Create(intrusive_ptr<String> hashName){ 
#ifdef _DEBUG
							Console::WriteLine(NEW String("SHA512->Create2() Not Supported!!!"));
#endif	
							return NULL; }
					protected:
						SHA512(){}


					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif