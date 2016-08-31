#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#include "IRowHeightAccessor.h"
#include "System/Double.h"
#include "System/Array1D.h"
#define STATIC_ROWHEIGHTACCESSORDIRECT() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IRowHeightModelBuilder;
class RowHeightModelBuilderPixelBased;
}
}
}
namespace Aspose {
namespace Cells {
class Cells;
class RowCollection;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowHeightAccessorDirect : public Aspose::Cells::CellsSs::IRowHeightAccessor
	{
	private:

			void Init_Vars();
			Aspose::Cells::Cells* _cells;
			Aspose::Cells::RowCollection* _rows;
			Aspose::Cells::WorksheetCollection* _wss;
			intrusive_ptr<Aspose::Cells::CellsSs::RowHeightModelBuilderPixelBased> _pixelBuilder;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> _pointBuilder;
			void ResetPixelBuilderParam();
			Aspose::Cells::System::Int32 GetRowHeight(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex , intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> builder);
			void GetRowByHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH , intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> builder);
	public:

			 RowHeightAccessorDirect(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows);
			bool GetPrintView();
			void SetPrintView(bool value);
			Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Double GetRowHeightPoint(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			Aspose::Cells::System::Double GetRowHeightPoint(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			void GetRowByPixelHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH);
			void GetRowByTwipsHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH);
			 RowHeightAccessorDirect();
		public:
			virtual ~RowHeightAccessorDirect();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
