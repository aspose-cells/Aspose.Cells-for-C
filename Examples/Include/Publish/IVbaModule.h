#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Vba {
			enum VbaModuleType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Vba{
			/// <summary>
			/// Represents module that is contained in VBA project.
			/// </summary>
	class ASPOSE_CELLS_API IVbaModule : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the name of Module.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Sets the name of Module.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the type of module.
			/// </summary>
			 virtual Aspose::Cells::Vba::VbaModuleType GetType()=0;
			/// <summary>
			/// Gets the codes of module.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCodes()=0;
			/// <summary>
			/// Sets the codes of module.
			/// </summary>
			 virtual void SetCodes(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
}
