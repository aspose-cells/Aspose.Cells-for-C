#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
//#include "System/Exception.h"
#include "System/String.h"
//#include "System/Globalization/CultureInfo.h"
#include "System/Object.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/DateTime.h"
#define STATIC_IMPDOCPROPSCUSTOM() 

namespace Aspose {
namespace Cells {
namespace Properties {
class CustomDocumentPropertyCollection;
class DocumentProperty;
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
namespace Xml {
class XmlTextReader;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpDocPropsCustom : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> _prptes;
			void AddCustomProperty(intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> prpty , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> val , intrusive_ptr<Aspose::Cells::System::String> type);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 ImpDocPropsCustom(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOneProperty(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpDocPropsCustom();
		public:
			virtual ~ImpDocPropsCustom();
	};

}

}

}
