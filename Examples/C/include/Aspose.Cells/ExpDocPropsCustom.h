#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/DateTime.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#define STATIC_EXPDOCPROPSCUSTOM() 

namespace Aspose {
namespace Cells {
namespace Properties {
class DocumentProperty;
}
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
class Workbook;
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
	class ExpDocPropsCustom : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
			void WriteOneProperty(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> prop , Aspose::Cells::System::Int32 idx);
	public:

			 ExpDocPropsCustom(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpDocPropsCustom();
		public:
			virtual ~ExpDocPropsCustom();
	};

}

}

}
