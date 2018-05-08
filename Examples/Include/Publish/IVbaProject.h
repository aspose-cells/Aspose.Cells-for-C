#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace DigitalSignatures {
			class IDigitalSignature;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Vba {
			class IVbaModuleCollection;
			class IVbaProjectReferenceCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Vba{
			/// <summary>
			/// Represents the VBA project.
			/// </summary>
	class ASPOSE_CELLS_API IVbaProject : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Sign this VBA project by a DigitalSignature
			/// </summary>
			/// <param name="digitalSignature" >DigitalSignature</param>
			 virtual void 		SignByIIDigitalSignature(intrusive_ptr<Aspose::Cells::DigitalSignatures::IDigitalSignature> digitalSignature)=0;
			/// <summary>
			/// Indicates whether the signature of VBA project is valid or not.
			/// </summary>
			 virtual bool IsValidSigned()=0;
			/// <summary>
			/// Gets certificate raw data if this VBA project is signed.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetCertRawData()=0;
			/// <summary>
			/// Gets the name of the VBA project.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Sets the name of the VBA project.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether VBAcode is signed or not. 
			/// </summary>
			 virtual bool IsSigned()=0;
			/// <summary>
			/// Gets all <see cref="IVbaModule" />
			///  objects. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Vba::IVbaModuleCollection> 		GetIVbaModules()=0;
			/// <summary>
			/// Gets all references of VBA project.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Vba::IVbaProjectReferenceCollection> 		GetIReferences()=0;

	};
}
}
}
