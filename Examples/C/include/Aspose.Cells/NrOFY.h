#pragma once
#include "System/Object.h"
#include "System/DateTime.h"
#include "NewtonRaphsonBase.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_NROFY() 

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
	class NrOFY : public Aspose::Cells::FormulaModel::NewtonRaphsonBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::DateTime> _settlement;
			intrusive_ptr<Aspose::Cells::System::DateTime> _maturity;
			intrusive_ptr<Aspose::Cells::System::DateTime> _issue;
			intrusive_ptr<Aspose::Cells::System::DateTime> _firstCoupon;
			Aspose::Cells::System::Double _rate;
			Aspose::Cells::System::Int32 _redemption;
			Aspose::Cells::System::Int32 _frequency;
			Aspose::Cells::System::Int32 _basis;
			Aspose::Cells::System::Double _pr;
			Aspose::Cells::System::Double _precision;
			 NrOFY(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> firstCoupon , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pr , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis , Aspose::Cells::System::Double precision);
			 virtual Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(Aspose::Cells::System::Double guess);
			 NrOFY();
		public:
			virtual ~NrOFY();
	};

}

}

}
