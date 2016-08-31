#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "NlEquationBase.h"
#include "System/Double.h"
#define STATIC_NLEF() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class NleF : public Aspose::Cells::FormulaModel::NlEquationBase
	{
	protected:

			 virtual void Func(Aspose::Cells::System::Double x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _degrees_freedom1;
			Aspose::Cells::System::Double _degrees_freedom2;
			Aspose::Cells::System::Double _x;
	public:

			 NleF(Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2 , Aspose::Cells::System::Double x);
			 NleF();
		public:
			virtual ~NleF();
	};

}

}

}
