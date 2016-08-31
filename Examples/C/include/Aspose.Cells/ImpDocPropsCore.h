#pragma once
//#include "System/DateTime.h"
//#include "System/StringHelperPal.h"
//#include "System/String.h"
#include "System/Object.h"
//#include "System/Int32.h"
//#include "System/Exception.h"
#define STATIC_IMPDOCPROPSCORE() 

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
	class ImpDocPropsCore : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 ImpDocPropsCore(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpDocPropsCore();
		public:
			virtual ~ImpDocPropsCore();
	};

}

}

}
