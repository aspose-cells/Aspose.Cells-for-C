#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "NewtonRaphsonBase.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_NRIRR() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class NrIrr : public Aspose::Cells::FormulaModel::NewtonRaphsonBase
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Double TOLERANCE;
			 static const Aspose::Cells::System::Int32 MAXITER;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> _cashFlows;
			Aspose::Cells::System::Int32 _cashStart;
			Aspose::Cells::System::Int32 _cashEnd;
	public:

			 NrIrr(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> cashFlows , Aspose::Cells::System::Int32 cashStart , Aspose::Cells::System::Int32 cashEnd);
			 virtual Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(Aspose::Cells::System::Double guess);
			 NrIrr();
		public:
			virtual ~NrIrr();
	};

}

}

}
