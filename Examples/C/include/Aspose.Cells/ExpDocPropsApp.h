#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#define STATIC_EXPDOCPROPSAPP() 

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
	class ExpDocPropsApp : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
	public:

			 ExpDocPropsApp(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpDocPropsApp();
		public:
			virtual ~ExpDocPropsApp();
	};

}

}

}
