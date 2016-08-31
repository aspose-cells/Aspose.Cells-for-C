#pragma once
#include "System/Object.h"
//#include "System/Decimal.h"
//#include "System/Single.h"
#include "IMathCalculator.h"
#include "System/Double.h"
#define STATIC_MATHCALCULATORDECIMAL() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class MathCalculatorDecimal : public Aspose::Cells::FormulaModel::IMathCalculator
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Double NEGATIVE_MIN;
			 static const Aspose::Cells::System::Double NEGATIVE_MAX;
			 static const Aspose::Cells::System::Double POSITIVE_MIN;
			 static const Aspose::Cells::System::Double POSITIVE_MAX;
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::MathCalculatorDecimal> Instance;
			Aspose::Cells::System::Double Add(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Subtract(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Multiply(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			Aspose::Cells::System::Double Divide(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2);
			 MathCalculatorDecimal();
		public:
			virtual ~MathCalculatorDecimal();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
