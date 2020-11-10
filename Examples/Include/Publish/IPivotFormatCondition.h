#pragma once
#include "Aspose.Cells.Systems/Object.h"

namespace Aspose {
	namespace Cells {
		namespace Pivot {
			enum PivotConditionFormatScopeType;
			enum PivotConditionFormatRuleType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IFormatConditionCollection;
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents a PivotTable Format Condition in PivotFormatCondition Collection.
			/// </summary>
	class ASPOSE_CELLS_API IPivotFormatCondition : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Get scope type for the pivot talbe condition format .
			/// </summary>
			 virtual Aspose::Cells::Pivot::PivotConditionFormatScopeType GetScopeType()=0;
			/// <summary>
			/// Set scope type for the pivot talbe condition format .
			/// </summary>
			 virtual void SetScopeType(Aspose::Cells::Pivot::PivotConditionFormatScopeType value)=0;
			/// <summary>
			/// Get rule type for the pivot talbe condition format .
			/// </summary>
			 virtual Aspose::Cells::Pivot::PivotConditionFormatRuleType GetRuleType()=0;
			/// <summary>
			/// Set rule type for the pivot talbe condition format .
			/// </summary>
			 virtual void SetRuleType(Aspose::Cells::Pivot::PivotConditionFormatRuleType value)=0;
			/// <summary>
			/// Get formatconditions for the pivot talbe condition format .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFormatConditionCollection> 		GetIFormatConditions()=0;

	};
}
}
}
