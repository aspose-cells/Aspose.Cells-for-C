#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_XLSBFRTREF() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class XlsbFRTRef : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Option;
			intrusive_ptr<Aspose::Cells::CellArea> CellArea;
			 XlsbFRTRef();
		public:
			virtual ~XlsbFRTRef();
	};

}

}

}

}
