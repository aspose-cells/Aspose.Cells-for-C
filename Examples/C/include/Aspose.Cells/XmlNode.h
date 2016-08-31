#pragma once
#include "System/Text/StringBuilder.h"
#include "System/Collections/IEnumerator.h"
//#include "System/StringHelperPal.h"
//#include "System/GC.h"
//#include "System/Char.h"
#include "System/Collections/IEnumerable.h"
#include "System/Object.h"
#include "XmlNodeType.h"
#include "System/Array1D.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_XMLNODE() 

namespace Aspose {
namespace Cells {
namespace Xml {
class NodeData;
class XmlAttributeCollection;
class XmlTextWriter;
class XmlNodeList;
class XmlNodeListener;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlNode : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void AppendChildText(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> builder);
	public:

			Aspose::Cells::Xml::XmlNode* ParentNode;
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> Next;
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> LastNode;
			Aspose::Cells::Xml::XmlNodeType NodeType;
			intrusive_ptr<Aspose::Cells::System::String> Prefix;
			intrusive_ptr<Aspose::Cells::System::String> LocalName;
			intrusive_ptr<Aspose::Cells::System::String> Value;
			intrusive_ptr<Aspose::Cells::System::String> _Name;
			bool EncodeMSChar;
			 virtual void Dispose();
			 XmlNode(intrusive_ptr<Aspose::Cells::Xml::XmlNode> parent , Aspose::Cells::Xml::XmlNodeType type);
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetText();
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetInnerText();
			 virtual void SetInnerText(intrusive_ptr<Aspose::Cells::System::String> value);
			 virtual void RemoveAll();
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> AppendChild(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node);
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> InsertBefore(intrusive_ptr<Aspose::Cells::Xml::XmlNode> newChild , intrusive_ptr<Aspose::Cells::Xml::XmlNode> refChild);
			intrusive_ptr<Aspose::Cells::Xml::XmlNodeListener> GetListenser();
			intrusive_ptr<Aspose::Cells::Xml::XmlNodeList> GetElementsByTagName(intrusive_ptr<Aspose::Cells::System::String> tagName);
			intrusive_ptr<Aspose::Cells::Xml::XmlNodeList> GetElementsByTagName(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> namespaceURI);
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetOuterXml();
			 virtual void WriteContentTo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> w);
			 virtual void WriteTo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> w);
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetInnerXml();
			 virtual void SetInnerXml(intrusive_ptr<Aspose::Cells::System::String> value);
			bool HasChildNodes();
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetLastChild();
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName();
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Xml::XmlNodeList> GetChildNodes();
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetFirstChild();
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetNextSibling();
			void Copy(intrusive_ptr<Aspose::Cells::Xml::NodeData> source);
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlAttributeCollection> GetAttributes();
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> SelectSingleNode(intrusive_ptr<Aspose::Cells::System::String> xpath);
			 XmlNode();
		public:
			virtual ~XmlNode();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
