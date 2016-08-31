#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_ICELLVISITOR() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ICellVisitor : public Aspose::Cells::System::Object
	{
	public:

			virtual bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position) = 0;
		public:
	};

}

}

}
