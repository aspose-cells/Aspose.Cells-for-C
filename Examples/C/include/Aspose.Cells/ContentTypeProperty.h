#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/Hashtable.h"
#define STATIC_CONTENTTYPEPROPERTY() 

namespace Aspose {
namespace Cells {
namespace Properties {
class ContentTypePropertyCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Properties {
#ifdef WIN32

	class ASPOSE_CELLS_API ContentTypeProperty : public Aspose::Cells::System::Object
#else	class ContentTypeProperty : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_name;
	public:

			Aspose::Cells::Properties::ContentTypePropertyCollection* m_ctps;
			Aspose::Cells::System::Int32 Index;
			intrusive_ptr<Aspose::Cells::System::String> m_ns;
			intrusive_ptr<Aspose::Cells::System::String> m_base;
			intrusive_ptr<Aspose::Cells::System::String> m_format;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_enumlist;
			intrusive_ptr<Aspose::Cells::System::String> DisplayName;
			intrusive_ptr<Aspose::Cells::System::String> internalName;
			intrusive_ptr<Aspose::Cells::System::String> DefaultValue;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_OtherProperties;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetOtherProperties();
			intrusive_ptr<Aspose::Cells::System::Object> m_value;
			intrusive_ptr<Aspose::Cells::System::String> m_keep;
			 ContentTypeProperty(intrusive_ptr<Aspose::Cells::Properties::ContentTypePropertyCollection> ctps);
			void Copy(intrusive_ptr<Aspose::Cells::Properties::ContentTypeProperty> source);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetType();
			void SetType(intrusive_ptr<Aspose::Cells::System::String> value);
			 ContentTypeProperty();
		public:
			virtual ~ContentTypeProperty();
	};

}

}

}
