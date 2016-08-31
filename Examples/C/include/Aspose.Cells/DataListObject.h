#pragma once
#include "System/Object.h"
#define STATIC_DATALISTOBJECT() 

namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataRelationship;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataListObject : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Tables::ListObject> Table;
			intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> Rel;
			 DataListObject(intrusive_ptr<Aspose::Cells::Tables::ListObject> table , intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> rel);
			 DataListObject();
		public:
			virtual ~DataListObject();
	};

}

}

}
