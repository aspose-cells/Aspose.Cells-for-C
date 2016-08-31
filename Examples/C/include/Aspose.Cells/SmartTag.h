#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/Int32.h"
#define STATIC_SMARTTAG() 

namespace Aspose {
namespace Cells {
namespace Markup {
class SmartTagType;
class SmartTagCollection;
class SmartTagPropertyCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Markup {
#ifdef WIN32

	class ASPOSE_CELLS_API SmartTag : public Aspose::Cells::System::Object
#else	class SmartTag : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Markup::SmartTagCollection* parent;
			bool m_Deleted;
			bool m_XmlBased;
			intrusive_ptr<Aspose::Cells::Markup::SmartTagType> m_SmartTagType;
			intrusive_ptr<Aspose::Cells::Markup::SmartTagPropertyCollection> m_Properties;
	public:

			 SmartTag(intrusive_ptr<Aspose::Cells::Markup::SmartTagCollection> parent);
			bool GetDeleted();
			void SetDeleted(bool value);
			bool GetXmlBased();
			void SetXmlBased(bool value);
			intrusive_ptr<Aspose::Cells::Markup::SmartTagType> GetSmartTagType();
			void SetSmartTagType(intrusive_ptr<Aspose::Cells::Markup::SmartTagType> value);
			intrusive_ptr<Aspose::Cells::Markup::SmartTagPropertyCollection> GetProperties();
			void SetProperties(intrusive_ptr<Aspose::Cells::Markup::SmartTagPropertyCollection> value);
			intrusive_ptr<Aspose::Cells::System::String> GetUri();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetLink(intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::System::String> name);
			void Copy(intrusive_ptr<Aspose::Cells::Markup::SmartTag> source);
			 SmartTag();
		public:
			virtual ~SmartTag();
	};

}

}

}
