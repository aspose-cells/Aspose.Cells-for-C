#pragma once
//#include "System/IO/StreamWriter.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/DateTime.h"
//#include "System/Text/UTF8Encoding.h"
#include "System/Text/Encoding.h"
#define STATIC_PALXMLSTREAMUTIL() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
class XmlTextReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class PalXmlStreamUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 PalXmlStreamUtil();
	public:

			static intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> CreateXmlTextWriter(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::System::Text::Encoding> encoding);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> CreateXmlTextReader(intrusive_ptr<Aspose::Cells::System::String> xml , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> namespaces);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> CreateXmlReader(intrusive_ptr<Aspose::Cells::System::IO::Stream> s , intrusive_ptr<Aspose::Cells::System::Text::Encoding> coding);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> CreateXmlReader(intrusive_ptr<Aspose::Cells::System::IO::Stream> s);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> CreateXmlReader(intrusive_ptr<Aspose::Cells::System::String> file , bool isFile);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> CreateXmlReader(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile , intrusive_ptr<Aspose::Cells::System::String> entryName , bool encodeMSChar);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> CreateVmlReader(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile , intrusive_ptr<Aspose::Cells::System::String> entryName);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> CreateXmlWriter(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool encodeMSChar);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> CreateXmlWriter(intrusive_ptr<Aspose::Cells::System::IO::Stream> s , bool encodeMSChar);
		public:
			virtual ~PalXmlStreamUtil();
	};

}

}

}
