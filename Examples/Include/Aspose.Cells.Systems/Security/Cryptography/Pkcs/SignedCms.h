#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_SIGNEDCMS_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS_SIGNEDCMS_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Security/Cryptography/Pkcs/ContentInfo.h"
//#include "Aspose.Cells.Systems/Security/Cryptography/Pkcs/CmsSigner.h"
#include "Aspose.Cells.Systems/Security/Cryptography/X509Certificates/X509Certificate2Collection.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Security::Cryptography::X509Certificates;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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
		}	// namespace Systems
	}
}
#endif
