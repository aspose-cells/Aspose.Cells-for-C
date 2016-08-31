#pragma once
#include "System/Object.h"
#include "XmlAttribute.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_XMLATTRIBUTECOLLECTION() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlAttributeCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Xml::XmlNode* parent;
			 XmlAttributeCollection(intrusive_ptr<Aspose::Cells::Xml::XmlNode> parent , Aspose::Cells::System::Int32 count);
			void Add(intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> attr);
			intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> uri);
			intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> Append(intrusive_ptr<Aspose::Cells::Xml::XmlAttribute> attr);
			 XmlAttributeCollection();
		public:
			virtual ~XmlAttributeCollection();
	};

}

}

}
