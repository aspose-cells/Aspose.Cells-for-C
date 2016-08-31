#pragma once
#include "System/Object.h"
#include "TableStyleElement.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "TableStyleElementType.h"
#define STATIC_TABLESTYLEELEMENTCOLLECTION() 

namespace Aspose {
namespace Cells {
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyle;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
#ifdef WIN32

	class ASPOSE_CELLS_API TableStyleElementCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class TableStyleElementCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Tables::TableStyle> m_tableStyle;
	public:

			intrusive_ptr<Aspose::Cells::Tables::TableStyle> GetParent();
			 TableStyleElementCollection(intrusive_ptr<Aspose::Cells::Tables::TableStyle> tableStyle);
			intrusive_ptr<Aspose::Cells::Tables::TableStyleElement> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Tables::TableStyleElement> getByTableStyleElementTypeIndexObject(Aspose::Cells::Tables::TableStyleElementType type);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::Tables::TableStyleElementType type);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Tables::TableStyleElement> element);
			void Copy(intrusive_ptr<Aspose::Cells::Tables::TableStyleElementCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			 TableStyleElementCollection();
		public:
			virtual ~TableStyleElementCollection();
	};

}

}

}
