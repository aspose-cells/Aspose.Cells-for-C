#pragma once
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/Int32.h"
#include "XmlNodeType.h"
#define STATIC_PALXMLUTIL() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlElement;
class XmlTextReader;
class XmlNode;
class XmlAttribute;
class XmlNodeList;
class XmlNodeListener;
class XmlDocument;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class PalXmlUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::Xml::XmlDocument> LoadXmlDocument(intrusive_ptr<Aspose::Cells::System::String> xmlStr);
			static intrusive_ptr<Aspose::Cells::Xml::XmlDocument> LoadXmlDocument(intrusive_ptr<Aspose::Cells::System::String> xmlStr , intrusive_ptr<Aspose::Cells::Xml::XmlNodeListener> nodeListener , bool decodeMSChar);
			static intrusive_ptr<Aspose::Cells::Xml::XmlDocument> LoadXmlDocument(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Xml::XmlNodeListener> nodeListener , bool decodeMSChar);
			static intrusive_ptr<Aspose::Cells::Xml::XmlDocument> LoadXmlDocument(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static bool IsEmpty(intrusive_ptr<Aspose::Cells::Xml::XmlElement> ele);
			static intrusive_ptr<Aspose::Cells::Xml::XmlNodeList> GetElementsByTagName(intrusive_ptr<Aspose::Cells::Xml::XmlElement> element , intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> namespaceURI);
			static intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> GetNamedAttributes(intrusive_ptr<Aspose::Cells::Xml::XmlElement> element , intrusive_ptr<Aspose::Cells::System::String> localName);
			static intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> GetNamedAttributes(intrusive_ptr<Aspose::Cells::Xml::XmlElement> element , intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> namespaceURI);
			static intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> AppendAttribute(intrusive_ptr<Aspose::Cells::Xml::XmlNode> element , intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> attr);
			static intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetFirstChild(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node);
			static intrusive_ptr<Aspose::Cells::Xml::XmlNode> InsertBefore(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node , intrusive_ptr<Aspose::Cells::Xml::XmlNode> newChild , intrusive_ptr<Aspose::Cells::Xml::XmlNode> refChild);
			static intrusive_ptr<Aspose::Cells::System::String> GetInnerXml(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node , bool encodeMSChar);
			static intrusive_ptr<Aspose::Cells::System::String> GetOuterXml(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node , bool encodeMSChar);
			static void SetInnerText(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node , intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::String> GetInnerText(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node);
			static Aspose::Cells::System::Int32 GetNamespacesCount(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> reader);
			static intrusive_ptr<Aspose::Cells::System::String> GetNamespacePrefix(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> reader , Aspose::Cells::System::Int32 index);
			static intrusive_ptr<Aspose::Cells::System::String> GetNamespaceURI(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> reader , Aspose::Cells::System::Int32 index);
			static Aspose::Cells::Xml::XmlNodeType GetNodeType(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node);
			static void RemoveAttribute(intrusive_ptr<Aspose::Cells::Xml::XmlElement> elem , intrusive_ptr<Aspose::Cells::System::String> attribute);
			static bool MoveToNextElement(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 PalXmlUtil();
		public:
			virtual ~PalXmlUtil();
	};

}

}

}
