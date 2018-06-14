#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose{
namespace Cells{
namespace Vba{
			/// <summary>
			/// Represents all referneces of VBA project.
			/// </summary>
	class ASPOSE_CELLS_API IVbaProjectReferenceCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Add a reference to an Automation type library.
			/// </summary>
			/// <param name="name" >The name of reference.</param>
			/// <param name="libid" >The identifier of an Automation type library.</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::System::Int32 AddRegisteredReference(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> libid)=0;
			/// <summary>
			///  Add a reference to a twiddled type library and its extended type library.
			/// </summary>
			/// <param name="name" >The name of reference.</param>
			/// <param name="libid" >The identifier of an Automation type library.</param>
			/// <param name="twiddledlibid" >The identifier of a twiddled type library</param>
			/// <param name="extendedLibid" >The identifier of an extended type library</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::System::Int32 AddControlRefrernce(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> libid , intrusive_ptr<Aspose::Cells::System::String> twiddledlibid , intrusive_ptr<Aspose::Cells::System::String> extendedLibid)=0;
			/// <summary>
			/// Add a reference to an external VBA project. 
			/// </summary>
			/// <param name="name" >The name of reference.</param>
			/// <param name="absoluteLibid" >The referenced VBA project’s identifier with an absolute path.</param>
			/// <param name="relativeLibid" >The referenced VBA project’s identifier with an relative path.</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::System::Int32 AddProjectRefrernce(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> absoluteLibid , intrusive_ptr<Aspose::Cells::System::String> relativeLibid)=0;

	};
}
}
}
