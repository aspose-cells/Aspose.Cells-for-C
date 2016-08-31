#pragma once
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Exception.h"
#define STATIC_IMPWHOLE() 

namespace Aspose {
namespace Cells {
class Workbook;
class LoadOptions;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpWhole : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void ReadFromZip(intrusive_ptr<Aspose::Cells::Workbook> wbook , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			 ImpWhole();
		public:
			virtual ~ImpWhole();
	};

}

}

}
