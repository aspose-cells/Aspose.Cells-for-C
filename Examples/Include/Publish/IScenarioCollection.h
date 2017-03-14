#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IScenario;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the list of scenarios.
			/// </summary>
	class ASPOSE_CELLS_API IScenarioCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets which scenario is selected.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetActiveIndex()=0;
			/// <summary>
			/// Sets which scenario is selected.
			/// </summary>
			 virtual void SetActiveIndex(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Indicates which scenario was last selected by the user to be run/shown.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetLastSelected()=0;
			/// <summary>
			/// Indicates which scenario was last selected by the user to be run/shown.
			/// </summary>
			 virtual void SetLastSelected(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the <see cref="IScenario" />
			///  object by the index.
			/// </summary>
			/// <param name="index" >The specific index in the list.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IScenario> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Adds a scenario.
			/// </summary>
			/// <param name="name" >The name of scenario.</param>
			/// <returns>The index in the list of scenarios.</returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name)=0;

	};
}
}
