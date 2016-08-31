#pragma once
#include "System/Object.h"
#include "XmlNodeListener.h"
//#include "System/String.h"
#define STATIC_DRAWINGNODELISTENER() 

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
	class DrawingNodeListener : public Aspose::Cells::Xml::XmlNodeListener
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Xml::XmlNodeListenerOptions> options;
			 DrawingNodeListener();
			intrusive_ptr<Aspose::Cells::Xml::XmlNodeListenerOptions> CheckNodeOptions(intrusive_ptr<Aspose::Cells::Xml::XmlNode> e);
		public:
			virtual ~DrawingNodeListener();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
