#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Security/Cryptography/SymmetricAlgorithm.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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
		}	// namespace Systems
	}
}
#endif