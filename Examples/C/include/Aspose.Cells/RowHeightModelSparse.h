#pragma once
#include "System/Object.h"
#include "IRowHeightModel.h"
#include "IIndexedList.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_ROWHEIGHTMODELSPARSE() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IRowHeightModelBuilder;
}
}
}
namespace Aspose {
namespace Cells {
class Cells;
class RowCollection;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowHeightModelSparse : public Aspose::Cells::CellsSs::IRowHeightModel , public Aspose::Cells::Collections::IIndexedList
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _defaultHeight;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _rowIndex;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _rowHeight;
			Aspose::Cells::System::Int32 _rawPos;
	public:

			 RowHeightModelSparse(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows , intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightModelBuilder> builder);
			 RowHeightModelSparse(Aspose::Cells::System::Int32 defaultHeight , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowIndex , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowHeight);
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			Aspose::Cells::System::Int32 GetInnerUnitRowHeight(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Int32 GetInnerUnitRowHeight(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			void GetRowByInnerUnitHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrRH);
			 RowHeightModelSparse();
		public:
			virtual ~RowHeightModelSparse();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
