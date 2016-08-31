#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_ITABLECELLSTYLEACCESSOR() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellDisplayStyleParams;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
	class ITableCellStyleAccessor : public Aspose::Cells::System::Object
	{
	public:

			virtual void ApplyStyle(Aspose::Cells::System::Int32 tableIdx , Aspose::Cells::System::Int32 tableXF , intrusive_ptr<Aspose::Cells::CellsSs::CellDisplayStyleParams> p) = 0;
		public:
	};

}

}

}
