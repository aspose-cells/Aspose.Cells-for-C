#pragma once
#include "IntegralBase.h"
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_INTET() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class InteT : public Aspose::Cells::FormulaModel::IntegralBase
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _degrees_freedom;
	public:

			 InteT(Aspose::Cells::System::Double degrees_freedom);
			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x);
			 InteT();
		public:
			virtual ~InteT();
	};

}

}

}
