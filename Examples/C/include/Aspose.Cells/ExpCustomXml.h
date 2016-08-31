#pragma once
//#include "System/Int32Helper.h"
//#include "System/Collections/ArrayList.h"
//#include "System/IO/Stream.h"
#include "System/IO/MemoryStream.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Collections/ICollection.h"
//#include "System/Byte.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_EXPCUSTOMXML() 

namespace Aspose {
namespace Cells {
namespace Properties {
class ContentTypePropertyCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
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
class XmlTextWriter;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpCustomXml : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void WriteItem2(intrusive_ptr<Aspose::Cells::System::String> name);
			void WriteItemProps2(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> maps);
			intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> CreateWrite(intrusive_ptr<Aspose::Cells::System::String> fn , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms);
			void WriteItem3(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms);
			void WriteItemProps3(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms);
			void WriteItem1(intrusive_ptr<Aspose::Cells::System::String> itemName , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> maps , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms);
			void WriteItemProps1(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> maps , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms);
			void WriteRel(intrusive_ptr<Aspose::Cells::System::String> itemName , intrusive_ptr<Aspose::Cells::System::String> itemPropName);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> _s;
			intrusive_ptr<Aspose::Ss::FileSystem> _fs;
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::Properties::ContentTypePropertyCollection> prptes;
			 ExpCustomXml(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s);
			 ExpCustomXml(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Ss::FileSystem> fs);
			void Write();
			void Write03();
			void Write07();
			 ExpCustomXml();
		public:
			virtual ~ExpCustomXml();
	};

}

}

}
