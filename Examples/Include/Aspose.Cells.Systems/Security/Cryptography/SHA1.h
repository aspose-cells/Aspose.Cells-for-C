#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_H_

#include "Aspose.Cells.Systems/Object.h"
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
		}	// namespace Systems
	}
}
#endif