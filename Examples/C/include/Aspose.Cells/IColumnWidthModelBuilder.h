#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#define STATIC_ICOLUMNWIDTHMODELBUILDER() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IColumnWidthModelBuilder : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 GetInnerUnitWidth(Aspose::Cells::System::Double width) = 0;
		public:
	};

}

}

}
