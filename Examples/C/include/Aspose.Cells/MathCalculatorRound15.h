#pragma once
#include "IMathCalculator.h"
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_MATHCALCULATORROUND15() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class MathCalculatorRound15 : public Aspose::Cells::FormulaModel::IMathCalculator
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::MathCalculatorRound15> Instance;
			Aspose::Cells::System::Double Add(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Subtract(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Multiply(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Divide(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			 MathCalculatorRound15();
		public:
			virtual ~MathCalculatorRound15();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
