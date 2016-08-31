#pragma once
#include "System/Object.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
#define STATIC_ENUMERATOROFROWINCELLS() 

namespace Aspose {
namespace Cells {
class RowCollection;
class Cells;
class Row;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
class AbstractRowCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class EnumeratorOfRowInCells : public Aspose::Cells::System::Collections::IEnumerator , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Cells* cells;
			Aspose::Cells::RowCollection* rows;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> posEN;
			Aspose::Cells::System::Int32 currentPos;
			intrusive_ptr<Aspose::Cells::Row> currentRow;
	public:

			 EnumeratorOfRowInCells(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData);
			 EnumeratorOfRowInCells(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			bool MoveNext();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			void Reset();
			 EnumeratorOfRowInCells();
		public:
			virtual ~EnumeratorOfRowInCells();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
