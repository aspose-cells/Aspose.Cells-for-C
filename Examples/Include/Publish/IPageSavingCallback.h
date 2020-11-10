#pragma once
//#include "IIPageSavingCallback.h"
#include "Aspose.Cells.Systems/Object.h"
#define STATIC_IPAGESAVINGCALLBACK() 

namespace Aspose {
namespace Cells {
namespace Rendering {
class PageStartSavingArgs;
class PageEndSavingArgs;
}
}
}

namespace Aspose {
namespace Cells {
namespace Rendering {
	class ASPOSE_CELLS_API IPageSavingCallback : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Customer need realize to control which page shoud be print form start.
			/// </summary>
			virtual void PageStartSaving(intrusive_ptr<Aspose::Cells::Rendering::PageStartSavingArgs> args) = 0;
			/// <summary>
			/// Customer need realize to control which page shoud be print to the end.
			/// </summary>
			virtual void PageEndSaving(intrusive_ptr<Aspose::Cells::Rendering::PageEndSavingArgs> args) = 0;
	};

}

}

}
