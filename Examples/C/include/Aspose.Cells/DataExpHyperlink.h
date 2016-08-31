#pragma once
#include "System/String.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_DATAEXPHYPERLINK() 

namespace Aspose {
namespace Cells {
class Hyperlink;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataExpHyperlink : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> RId;
			intrusive_ptr<Aspose::Cells::Hyperlink> Href;
			intrusive_ptr<Aspose::Cells::System::String> Address;
			Aspose::Cells::System::Int32 LinkType;
			 DataExpHyperlink();
		public:
			virtual ~DataExpHyperlink();
	};

}

}

}
