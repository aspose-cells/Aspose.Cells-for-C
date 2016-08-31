#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Single.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_GAUSSFUNCS() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class GaussFuncs : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	protected:

			static Aspose::Cells::System::Double RatEval(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> a , Aspose::Cells::System::Int32 na , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> b , Aspose::Cells::System::Int32 nb , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double Small(Aspose::Cells::System::Double q);
			static Aspose::Cells::System::Double Intermediate(Aspose::Cells::System::Double r);
			static Aspose::Cells::System::Double Tail(Aspose::Cells::System::Double r);
			static bool IsNegInt(Aspose::Cells::System::Double x);
	public:

			static Aspose::Cells::System::Double WqCdfUGaussianPinv(Aspose::Cells::System::Double P);
			static Aspose::Cells::System::Double WqCdfUGaussianQinv(Aspose::Cells::System::Double Q);
			 GaussFuncs();
		public:
			virtual ~GaussFuncs();
	};

}

}

}
