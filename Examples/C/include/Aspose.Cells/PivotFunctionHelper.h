#pragma once
#include "ConsolidationFunction.h"
//#include "System/Boxing.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTFUNCTIONHELPER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotFunctionHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static Aspose::Cells::System::Double Sum(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static Aspose::Cells::System::Double Max(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static Aspose::Cells::System::Double Min(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::System::Object> Average(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList , bool hasItem);
			static Aspose::Cells::System::Double Product(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::System::Object> StdDevp(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::System::Object> StdDev(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::System::Object> Varp(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::System::Object> Var(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcAverage(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList , bool hasItem);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcStdDevp(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcStdDev(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcVarp(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcVar(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList);
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> CalculateFunction(Aspose::Cells::ConsolidationFunction function , Aspose::Cells::System::Int32 count , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList , bool hasItem);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcFunction(Aspose::Cells::ConsolidationFunction function , Aspose::Cells::System::Int32 count , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> numberList , bool hasItem);
			 PivotFunctionHelper();
		public:
			virtual ~PivotFunctionHelper();
	};

}

}

}
