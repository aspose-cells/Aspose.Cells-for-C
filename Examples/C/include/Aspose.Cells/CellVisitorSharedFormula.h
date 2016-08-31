#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "ICellVisitor.h"
//#include "System/Exception.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORSHAREDFORMULA() 

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
class FormulaRelInfo;
class FormulaTokenVisitor;
class CachedSharedFormulaResult;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorSharedFormula : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> mRelInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> mTokenVisitor;
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedSharedFormulaResult> mResult;
			Aspose::Cells::System::Int32 mIgnoreRow;
			Aspose::Cells::System::Int32 mIgnoreCol;
	public:

			Aspose::Cells::System::Int32 StartStackSize;
			 CellVisitorSharedFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::CachedSharedFormulaResult> result);
			void OnDenotation();
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorSharedFormula();
		public:
			virtual ~CellVisitorSharedFormula();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
