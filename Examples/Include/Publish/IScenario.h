#pragma once
#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		class IScenarioInputCellCollection;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents an individual scenario.
			/// </summary>
	class ASPOSE_CELLS_API IScenario : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the comment of scenario.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetComment()=0;
			/// <summary>
			/// Sets the comment of scenario.
			/// </summary>
			 virtual void SetComment(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the name of scenario.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Sets the name of scenario.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets name of user who last changed the scenario.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetUser()=0;
			/// <summary>
			/// Indicates whether scenario is hidden.
			/// </summary>
			 virtual bool IsHidden()=0;
			/// <summary>
			/// Indicates whether scenario is hidden.
			/// </summary>
			 virtual void SetHidden(bool value)=0;
			/// <summary>
			/// Indicates whether scenario is locked for editing when the sheet is protected.
			/// </summary>
			 virtual bool IsLocked()=0;
			/// <summary>
			/// Indicates whether scenario is locked for editing when the sheet is protected.
			/// </summary>
			 virtual void SetLocked(bool value)=0;
			/// <summary>
			/// Gets the input cells of scenario.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IScenarioInputCellCollection> 		GetIInputCells()=0;

	};
}
}
