#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "NlEquationBase.h"
#include "System/Double.h"
//#include "System/Int32.h"
#define STATIC_NLET() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class NleT : public Aspose::Cells::FormulaModel::NlEquationBase
	{
	protected:

			 virtual void Func(Aspose::Cells::System::Double x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _degrees_freedom;
			Aspose::Cells::System::Double _x;
	public:

			 NleT(Aspose::Cells::System::Double degree_freedom , Aspose::Cells::System::Double x);
			 NleT();
		public:
			virtual ~NleT();
	};

}

}

}
