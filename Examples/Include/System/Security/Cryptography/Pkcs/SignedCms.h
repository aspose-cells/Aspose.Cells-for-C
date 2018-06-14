#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_SIGNEDCMS_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_SIGNEDCMS_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Security/Cryptography/Pkcs/ContentInfo.h"
//#include "System/Security/Cryptography/Pkcs/CmsSigner.h"
#include "System/Security/Cryptography/X509Certificates/X509Certificate2Collection.h"
#ifdef _DEBUG
#include "System/Console.h"
#endif
using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Security::Cryptography::X509Certificates;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {
					namespace Pkcs {
						class CmsSigner;
						class ASPOSE_CELLS_API SignedCms : public Object //to do
						{
						public:
							SignedCms(){}
							SignedCms(intrusive_ptr<ContentInfo> certificate){}

							void CheckSignature(bool verifySignatureOnly){}
							void CheckSignature(intrusive_ptr<X509Certificate2Collection> extraStore, bool verifySignatureOnly){}
							void Decode(intrusive_ptr<Array1D<Byte>> encodedMessage){}
							intrusive_ptr<Array1D<Byte>> Encode(){
#ifdef _DEBUG
								Console::WriteLine(NEW String("SignedCms->Encode() Not Supported!!!"));
#endif								
								return NULL; }
							void ComputeSignature(){}
							void ComputeSignature(intrusive_ptr<CmsSigner> signer){}
							void ComputeSignature(intrusive_ptr<CmsSigner> signer, bool silent){}

						public://tmp, member instead of property
							intrusive_ptr<ContentInfo> ContentInfo;


						};

					} //namespace Pkcs
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif
