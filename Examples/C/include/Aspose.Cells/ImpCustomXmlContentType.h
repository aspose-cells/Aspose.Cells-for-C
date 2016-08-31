#pragma once
//#include "System/StringHelperPal.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_IMPCUSTOMXMLCONTENTTYPE() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace Properties {
class ContentTypePropertyCollection;
class ContentTypeProperty;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpCustomXmlContentType : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Properties::ContentTypePropertyCollection> _ctps;
			Aspose::Cells::System::Int32 maxIndex;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ReadMetadata(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			 ImpCustomXmlContentType(intrusive_ptr<Aspose::Cells::Properties::ContentTypePropertyCollection> _ctps);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSimpleType(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Properties::ContentTypeProperty> property);
			void ReadEnum(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Properties::ContentTypeProperty> property);
			void ReadElement(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Properties::ContentTypeProperty> property);
			void ReadCustomSchema(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::String> targetNameSpace);
			 ImpCustomXmlContentType();
		public:
			virtual ~ImpCustomXmlContentType();
	};

}

}

}
