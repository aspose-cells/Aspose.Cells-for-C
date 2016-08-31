#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAIMPOBJECT() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataImpObject : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Name;
			intrusive_ptr<Aspose::Cells::System::String> ShapeId;
			intrusive_ptr<Aspose::Cells::System::String> ImpEntryName;
			intrusive_ptr<Aspose::Cells::System::String> ImageTarget;
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> ControlPrNode;
			bool Alternate;
			 DataImpObject(bool alternate);
			 DataImpObject();
		public:
			virtual ~DataImpObject();
	};

}

}

}
