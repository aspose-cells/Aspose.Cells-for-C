#pragma once
//#include "System/Math.h"
#include "NewtonRaphsonBase.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "System/Object.h"
#define STATIC_NRRATE() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class NrRate : public Aspose::Cells::FormulaModel::NewtonRaphsonBase
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double nper;
			Aspose::Cells::System::Double pv;
			Aspose::Cells::System::Double pmt;
			Aspose::Cells::System::Double fv;
			Aspose::Cells::System::Double type;
	public:

			 virtual Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			Aspose::Cells::System::Int32 Calculate(Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type , Aspose::Cells::System::Double guess);
			 NrRate();
		public:
			virtual ~NrRate();
	};

}

}

}
