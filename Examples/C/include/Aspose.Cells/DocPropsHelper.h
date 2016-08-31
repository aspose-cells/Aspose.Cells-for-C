#pragma once
//#include "System/Collections/SortedList.h"
//#include "System/String.h"
#include "System/Object.h"
#define STATIC_DOCPROPSHELPER() 

namespace Aspose {
namespace Cells {
namespace Properties {
class BuiltInDocumentPropertyCollection;
class CustomDocumentPropertyCollection;
}
}
}
namespace Aspose {
namespace Ss {
class FileSystem;
}
}

namespace Aspose {
namespace Cells {
namespace Properties {
	class DocPropsHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void Load(intrusive_ptr<Aspose::Ss::FileSystem> compoundFile , intrusive_ptr<Aspose::Cells::Properties::BuiltInDocumentPropertyCollection> BuiltInDocumentProperties , intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> CustomDocumentProperties);
			 DocPropsHelper();
		public:
			virtual ~DocPropsHelper();
	};

}

}

}
