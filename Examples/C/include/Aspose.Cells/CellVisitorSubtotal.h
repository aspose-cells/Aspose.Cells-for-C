#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "CellVisitorAlgorithm.h"
//#include "System/Int32.h"
#define STATIC_CELLVISITORSUBTOTAL() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IStatisticsAlgorithm;
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
class FormulaCell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorSubtotal : public Aspose::Cells::FormulaModel::CellVisitorAlgorithm
	{
	protected:

			 virtual bool IgnoreRow(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			 virtual bool IgnoreFormula(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
	private:

			void Init_Vars();
			bool IgnoresHiddenValues;
	public:

			 CellVisitorSubtotal(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> algorithm , bool ignoresHiddenValues);
			 CellVisitorSubtotal();
		public:
			virtual ~CellVisitorSubtotal();
	};

}

}

}
