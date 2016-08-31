#pragma once
#include "System/Object.h"
#include "IColumnWidthAccessor.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_COLUMNWIDTHACCESSORDIRECT() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class ColumnCollection;
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
	class ColumnWidthAccessorDirect : public Aspose::Cells::CellsSs::IColumnWidthAccessor
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Double CHAR_ZOOM;
			intrusive_ptr<Aspose::Cells::ColumnCollection> _columns;
			Aspose::Cells::WorksheetCollection* _wss;
			intrusive_ptr<Aspose::Cells::CellsSs::IColumnWidthModelBuilder> _pixelBuilder;
			intrusive_ptr<Aspose::Cells::CellsSs::IColumnWidthModelBuilder> _charBuilder;
	public:

			 ColumnWidthAccessorDirect(intrusive_ptr<Aspose::Cells::Cells> cells);
			bool IsVisible(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Int32 GetColumnWidthPixel(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Double GetColumnWidthInch(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex);
			Aspose::Cells::System::Int32 GetColumnWidthPixel(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex);
			Aspose::Cells::System::Double GetColumnWidthInch(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex);
			void GetColumnByPixelWidth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrCW);
			void GetColumnByCharWidth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrCW);
			 ColumnWidthAccessorDirect();
		public:
			virtual ~ColumnWidthAccessorDirect();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
