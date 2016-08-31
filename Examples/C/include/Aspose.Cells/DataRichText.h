#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATARICHTEXT() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataFont;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataRichText : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataFont> FontInfo;
			intrusive_ptr<Aspose::Cells::System::String> Text;
			intrusive_ptr<Aspose::Cells::System::String> Type;
			 DataRichText();
		public:
			virtual ~DataRichText();
	};

}

}

}
