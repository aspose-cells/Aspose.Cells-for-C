#pragma once
//#include "System/Collections/CollectionBase.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "PivotTableStyleType.h"
#include "FilterType.h"
#include "PivotConditionFormatRuleType.h"
#include "PivotConditionFormatScopeType.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "PivotFilterType.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "PivotGroupByType.h"
#define STATIC_PIVOTUTIL() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFormatConditionCollection;
class PivotFormatCondition;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> PivotConditionFormatScopeTypeToString(Aspose::Cells::Pivot::PivotConditionFormatScopeType type);
			static Aspose::Cells::Pivot::PivotConditionFormatScopeType GetPivotConditionFormatScopeTypeFromString(intrusive_ptr<Aspose::Cells::System::String> type);
			static intrusive_ptr<Aspose::Cells::System::String> PivotConditionFormatRuleTypeToString(Aspose::Cells::Pivot::PivotConditionFormatRuleType type);
			static Aspose::Cells::Pivot::PivotConditionFormatRuleType GetPivotConditionFormatRuleTypeFromString(intrusive_ptr<Aspose::Cells::System::String> type);
			static Aspose::Cells::Pivot::PivotGroupByType ToPivotGroupByType(Aspose::Cells::System::Int32 type);
			static intrusive_ptr<Aspose::Cells::System::String> PivotGroupByTypeToString(Aspose::Cells::Pivot::PivotGroupByType type);
			static Aspose::Cells::System::Int32 FromPivotGroupByType(Aspose::Cells::Pivot::PivotGroupByType type);
			static Aspose::Cells::Pivot::PivotFilterType GetPivotFilterType(intrusive_ptr<Aspose::Cells::System::String> type);
			static intrusive_ptr<Aspose::Cells::System::String> PivotFilterTypeToString(Aspose::Cells::Pivot::PivotFilterType type);
			static Aspose::Cells::FilterType GetFilterTypeFromPivotFilterType(Aspose::Cells::Pivot::PivotFilterType type);
			static bool IsPivotValueFilter(Aspose::Cells::Pivot::PivotFilterType type);
			static intrusive_ptr<Aspose::Cells::System::String> ReadString(Aspose::Cells::System::Int32& offset , Aspose::Cells::System::Int32 count , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static intrusive_ptr<Aspose::Cells::System::String> GetPivotChartSourceName(intrusive_ptr<Aspose::Cells::System::String> pName , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertPivotStyleTypeToString(Aspose::Cells::Pivot::PivotTableStyleType type);
			static Aspose::Cells::Pivot::PivotTableStyleType ConvertStringToPivotStyleType(intrusive_ptr<Aspose::Cells::System::String> name);
			static Aspose::Cells::System::Int32 CountOfX14PivotConditionalFormats(intrusive_ptr<Aspose::Cells::Pivot::PivotFormatConditionCollection> pfcs);
			static void CountWorksheetPivotFormatCondition(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool isReading);
			static void CountPivotFormatCondition(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::Pivot::PivotFormatCondition> pfc);
			 PivotUtil();
		public:
			virtual ~PivotUtil();
	};

}

}

}
