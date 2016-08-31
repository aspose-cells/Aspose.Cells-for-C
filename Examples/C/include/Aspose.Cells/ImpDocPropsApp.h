#pragma once
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
//#include "System/Exception.h"
#define STATIC_IMPDOCPROPSAPP() 

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
	class ImpDocPropsApp : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 ReadIntValueAndSkip(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 ImpDocPropsApp(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpDocPropsApp();
		public:
			virtual ~ImpDocPropsApp();
	};

}

}

}
