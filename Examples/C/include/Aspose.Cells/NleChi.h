#pragma once
#include "System/Object.h"
#include "NlEquationBase.h"
#include "System/Double.h"
#define STATIC_NLECHI() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class NleChi : public Aspose::Cells::FormulaModel::NlEquationBase
	{
	protected:

			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x);
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _degrees_freedom;
	public:

			 NleChi(Aspose::Cells::System::Double degree);
			 NleChi();
		public:
			virtual ~NleChi();
	};

}

}

}
