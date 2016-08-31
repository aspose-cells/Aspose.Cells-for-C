#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Text/StringBuilder.h"
#include "XmlNode.h"
#include "System/String.h"
#define STATIC_XMLDECLARATION() 

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
	class XmlDeclaration : public Aspose::Cells::Xml::XmlNode
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Encoding;
			intrusive_ptr<Aspose::Cells::System::String> Standalone;
			intrusive_ptr<Aspose::Cells::System::String> Version;
			 XmlDeclaration(intrusive_ptr<Aspose::Cells::System::String> version , intrusive_ptr<Aspose::Cells::System::String> encoding , intrusive_ptr<Aspose::Cells::System::String> standalone , intrusive_ptr<Aspose::Cells::Xml::XmlNode> parent);
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName();
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetInnerText();
			 virtual void SetInnerText(intrusive_ptr<Aspose::Cells::System::String> value);
			 virtual void WriteTo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> w);
			 XmlDeclaration();
		public:
			virtual ~XmlDeclaration();
	};

}

}

}
