#pragma once
//#include "System/StringHelperPal.h"
#include "XmlNode.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/CollectionBase.h"
#define STATIC_XMLELEMENT() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlAttribute;
class XmlTextWriter;
class XmlAttributeCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlElement : public Aspose::Cells::Xml::XmlNode
	{
	private:

			void Init_Vars();
	public:

			 XmlElement(intrusive_ptr<Aspose::Cells::Xml::XmlNode> parent);
			intrusive_ptr<Aspose::Cells::Xml::XmlAttributeCollection> _attrs;
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlAttributeCollection> GetAttributes();
			bool IsEmpty();
			intrusive_ptr<Aspose::Cells::System::String> GetAttribute(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::String> GetAttribute(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> namespaceURI);
			bool HasAttributes();
			intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> GetAttributeNode(intrusive_ptr<Aspose::Cells::System::String> name);
			void RemoveAttribute(intrusive_ptr<Aspose::Cells::System::String> name);
			 virtual void SetAttribute(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value);
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetInnerXml();
			 virtual void SetInnerXml(intrusive_ptr<Aspose::Cells::System::String> value);
			 virtual void WriteContentTo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> w);
			 virtual void WriteTo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> w);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			 XmlElement();
		public:
			virtual ~XmlElement();
	};

}

}

}
