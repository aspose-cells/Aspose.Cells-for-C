#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "AbstractEntryWriter.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_PIVOTRECORDSENTRYWRITER() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataPivotCache;
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class PivotRecordsEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataPivotCache;
			 PivotRecordsEntryWriter(intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataPivotCache);
			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			 PivotRecordsEntryWriter();
		public:
			virtual ~PivotRecordsEntryWriter();
	};

}

}

}
