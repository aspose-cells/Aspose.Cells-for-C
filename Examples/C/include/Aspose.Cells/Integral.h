#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_INTEGRAL() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Integral : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void ppp(Aspose::Cells::System::Double x0 , Aspose::Cells::System::Double x1 , Aspose::Cells::System::Double h , Aspose::Cells::System::Double f0 , Aspose::Cells::System::Double f1 , Aspose::Cells::System::Double t0 , Aspose::Cells::System::Double eps , Aspose::Cells::System::Double d , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> t);
	public:

			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x);
			 Integral();
			Aspose::Cells::System::Double GetValueTrapezia(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Double GetValueSimpson(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Double GetValueATrapezia(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double d , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Double GetValueRomberg(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Double GetValuePq(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Double GetValuePart(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Int32 m , Aspose::Cells::System::Int32 n , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> fa , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> fb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> s);
			Aspose::Cells::System::Double GetValueLegdGauss(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double eps);
			Aspose::Cells::System::Double GetValueLgreGauss();
			Aspose::Cells::System::Double GetValueHermiteGauss();
		public:
			virtual ~Integral();
	};

}

}

}
