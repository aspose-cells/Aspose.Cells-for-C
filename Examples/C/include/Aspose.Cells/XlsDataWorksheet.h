#pragma once
//#include "System/String.h"
#include "System/Collections/ArrayList.h"
#include "System/Object.h"
//#include "System/Int32.h"
#define STATIC_XLSDATAWORKSHEET() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
	class XlsDataWorksheet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void InitPivotTables();
	public:

			intrusive_ptr<Aspose::Cells::Worksheet> _sheet;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _PivotTables;
			 XlsDataWorksheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 XlsDataWorksheet();
		public:
			virtual ~XlsDataWorksheet();
	};

}

}

}

}
