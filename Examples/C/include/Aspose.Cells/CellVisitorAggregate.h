#pragma once
#include "System/Object.h"
#include "CellVisitorAlgorithm.h"
//#include "System/Int32.h"
//#include "System/Byte.h"
#define STATIC_CELLVISITORAGGREGATE() 

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
	class CellVisitorAggregate : public Aspose::Cells::FormulaModel::CellVisitorAlgorithm
	{
	protected:

			 virtual bool IgnoreRow(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			 virtual bool IgnoreFormula(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
	private:

			void Init_Vars();
			bool _ignoreHidden;
			bool _ignoreSubtotal;
			bool _ignoreAggregate;
	public:

			 CellVisitorAggregate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> algorithm , bool ignoreHidden , bool ignoreSubtotal , bool ignoreAggregate);
			 CellVisitorAggregate();
		public:
			virtual ~CellVisitorAggregate();
	};

}

}

}
