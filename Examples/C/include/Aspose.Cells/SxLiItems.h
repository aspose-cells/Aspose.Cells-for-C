#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "SxLiItem.h"
#define STATIC_SXLIITEMS() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotField;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxLiItems : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> InnerList;
			 SxLiItems();
			intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> GetIndexObject(Aspose::Cells::System::Int32 index);
			void InsertField();
			void AddField();
			void RemoveField(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , Aspose::Cells::System::Int32 baseIndex , Aspose::Cells::System::Int32 fieldIndex);
		public:
			virtual ~SxLiItems();
	};

}

}

}
