#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Security/Cryptography/X509Certificates/X509Certificate2.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/DateTime.h"

namespace Aspose{
namespace Cells{
namespace DigitalSignatures{
			/// <summary>
			/// Signature in file.
			/// </summary>
	class ASPOSE_CELLS_API IDigitalSignature : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Certificate object that was used to sign the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Security::Cryptography::X509Certificates::X509Certificate2> 		GetICertificate()=0;
			/// <summary>
			/// Certificate object that was used to sign the document.
			/// </summary>
			 virtual void 		SetICertificate(intrusive_ptr<Aspose::Cells::Systems::Security::Cryptography::X509Certificates::X509Certificate2> value)=0;
			/// <summary>
			/// The purpose to signature.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetComments()=0;
			/// <summary>
			/// The purpose to signature.
			/// </summary>
			 virtual void SetComments(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The time when the document was signed.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetSignTime()=0;
			/// <summary>
			/// The time when the document was signed.
			/// </summary>
			 virtual void SetSignTime(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			///  If this digital signature is valid and the document has not been tampered with,
			///  this value will be true.
			/// </summary>
			 virtual bool IsValid()=0;

	};
}
}
}
