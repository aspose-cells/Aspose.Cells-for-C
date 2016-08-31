#pragma once
#include "System/Object.h"
#include "CellsAccessorConditionalCellCache.h"
#include "System/Int32.h"
#define STATIC_CELLSACCESSORFORMULACELLCACHE() 

namespace Aspose {
namespace Cells {
class RowCollection;
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellsAccessorFormulaCellCache : public Aspose::Cells::CellsSs::CellsAccessorConditionalCellCache
	{
	protected:

			 virtual bool Cache(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 pos);
	private:

			void Init_Vars();
	public:

			 CellsAccessorFormulaCellCache(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows);
			 CellsAccessorFormulaCellCache();
		public:
			virtual ~CellsAccessorFormulaCellCache();
	};

}

}

}
