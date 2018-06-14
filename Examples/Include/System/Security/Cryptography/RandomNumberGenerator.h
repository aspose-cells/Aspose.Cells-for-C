#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API RandomNumberGenerator : public Object  //to do
					{
					public:
						static intrusive_ptr<RandomNumberGenerator> Create(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RandomNumberGenerator->Create1() Not Supported!!!"));
#endif	
							return NULL; }
						static intrusive_ptr<RandomNumberGenerator> Create(StringPtr rngName){ 
#ifdef _DEBUG
							Console::WriteLine(NEW String("RandomNumberGenerator->Create2() Not Supported!!!"));
#endif	
							return NULL; }
						virtual void GetBytes(intrusive_ptr<Array1D<Byte>> data) = 0;
						virtual void GetNonZeroBytes(intrusive_ptr<Array1D<Byte>> data) = 0;
					protected:
						RandomNumberGenerator(){}

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_