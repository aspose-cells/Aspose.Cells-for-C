#pragma once
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_PIVOTITEMNODE() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotItem;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotItemNode : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Pivot::PivotItem> PivotItem;
			Aspose::Cells::System::Int32 ItemIndex;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> C8Records;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Children;
			 PivotItemNode();
		public:
			virtual ~PivotItemNode();
	};

}

}

}
