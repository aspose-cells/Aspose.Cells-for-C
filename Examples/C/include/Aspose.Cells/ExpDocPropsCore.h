#pragma once
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/DateTime.h"
//#include "System/Int32.h"
#define STATIC_EXPDOCPROPSCORE() 

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
	class ExpDocPropsCore : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
	public:

			 ExpDocPropsCore(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpDocPropsCore();
		public:
			virtual ~ExpDocPropsCore();
	};

}

}

}
