#pragma once
//#include "System/StringHelperPal.h"
#include "System/String.h"
#include "System/Object.h"
#include "PivotFilterType.h"
#include "System/Int32.h"
#define STATIC_PIVOTFILTER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class AutoFilter;
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotFilter : public Aspose::Cells::System::Object
#else	class PivotFilter : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 fieldIndex;
			Aspose::Cells::Pivot::PivotFilterType type;
			Aspose::Cells::System::Int32 id;
			Aspose::Cells::System::Int32 iMeasureFld;
			Aspose::Cells::System::Int32 evalOrder;
			intrusive_ptr<Aspose::Cells::AutoFilter> m_AutoFilter;
			intrusive_ptr<Aspose::Cells::System::String> strValue1;
			intrusive_ptr<Aspose::Cells::System::String> strValue2;
			Aspose::Cells::System::Int32 mpFieldIndex;
			intrusive_ptr<Aspose::Cells::System::String> name;
			 PivotFilter(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::AutoFilter> GetAutoFilter();
			Aspose::Cells::Pivot::PivotFilterType GetFilterType();
			Aspose::Cells::System::Int32 GetFieldIndex();
			intrusive_ptr<Aspose::Cells::System::String> GetValue1();
			void SetValue1(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetValue2();
			void SetValue2(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetMeasureFldIndex();
			void SetMeasureFldIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetMemberPropertyFieldIndex();
			void SetMemberPropertyFieldIndex(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetEvaluationOrder();
			void SetEvaluationOrder(Aspose::Cells::System::Int32 value);
			 PivotFilter();
		public:
			virtual ~PivotFilter();
	};

}

}

}
