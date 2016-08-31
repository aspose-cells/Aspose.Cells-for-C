#pragma once
#include "ConsolidationFunction.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/DateTime.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTCALCULATORHELPER() 

namespace Aspose {
namespace Cells {
class Cell;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class SxLiItem;
class PivotField;
class PivotCache;
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCalculatorHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool IsReport(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			static bool IsActualReport(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			static bool HasCorner(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			static bool AddNumberic(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::System::Int32& count);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetNumbericList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> C8Records , bool ignore , intrusive_ptr<Aspose::Cells::Pivot::PivotField> dataField , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> flags , Aspose::Cells::ConsolidationFunction function , intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::Pivot::SxLiItem> item , Aspose::Cells::System::Int32& count , bool& hasItem);
			 PivotCalculatorHelper();
		public:
			virtual ~PivotCalculatorHelper();
	};

}

}

}
