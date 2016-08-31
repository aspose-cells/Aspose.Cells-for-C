#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_EXPXMLMAPS() 

namespace Aspose {
namespace Cells {
class XmlMap;
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
	class ExpXmlMaps : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
			void WriteOneMap(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::XmlMap> map);
	public:

			 ExpXmlMaps(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			 ExpXmlMaps(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpXmlMaps();
		public:
			virtual ~ExpXmlMaps();
	};

}

}

}
