#pragma once
#include "System/Object.h"
#include "System/Collections/IEnumerator.h"
#define STATIC_XMLNODEENUMERATOR() 

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
	class XmlNodeEnumerator : public Aspose::Cells::System::Collections::IEnumerator , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Xml::XmlNode* container;
			Aspose::Cells::Xml::XmlNode* child;
			bool first;
			 XmlNodeEnumerator(intrusive_ptr<Aspose::Cells::Xml::XmlNode> container);
			bool MoveNext();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			void Reset();
			 XmlNodeEnumerator();
		public:
			virtual ~XmlNodeEnumerator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
