#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Exception.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_IMPXMLMAPS() 

namespace Aspose {
namespace Cells {
class XmlDataBinding;
}
}
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
	class ImpXmlMaps : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void ReadDataBinding(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::XmlDataBinding> binding);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 ImpXmlMaps(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOneMap(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpXmlMaps();
		public:
			virtual ~ImpXmlMaps();
	};

}

}

}
