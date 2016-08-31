#pragma once
#include "System/Object.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
#include "System/Collections/IEnumerable.h"
#include "XmlNode.h"
#include "System/String.h"
#define STATIC_XMLNODELIST() 


namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlNodeList : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Xml::XmlNode* container;
			 XmlNodeList(intrusive_ptr<Aspose::Cells::Xml::XmlNode> container);
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetIndexObject(Aspose::Cells::System::Int32 i);
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlNode> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			 XmlNodeList();
		public:
			virtual ~XmlNodeList();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
