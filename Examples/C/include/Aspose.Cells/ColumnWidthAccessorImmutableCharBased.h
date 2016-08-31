#pragma once
#include "System/Object.h"
#include "IColumnWidthAccessor.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_COLUMNWIDTHACCESSORIMMUTABLECHARBASED() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class ColumnWidthModelImmutable;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ColumnWidthAccessorImmutableCharBased : public Aspose::Cells::CellsSs::IColumnWidthAccessor
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Double CHAR_ZOOM;
			Aspose::Cells::WorksheetCollection* _wss;
			Aspose::Cells::System::Double _dpi;
			intrusive_ptr<Aspose::Cells::CellsSs::ColumnWidthModelImmutable> _model;
	public:

			 ColumnWidthAccessorImmutableCharBased(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 maxColumn);
			bool IsVisible(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Int32 GetColumnWidthPixel(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Double GetColumnWidthInch(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex);
			Aspose::Cells::System::Int32 GetColumnWidthPixel(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex);
			Aspose::Cells::System::Double GetColumnWidthInch(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex);
			void GetColumnByPixelWidth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrCW);
			void GetColumnByCharWidth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrCW);
			 ColumnWidthAccessorImmutableCharBased();
		public:
			virtual ~ColumnWidthAccessorImmutableCharBased();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
