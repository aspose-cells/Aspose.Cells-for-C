#pragma once
#include "System/Object.h"
#define STATIC_CELLSIMMUTABLECACHE() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IColumnStyleAccessor;
class ICellsAccessor;
class IColumnWidthAccessor;
class IRowHeightAccessor;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellsImmutableCache : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::CellsSs::ICellsAccessor> CellsAccessor;
			intrusive_ptr<Aspose::Cells::CellsSs::IColumnStyleAccessor> ColumnStyleAccessor;
			intrusive_ptr<Aspose::Cells::CellsSs::IColumnWidthAccessor> ColumnWidthAccessor;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightAccessor> RowHeightAccessor;
			 CellsImmutableCache();
		public:
			virtual ~CellsImmutableCache();
	};

}

}

}
