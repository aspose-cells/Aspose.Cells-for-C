#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "XmlNode.h"
#include "System/String.h"
#define STATIC_XMLTEXT() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlText : public Aspose::Cells::Xml::XmlNode
	{
	private:

			void Init_Vars();
	public:

			 XmlText(intrusive_ptr<Aspose::Cells::Xml::XmlNode> parent);
			 virtual void WriteTo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> w);
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetInnerText();
			 virtual void SetInnerText(intrusive_ptr<Aspose::Cells::System::String> value);
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetInnerXml();
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetOuterXml();
			 XmlText();
		public:
			virtual ~XmlText();
	};

}

}

}
