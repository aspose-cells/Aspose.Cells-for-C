#pragma once
#include "XmlNode.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
//#include "System/Text/Encoding.h"
#include "System/IO/Stream.h"
#define STATIC_XMLDOCUMENT() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlElement;
class XmlAttribute;
class XmlTextWriter;
class XmlDeclaration;
class XmlNodeListener;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlDocument : public Aspose::Cells::Xml::XmlNode
	{
	private:

			void Init_Vars();
	public:

			 XmlDocument(intrusive_ptr<Aspose::Cells::Xml::XmlNodeListener> listener);
			 XmlDocument();
			intrusive_ptr<Aspose::Cells::Xml::XmlNodeListener> Listener;
			void Load(intrusive_ptr<Aspose::Cells::System::String> fileName);
			void Load(intrusive_ptr<Aspose::Cells::System::String> fileName , bool decodeMSChar);
			void Load(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , bool decodeMSChar , bool preserve);
			void Load(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			void LoadXml(intrusive_ptr<Aspose::Cells::System::String> xmlStr , bool decodeMSChar , bool isFile);
			intrusive_ptr<Aspose::Cells::Xml::XmlElement> GetDocumentElement();
			intrusive_ptr<Aspose::Cells::Xml::XmlElement> GetRootElement();
			intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> CreateAttribute(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> CreateAttribute(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> attrName , intrusive_ptr<Aspose::Cells::System::String> nsURI);
			intrusive_ptr<Aspose::Cells::Xml::XmlElement> CreateElement(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Xml::XmlElement> CreateElement(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> nsURI);
			intrusive_ptr<Aspose::Cells::Xml::XmlElement> CreateElement(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> nsURI);
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlDeclaration> CreateXmlDeclaration(intrusive_ptr<Aspose::Cells::System::String> version , intrusive_ptr<Aspose::Cells::System::String> encoding , intrusive_ptr<Aspose::Cells::System::String> standalone);
			void Save(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , bool encodeMSChar);
			void Save(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 virtual void WriteContentTo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> xw);
			 virtual void WriteTo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> w);
		public:
			virtual ~XmlDocument();
	};

}

}

}
