#pragma once
#include "System/Object.h"
#include "ITableCellStyleAccessor.h"
#include "System/Int32.h"
#define STATIC_TABLECELLSTYLEACCESSORDIRECT() 

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
	class TableCellStyleAccessorDirect : public Aspose::Cells::Tables::ITableCellStyleAccessor
	{
	private:

			void Init_Vars();
			Aspose::Cells::Tables::ListObjectCollection* m_Tables;
	public:

			 TableCellStyleAccessorDirect(intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> tables);
			void ApplyStyle(Aspose::Cells::System::Int32 tableIdx , Aspose::Cells::System::Int32 tableXF , intrusive_ptr<Aspose::Cells::CellsSs::CellDisplayStyleParams> p);
			 TableCellStyleAccessorDirect();
		public:
			virtual ~TableCellStyleAccessorDirect();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
