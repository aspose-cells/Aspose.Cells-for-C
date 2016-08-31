#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Double.h"
#define STATIC_IROWHEIGHTACCESSOR() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IRowHeightAccessor : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 rowIndex) = 0;
			virtual Aspose::Cells::System::Double GetRowHeightPoint(Aspose::Cells::System::Int32 rowIndex) = 0;
			virtual Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 rowIndex) = 0;
			virtual Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex) = 0;
			virtual Aspose::Cells::System::Double GetRowHeightPoint(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex) = 0;
			virtual Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex) = 0;
			virtual void GetRowByPixelHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH) = 0;
			virtual void GetRowByTwipsHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH) = 0;
		public:
	};

}

}

}
