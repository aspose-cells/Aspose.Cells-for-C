#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "IRowHeightAccessor.h"
#define STATIC_ROWHEIGHTACCESSORIMMUTABLESINGLEUNIT() 

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
	class RowHeightAccessorImmutableSingleUnit : public Aspose::Cells::CellsSs::IRowHeightAccessor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> _builder;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModel> _model;
	public:

			 RowHeightAccessorImmutableSingleUnit(intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> modelBuilder , intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModel> model);
			Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Double GetRowHeightPoint(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			Aspose::Cells::System::Double GetRowHeightPoint(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			void GetRowByPixelHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH);
			void GetRowByTwipsHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH);
			 RowHeightAccessorImmutableSingleUnit();
		public:
			virtual ~RowHeightAccessorImmutableSingleUnit();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
