#pragma once
#include "XmlTextReader.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/Char.h"
//#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_VMLTEXTREADER() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlNode;
class XmlNodeListener;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class VmlTextReader : public Aspose::Cells::Xml::XmlTextReader
	{
	private:

			void Init_Vars();
	public:

			 VmlTextReader(intrusive_ptr<Aspose::Cells::System::IO::Stream> s);
			 VmlTextReader(intrusive_ptr<Aspose::Cells::System::String> s , bool isFile);
			 virtual void Skip();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ReadInnerXml();
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlNode> ReadDomNode(intrusive_ptr<Aspose::Cells::Xml::XmlNodeListener> listener , bool startWithDoc);
			 VmlTextReader();
		public:
			virtual ~VmlTextReader();
	};

}

}

}
