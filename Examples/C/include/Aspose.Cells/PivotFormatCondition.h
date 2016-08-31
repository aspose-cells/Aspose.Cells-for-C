#pragma once
#include "PivotConditionFormatScopeType.h"
//#include "System/Boxing.h"
#include "PivotConditionFormatRuleType.h"
#include "System/Object.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTFORMATCONDITION() 

namespace Aspose {
namespace Cells {
class FormatConditionCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFormatConditionCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotFormatCondition : public Aspose::Cells::System::Object
#else	class PivotFormatCondition : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Pivot::PivotFormatConditionCollection* _u_pivoFmtConds;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_ruleList;
			Aspose::Cells::System::Int32 m_priority;
			Aspose::Cells::Pivot::PivotConditionFormatScopeType m_scopeType;
			Aspose::Cells::Pivot::PivotConditionFormatRuleType m_ruleType;
			intrusive_ptr<Aspose::Cells::FormatConditionCollection> _fcs;
			 PivotFormatCondition(intrusive_ptr<Aspose::Cells::Pivot::PivotFormatConditionCollection> pivoFmtConds , bool addList);
			Aspose::Cells::Pivot::PivotConditionFormatScopeType GetScopeType();
			void SetScopeType(Aspose::Cells::Pivot::PivotConditionFormatScopeType value);
			Aspose::Cells::Pivot::PivotConditionFormatRuleType GetRuleType();
			void SetRuleType(Aspose::Cells::Pivot::PivotConditionFormatRuleType value);
			intrusive_ptr<Aspose::Cells::FormatConditionCollection> GetInternalFormatConditions();
			intrusive_ptr<Aspose::Cells::FormatConditionCollection> GetFormatConditions();
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotFormatCondition> pfs);
			 PivotFormatCondition();
		public:
			virtual ~PivotFormatCondition();
	};

}

}

}
