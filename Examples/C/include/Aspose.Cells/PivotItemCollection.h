#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "PivotItem.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTITEMCOLLECTION() 

namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}
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
#ifdef WIN32

	class ASPOSE_CELLS_API PivotItemCollection : public Aspose::Cells::System::Object
#else	class PivotItemCollection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Pivot::PivotField* _u_pivotField;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> InnerList;
			 PivotItemCollection(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Pivot::PivotItem> pivotItem);
			intrusive_ptr<Aspose::Cells::Pivot::PivotItem> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Pivot::PivotItem> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> itemValue);
			Aspose::Cells::System::Int32 GetCount();
			void RemoveAt(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 CountOfHiddenItems();
			void ChangeitemsOrder(Aspose::Cells::System::Int32 sourceIndex , Aspose::Cells::System::Int32 destIndex);
			void MoveDown(Aspose::Cells::System::Int32 currentIndex , Aspose::Cells::System::Int32 nextIndex);
			void MoveUp(Aspose::Cells::System::Int32 currentIndex , Aspose::Cells::System::Int32 nextIndex);
			Aspose::Cells::System::Int32 Postion(intrusive_ptr<Aspose::Cells::Pivot::PivotItem> item);
			void Write(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			 PivotItemCollection();
		public:
			virtual ~PivotItemCollection();
	};

}

}

}
