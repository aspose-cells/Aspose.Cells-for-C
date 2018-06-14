#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/IDisposable.h"
#include "System/Array1D.h"
#include "System/Security/Cryptography/ICryptoTransform.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
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
		}	// namespace System
	}
}
#endif