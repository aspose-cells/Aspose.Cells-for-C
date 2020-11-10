#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Security/Cryptography/ICryptoTransform.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API SymmetricAlgorithm : public Object, public IDisposable  //to do
					{
					public:
						void Dispose(){}
					
						virtual intrusive_ptr<ICryptoTransform> CreateDecryptor(){ 
							
#ifdef _DEBUG
							Console::WriteLine(NEW String("SymmetricAlgorithm->CreateDecryptor() Not Supported!!!"));
#endif								
							return NULL; }
						virtual intrusive_ptr<ICryptoTransform> CreateDecryptor(intrusive_ptr<Array1D<Byte>> rgbKey, intrusive_ptr<Array1D<Byte>> rgbIV) = 0;
						virtual intrusive_ptr<ICryptoTransform> CreateEncryptor(){ 
#ifdef _DEBUG
							Console::WriteLine(NEW String("SymmetricAlgorithm->CreateEncryptor() Not Supported!!!"));
#endif								
							return NULL; }
						virtual intrusive_ptr<ICryptoTransform> CreateEncryptor(intrusive_ptr<Array1D<Byte>> rgbKey, intrusive_ptr<Array1D<Byte>> rgbIV) = 0;

					public:
						virtual void add_ref() {
							++ref_count_;
						}
						virtual int release_ref() {
							return --ref_count_;
						}

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif