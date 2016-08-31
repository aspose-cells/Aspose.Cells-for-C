#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_ICOLUMNSTYLEACCESSOR() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IColumnStyleAccessor : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 GetColumnXF(Aspose::Cells::System::Int32 columnIndex) = 0;
		public:
	};

}

}

}
