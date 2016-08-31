#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "ICellVisitor.h"
#include "CellData.h"
#include "System/Int32.h"
//#include "System/String.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
#define STATIC_CELLVISITORREMOVEARRAYFORMULA() 

namespace Aspose {
namespace Cells {
class FormulaPool;
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IStringPool;
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorRemoveArrayFormula : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			Aspose::Cells::FormulaPool* mFP;
			Aspose::Cells::CellsSs::IStringPool* mSP;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mBinData;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> mBuffer;
	public:

			 CellVisitorRemoveArrayFormula(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> binNew);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorRemoveArrayFormula();
		public:
			virtual ~CellVisitorRemoveArrayFormula();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
