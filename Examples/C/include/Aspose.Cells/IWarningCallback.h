#pragma once
#include "System/Object.h"
#define STATIC_IWARNINGCALLBACK() 

namespace Aspose {
namespace Cells {
class WarningInfo;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API IWarningCallback : public Aspose::Cells::System::Object
#else	class IWarningCallback : public Aspose::Cells::System::Object
#endif


	{
	public:

			virtual void Warning(intrusive_ptr<Aspose::Cells::WarningInfo> warningInfo) = 0;
		public:
	};

}

}
