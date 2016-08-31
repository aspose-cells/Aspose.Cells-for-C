#pragma once
#include "System/Int64.h"
//#include "System/Int16.h"
#include "CachedAreaFormulaResult.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_CACHEDTABLEFORMULARESULT() 

namespace Aspose {
namespace Cells {
class FormulaCell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CachedTableFormulaResult : public Aspose::Cells::FormulaModel::CachedAreaFormulaResult
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> mRelInfo;
			Aspose::Cells::System::Int32 mIgnoreRow;
			Aspose::Cells::System::Int32 mIgnoreCol;
			bool mInUsing;
			bool mVisitable;
			Aspose::Cells::System::Int64 mInputKeyRow;
			Aspose::Cells::System::Int64 mInputKeyCol;
			Aspose::Cells::System::Int32 mHeadRowIndex;
			Aspose::Cells::System::Int32 mHeadColIndex;
			bool mRowInput;
			bool mColInput;
			bool mTwoInput;
			bool mStaticValue;
	public:

			 CachedTableFormulaResult(intrusive_ptr<Aspose::Cells::FormulaCell> headFormulaCell , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void Calculate(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 CachedTableFormulaResult();
		public:
			virtual ~CachedTableFormulaResult();
	};

}

}

}
