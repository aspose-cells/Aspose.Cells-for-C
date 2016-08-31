#pragma once
#include "System/Object.h"
//#include "System/Single.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_NRXIRR() 

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
	class NrXirr : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _result;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> dates;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values;
	public:

			Aspose::Cells::System::Double GetResult();
			bool Solve(Aspose::Cells::System::Double xnew , Aspose::Cells::System::Double tolerance , Aspose::Cells::System::Int32 imax);
			Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> dates , Aspose::Cells::System::Double guess);
			 NrXirr();
		public:
			virtual ~NrXirr();
	};

}

}

}
