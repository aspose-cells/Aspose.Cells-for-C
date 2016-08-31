#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#define STATIC_DATAPIVOTTABLE() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataPivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataPivotTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Idx;
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> PivotTable;
			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> DataPivotCache;
			 DataPivotTable(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::System::String> idx);
			 DataPivotTable();
		public:
			virtual ~DataPivotTable();
	};

}

}

}
