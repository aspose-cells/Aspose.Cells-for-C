#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Collections/Hashtable.h"
#define STATIC_DATAKEEPBOOK() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepBook : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 DataKeepBook(intrusive_ptr<Aspose::Cells::OpenXML::DataKeepWhole> dataKeepWhole);
			Aspose::Cells::OpenXML::DataKeepWhole* DataKeepWhole;
			intrusive_ptr<Aspose::Cells::System::String> DefaultThemeVersion;
			bool PublishItems;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> KeepRelInfoList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ExternalRefList;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> KeepRootAttrList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ExternalRefNameList;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExtMap;
			 DataKeepBook();
		public:
			virtual ~DataKeepBook();
	};

}

}

}
