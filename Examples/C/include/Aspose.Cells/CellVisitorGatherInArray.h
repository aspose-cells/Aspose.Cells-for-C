#pragma once
#include "System/Object.h"
//#include "System/String.h"
#include "ICellVisitor.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_CELLVISITORGATHERINARRAY() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorGatherInArray : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _index;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _list;
	public:

			 CellVisitorGatherInArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> list);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorGatherInArray();
		public:
			virtual ~CellVisitorGatherInArray();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
