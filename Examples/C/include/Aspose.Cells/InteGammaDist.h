#pragma once
#include "IntegralBase.h"
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_INTEGAMMADIST() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class InteGammaDist : public Aspose::Cells::FormulaModel::IntegralBase
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Double alpha;
			Aspose::Cells::System::Double beta;
			 InteGammaDist(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x);
			 InteGammaDist();
		public:
			virtual ~InteGammaDist();
	};

}

}

}
