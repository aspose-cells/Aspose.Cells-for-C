#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "IRowHeightAccessor.h"
#define STATIC_ROWHEIGHTACCESSORIMMUTABLEMULTIPLEUNITS() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IRowHeightModel;
class IRowHeightModelBuilder;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowHeightAccessorImmutableMultipleUnits : public Aspose::Cells::CellsSs::IRowHeightAccessor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> _pixelBuilder;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModel> _pixelModel;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> _pointBuilder;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModel> _pointModel;
	public:

			 RowHeightAccessorImmutableMultipleUnits(intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> pointBuilder , intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModel> pointModel , intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> pixelBuilder , intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModel> pixelModel);
			Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Double GetRowHeightPoint(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			Aspose::Cells::System::Double GetRowHeightPoint(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			void GetRowByPixelHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH);
			void GetRowByTwipsHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH);
			 RowHeightAccessorImmutableMultipleUnits();
		public:
			virtual ~RowHeightAccessorImmutableMultipleUnits();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
