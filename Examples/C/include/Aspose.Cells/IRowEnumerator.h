#pragma once
#include "System/Object.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
#define STATIC_IROWENUMERATOR() 

namespace Aspose {
namespace Cells {
class RowCollection;
class Row;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRowCollection;
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IRowEnumerator : public Aspose::Cells::System::Collections::IEnumerator , public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData() = 0;
			virtual intrusive_ptr<Aspose::Cells::RowCollection> GetCurrentRows() = 0;
			virtual Aspose::Cells::System::Int32 GetCurrentRowPosition() = 0;
			virtual intrusive_ptr<Aspose::Cells::Row> GetCurrentRow() = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetCurrentRowData() = 0;
			virtual void Sync() = 0;
			virtual bool GetImmutableRows() = 0;
			virtual void SyncRows(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPosition) = 0;
			virtual void MoveTo(Aspose::Cells::System::Int32 rowIndex) = 0;
		public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
