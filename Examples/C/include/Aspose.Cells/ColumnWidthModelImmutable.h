#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_COLUMNWIDTHMODELIMMUTABLE() 

namespace Aspose {
namespace Cells {
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IColumnWidthModelBuilder;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ColumnWidthModelImmutable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _startDefaultColumn;
			Aspose::Cells::System::Int32 _defaultWidth1;
			Aspose::Cells::System::Int32 _defaultWidth2;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _arrColumnWidth;
			Aspose::Cells::System::Int32 _accumW1;
	public:

			 ColumnWidthModelImmutable(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 maxColumn , intrusive_ptr<Aspose::Cells::CellsSs::IColumnWidthModelBuilder> builder);
			Aspose::Cells::System::Int32 GetInnerUnitColumnWidth(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Int32 GetInnerUnitColumnWidth(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex);
			void GetColumnByInnerUnitWidth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrCW);
			 ColumnWidthModelImmutable();
		public:
			virtual ~ColumnWidthModelImmutable();
	};

}

}

}
