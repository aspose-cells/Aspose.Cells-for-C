#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "CachedAreaFormulaResult.h"
#include "System/Int32.h"
#define STATIC_CACHEDSHAREDFORMULARESULT() 

namespace Aspose {
namespace Cells {
class FormulaCell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class CellVisitorSharedFormula;
class FormulaRelInfo;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CachedSharedFormulaResult : public Aspose::Cells::FormulaModel::CachedAreaFormulaResult
	{
	private:


		class CXXFinallyVisit;

		 friend class CachedSharedFormulaResult::CXXFinallyVisit;

		
	class CXXFinallyVisit : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedSharedFormulaResult> _result;
			intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorSharedFormula> _backVisitor;
	public:

			 CXXFinallyVisit(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::CachedSharedFormulaResult> result , intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorSharedFormula> backVisitor);
			 CXXFinallyVisit();
		public:
			virtual ~CXXFinallyVisit();
	};
	private:

			void Init_Vars();
			bool mInUsing;
			bool mVisitable;
	public:

			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Result;
			Aspose::Cells::System::Int32 RowIndex;
			Aspose::Cells::System::Int32 ColumnIndex;
			 CachedSharedFormulaResult(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaCell> headFormulaCell , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> result , Aspose::Cells::System::Int32 resultRow , Aspose::Cells::System::Int32 resultCol);
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void Discharge();
			void Calculate(intrusive_ptr<Aspose::Cells::FormulaCell> fc , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CachedSharedFormulaResult();
		public:
			virtual ~CachedSharedFormulaResult();
	};

}

}

}
