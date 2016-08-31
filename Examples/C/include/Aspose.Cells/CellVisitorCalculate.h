#pragma once
#include "CellData.h"
#include "System/Object.h"
#include "ICellVisitor.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORCALCULATE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
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
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorCalculate : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> m_RelInfo;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
	public:

			 CellVisitorCalculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void StartSheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void FinishSheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorCalculate();
		public:
			virtual ~CellVisitorCalculate();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
