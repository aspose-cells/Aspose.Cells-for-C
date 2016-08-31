#pragma once
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "PivotFormatCondition.h"
#include "System/Int32.h"
#define STATIC_PIVOTFORMATCONDITIONCOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotFormatConditionCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class PivotFormatConditionCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Worksheet* _sheet;
			Aspose::Cells::Pivot::PivotTable* _table;
			 PivotFormatConditionCollection(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			Aspose::Cells::System::Int32 AddPivotFormatCondition();
			Aspose::Cells::System::Int32 Add();
			intrusive_ptr<Aspose::Cells::Pivot::PivotFormatCondition> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotFormatConditionCollection> pfcs);
			 PivotFormatConditionCollection();
		public:
			virtual ~PivotFormatConditionCollection();
	};

}

}

}
