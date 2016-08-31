#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_ICOLUMNWIDTHACCESSOR() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IColumnWidthAccessor : public Aspose::Cells::System::Object
	{
	public:

			virtual bool IsVisible(Aspose::Cells::System::Int32 columnIndex) = 0;
			virtual Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 columnIndex) = 0;
			virtual Aspose::Cells::System::Int32 GetColumnWidthPixel(Aspose::Cells::System::Int32 columnIndex) = 0;
			virtual Aspose::Cells::System::Double GetColumnWidthInch(Aspose::Cells::System::Int32 columnIndex) = 0;
			virtual Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex) = 0;
			virtual Aspose::Cells::System::Int32 GetColumnWidthPixel(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex) = 0;
			virtual Aspose::Cells::System::Double GetColumnWidthInch(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex) = 0;
			virtual void GetColumnByPixelWidth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrCW) = 0;
			virtual void GetColumnByCharWidth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrCW) = 0;
		public:
	};

}

}

}
