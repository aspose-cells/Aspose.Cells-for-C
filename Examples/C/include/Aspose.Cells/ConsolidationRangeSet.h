#pragma once
#include "System/Array1D.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_CONSOLIDATIONRANGESET() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SheetPivotCacheDataSource;
class ConsolidationPivotCacheDataSource;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class ConsolidationRangeSet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _sxTBPG;
			intrusive_ptr<Aspose::Cells::Pivot::SheetPivotCacheDataSource> _source;
			Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource* _parent;
			 ConsolidationRangeSet(intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> parent , Aspose::Cells::System::Int32 pageCount);
			 ConsolidationRangeSet();
		public:
			virtual ~ConsolidationRangeSet();
	};

}

}

}
