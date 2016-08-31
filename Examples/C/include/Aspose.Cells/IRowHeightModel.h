#pragma once
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Object.h"
#define STATIC_IROWHEIGHTMODEL() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IRowHeightModel : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 GetInnerUnitRowHeight(Aspose::Cells::System::Int32 rowIndex) = 0;
			virtual Aspose::Cells::System::Int32 GetInnerUnitRowHeight(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex) = 0;
			virtual void GetRowByInnerUnitHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH) = 0;
		public:
	};

}

}

}
