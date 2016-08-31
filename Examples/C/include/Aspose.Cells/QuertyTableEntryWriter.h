#pragma once
#include "System/Object.h"
//#include "System/String.h"
#include "AbstractEntryWriter.h"
#define STATIC_QUERTYTABLEENTRYWRITER() 

namespace Aspose {
namespace Cells {
class QueryTable;
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
	class QuertyTableEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::QueryTable> queryTable;
			 QuertyTableEntryWriter(intrusive_ptr<Aspose::Cells::QueryTable> queryTable);
			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			 QuertyTableEntryWriter();
		public:
			virtual ~QuertyTableEntryWriter();
	};

}

}

}
