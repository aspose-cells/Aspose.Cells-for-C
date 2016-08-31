#pragma once
//#include "System/Collections/CollectionBase.h"
//#include "System/IO/MemoryStream.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Collections/SortedList.h"
//#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_IMPCUSTOMXMLITEM() 

namespace Aspose {
namespace Cells {
namespace Properties {
class ContentTypePropertyCollection;
class CustomDocumentPropertyCollection;
}
}
}
namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Ss {
class FileSystem;
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
	class ImpCustomXmlItem : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> nameSpaceMaps;
			void ReadProperties(intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> properties);
			bool DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			 ImpCustomXmlItem(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void ReadCustomXml(intrusive_ptr<Aspose::Ss::FileSystem> fs);
			void Read();
			void ReadContentTypeSchema(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadProperties(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadDocumentManagement(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Properties::ContentTypePropertyCollection> _ctps);
			 ImpCustomXmlItem();
		public:
			virtual ~ImpCustomXmlItem();
	};

}

}

}
