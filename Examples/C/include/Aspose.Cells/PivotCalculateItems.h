#pragma once
#include "System/Object.h"
#include "PivotCalculatedItem.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#define STATIC_PIVOTCALCULATEITEMS() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCalculateItems : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			 PivotCalculateItems();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
		public:
			virtual ~PivotCalculateItems();
	};

}

}

}
