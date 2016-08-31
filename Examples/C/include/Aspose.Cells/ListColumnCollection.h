#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "ListColumn.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_LISTCOLUMNCOLLECTION() 

namespace Aspose {
namespace Cells {
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
#ifdef WIN32

	class ASPOSE_CELLS_API ListColumnCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ListColumnCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Tables::ListObject* m_listObject;
	public:

			 ListColumnCollection(intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
			void Insert(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Tables::ListColumn> lc);
			void Copy(intrusive_ptr<Aspose::Cells::Tables::ListColumnCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			intrusive_ptr<Aspose::Cells::Tables::ListColumn> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Tables::ListColumn> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 GetMaxId();
			Aspose::Cells::System::Int32 GetListColumnIndex(intrusive_ptr<Aspose::Cells::System::String> name);
			bool HasTotalRow();
			void Add(intrusive_ptr<Aspose::Cells::Tables::ListColumn> listColumn);
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetParent();
			 ListColumnCollection();
		public:
			virtual ~ListColumnCollection();
	};

}

}

}
