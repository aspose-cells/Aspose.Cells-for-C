#pragma once
#include "IMathCalculator.h"
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_MATHCALCULATORNONE() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class MathCalculatorNone : public Aspose::Cells::FormulaModel::IMathCalculator
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::MathCalculatorNone> Instance;
			Aspose::Cells::System::Double Add(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Subtract(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Multiply(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Divide(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			 MathCalculatorNone();
		public:
			virtual ~MathCalculatorNone();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
