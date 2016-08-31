#pragma once
#include "System/Double.h"
#include "System/Object.h"
#define STATIC_IMATHCALCULATOR() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IMathCalculator : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Double Add(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2) = 0;
			virtual Aspose::Cells::System::Double Subtract(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2) = 0;
			virtual Aspose::Cells::System::Double Multiply(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2) = 0;
			virtual Aspose::Cells::System::Double Divide(Aspose::Cells::System::Double v1 , Aspose::Cells::System::Double v2) = 0;
		public:
	};

}

}

}
