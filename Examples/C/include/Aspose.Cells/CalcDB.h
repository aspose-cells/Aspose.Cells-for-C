#pragma once
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
//#include "System/Byte.h"
#include "FunctionIndex.h"
//#include "System/Math.h"
//#include "System/Double.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Array.h"
//#include "System/String.h"
#define STATIC_CALCDB() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class Criteria;
class IStatisticsAlgorithm;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcDB : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> GetAlgorithm(Aspose::Cells::FormulaModel::FunctionIndex funcIndex , Aspose::Cells::System::Int32 listSize);
			static bool IsAllNull(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::Criteria*>> rowCriteria);
			static bool FieldMatchOR(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> arrCriteria , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> fieldValue , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 FieldMatchOR(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> arrCriteria , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> fieldValue , Aspose::Cells::System::Int32 col , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> arrRowFlag);
			static Aspose::Cells::System::Int32 NullMatchOR(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> arrCriteria , Aspose::Cells::System::Int32 startCol , Aspose::Cells::System::Int32 endCol , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> arrRowFlag);
			static bool MatchCriteria(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> fieldValue , intrusive_ptr<Aspose::Cells::FormulaModel::Criteria> criteria);
			static bool MatchNull(intrusive_ptr<Aspose::Cells::FormulaModel::Criteria> criteria);
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CalcDB();
		public:
			virtual ~CalcDB();
	};

}

}

}
