#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Security/Cryptography/Rijndael.h"
#include "System/Security/Cryptography/ICryptoTransform.h"
#include "System/Security/Cryptography/CipherMode.h"
#include "System/Security/Cryptography/PaddingMode.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API RijndaelManaged : public Rijndael  //to do
					{
					public:
						RijndaelManaged(){}

						virtual intrusive_ptr<ICryptoTransform> CreateDecryptor(){ return SymmetricAlgorithm::CreateDecryptor(); }
						virtual intrusive_ptr<ICryptoTransform> CreateDecryptor(intrusive_ptr<Array1D<Byte>> rgbKey, intrusive_ptr<Array1D<Byte>> rgbIV) { 
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->CreateDecryptor() Not Supported!!!"));
#endif
							
							return NULL; }
						virtual intrusive_ptr<ICryptoTransform> CreateEncryptor(){ return SymmetricAlgorithm::CreateEncryptor(); }
						virtual intrusive_ptr<ICryptoTransform> CreateEncryptor(intrusive_ptr<Array1D<Byte>> rgbKey, intrusive_ptr<Array1D<Byte>> rgbIV) { 
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->CreateDecryptor() Not Supported!!!"));
#endif							
							return NULL; }
						void GenerateIV(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->GenerateIV() Not Supported!!!"));
#endif	
						}
						void GenerateKey(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->GenerateKey() Not Supported!!!"));
#endif	
						}

						int GetBlockSize(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->GetBlockSize() Not Supported!!!"));
#endif	 
							return 0; }
						void SetBlockSize(int value){}
						int GetKeySize(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->GetKeySize() Not Supported!!!"));
#endif	 
							return 0; 
						}
						void SetKeySize(int value)
						{
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->SetKeySize() Not Supported!!!"));
#endif
						}
						CipherMode GetMode(){ return CipherMode_CBC; }
						void SetMode(CipherMode value){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->SetMode() Not Supported!!!"));
#endif
						}
						PaddingMode GetPadding(){ return PaddingMode_None; }
						void SetPadding(PaddingMode value) {
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->SetPadding() Not Supported!!!"));
#endif	
						}
						intrusive_ptr<Array1D<Byte>> GetIV(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->GetIV() Not Supported!!!"));
#endif
							return NULL;
						}
						void SetIV(intrusive_ptr<Array1D<Byte>> value){}
						intrusive_ptr<Array1D<Byte>> GetKey(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->GetKey() Not Supported!!!"));
#endif
							return NULL; }
						void SetKey(intrusive_ptr<Array1D<Byte>> value){
#ifdef _DEBUG
							Console::WriteLine(NEW String("RijndaelManaged->SetKey() Not Supported!!!"));
#endif
						}
					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif