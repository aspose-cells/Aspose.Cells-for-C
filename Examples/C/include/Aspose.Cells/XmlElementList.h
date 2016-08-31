#pragma once
//#include "System/StringHelperPal.h"
#include "XmlNode.h"
#include "System/Object.h"
#include "System/String.h"
#include "XmlNodeList.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_XMLELEMENTLIST() 


namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlElementList : public Aspose::Cells::Xml::XmlNodeList
	{
	private:

			void Init_Vars();
			void Init(intrusive_ptr<Aspose::Cells::Xml::XmlNode> parent);
	public:

			intrusive_ptr<Aspose::Cells::System::String> localName;
			intrusive_ptr<Aspose::Cells::System::String> prefix;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> List;
			 XmlElementList(intrusive_ptr<Aspose::Cells::Xml::XmlNode> parent , intrusive_ptr<Aspose::Cells::System::String> name);
			 XmlElementList(intrusive_ptr<Aspose::Cells::Xml::XmlNode> parent , intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> localName);
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetIndexObject(Aspose::Cells::System::Int32 index);
			 XmlElementList();
		public:
			virtual ~XmlElementList();
	};

}

}

}
