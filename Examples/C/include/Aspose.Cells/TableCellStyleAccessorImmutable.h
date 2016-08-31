#pragma once
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "ITableCellStyleAccessor.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#define STATIC_TABLECELLSTYLEACCESSORIMMUTABLE() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellDisplayStyleParams;
}
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObjectCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
	class TableCellStyleAccessorImmutable : public Aspose::Cells::Tables::ITableCellStyleAccessor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> m_Tables;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_StyleMap;
	public:

			 TableCellStyleAccessorImmutable(intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> tables);
			void ApplyStyle(Aspose::Cells::System::Int32 tableIdx , Aspose::Cells::System::Int32 tableXF , intrusive_ptr<Aspose::Cells::CellsSs::CellDisplayStyleParams> p);
			 TableCellStyleAccessorImmutable();
		public:
			virtual ~TableCellStyleAccessorImmutable();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
