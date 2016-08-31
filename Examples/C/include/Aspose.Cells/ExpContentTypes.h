#pragma once
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_EXPCONTENTTYPES() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpWhole;
}
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpContentTypes : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
			void WriteDefault(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> extension , intrusive_ptr<Aspose::Cells::System::String> contentType);
			void WriteOverride(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> partName , intrusive_ptr<Aspose::Cells::System::String> contentType);
	public:

			 ExpContentTypes(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			void WriteContentType(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpContentTypes();
		public:
			virtual ~ExpContentTypes();
	};

}

}

}
