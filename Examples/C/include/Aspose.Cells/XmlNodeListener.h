#pragma once
#include "System/Object.h"
#define STATIC_XMLNODELISTENER() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlNodeListenerOptions;
class XmlNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlNodeListener : public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::Xml::XmlNodeListenerOptions> CheckNodeOptions(intrusive_ptr<Aspose::Cells::Xml::XmlNode> e) = 0;
		public:
	};

}

}

}
