#pragma once
#include "System/Object.h"
#include "System/Collections/CollectionBase.h"
#include "PivotFilter.h"
#include "PivotFilterType.h"
#include "System/Int32.h"
//#include "System/String.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTFILTERCOLLECTION() 

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

	class ASPOSE_CELLS_API PivotFilterCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class PivotFilterCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Pivot::PivotTable* _table;
			 PivotFilterCollection(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table);
			intrusive_ptr<Aspose::Cells::Pivot::PivotFilter> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::Pivot::PivotFilter> filter);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 fieldIndex , Aspose::Cells::Pivot::PivotFilterType type);
			void ClearFilter(Aspose::Cells::System::Int32 fieldIndex);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotFilterCollection> pfs);
			 PivotFilterCollection();
		public:
			virtual ~PivotFilterCollection();
	};

}

}

}
