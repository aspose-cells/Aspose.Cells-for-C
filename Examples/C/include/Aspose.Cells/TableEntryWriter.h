#pragma once
#include "System/Object.h"
#include "AbstractEntryWriter.h"
#define STATIC_TABLEENTRYWRITER() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class TableEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
	public:

			 TableEntryWriter(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			 TableEntryWriter();
		public:
			virtual ~TableEntryWriter();
	};

}

}

}
