#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATANAME() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataName : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Name;
			intrusive_ptr<Aspose::Cells::System::String> ReferTo;
			Aspose::Cells::Worksheet* SheetRef;
			intrusive_ptr<Aspose::Cells::System::String> WorkbookParameterString;
			intrusive_ptr<Aspose::Cells::System::String> PublishToServerString;
			 DataName();
		public:
			virtual ~DataName();
	};

}

}

}
