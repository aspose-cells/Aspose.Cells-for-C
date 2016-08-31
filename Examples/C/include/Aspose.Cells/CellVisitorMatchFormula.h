#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "ICellVisitor.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORMATCHFORMULA() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
class Cells;
class RowCollection;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellVisitorMatchFormula : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			Aspose::Cells::Cells* m_Cells;
			Aspose::Cells::RowCollection* m_Rows;
			intrusive_ptr<Aspose::Cells::System::String> m_Formula;
			bool m_Contains;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Cache;
	public:

			 CellVisitorMatchFormula(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::System::String> formula , bool contains);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorMatchFormula();
		public:
			virtual ~CellVisitorMatchFormula();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
