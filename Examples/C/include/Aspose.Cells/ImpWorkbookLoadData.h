#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
//#include "System/Int32.h"
#define STATIC_IMPWORKBOOKLOADDATA() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpWorkbookLoadData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			void ReadSheets(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			bool IsRowsAddress(intrusive_ptr<Aspose::Cells::System::String> range);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			 ImpWorkbookLoadData(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpWorkbookLoadData();
		public:
			virtual ~ImpWorkbookLoadData();
	};

}

}

}
