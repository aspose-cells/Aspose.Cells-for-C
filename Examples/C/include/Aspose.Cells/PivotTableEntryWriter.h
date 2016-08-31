#pragma once
#include "System/Object.h"
#include "AbstractEntryWriter.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_PIVOTTABLEENTRYWRITER() 

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
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class PivotTableEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pTable;
	public:

			 PivotTableEntryWriter(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table);
			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			 PivotTableEntryWriter();
		public:
			virtual ~PivotTableEntryWriter();
	};

}

}

}
