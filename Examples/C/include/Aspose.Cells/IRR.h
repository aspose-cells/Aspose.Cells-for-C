#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Boxing.h"
#include "NewtonRaphson.h"
#include "System/Double.h"
//#include "System/Int32.h"
#define STATIC_IRR() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class IRR : public Aspose::Cells::NewtonRaphson
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double initValue;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> cashFlows;
	public:

			 IRR();
			 virtual Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			intrusive_ptr<Aspose::Cells::System::Object> Calculate(Aspose::Cells::System::Double initValue , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> cashFlows , Aspose::Cells::System::Double guess);
		public:
			virtual ~IRR();
	};

}

}

}
