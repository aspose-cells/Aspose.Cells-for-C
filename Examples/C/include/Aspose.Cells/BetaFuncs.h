#pragma once
//#include "System/ArgumentOutOfRangeException.h"
//#include "System/Single.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Exception.h"
#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/ArgumentException.h"
#define STATIC_BETAFUNCS() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class BetaFuncs : public Aspose::Cells::System::Object
	{
	protected:

			static Aspose::Cells::System::Double BetaContFrac(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double x , Aspose::Cells::System::Double epsabs);
			static Aspose::Cells::System::Double BetaIncAXPY(Aspose::Cells::System::Double A , Aspose::Cells::System::Double Y , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double Bisect(Aspose::Cells::System::Double x , Aspose::Cells::System::Double P , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double xtol , Aspose::Cells::System::Double Ptol);
			static Aspose::Cells::System::Double WqRanBetaPdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Double Beta(Aspose::Cells::System::Double z , Aspose::Cells::System::Double w);
			static Aspose::Cells::System::Double BetaLn(Aspose::Cells::System::Double z , Aspose::Cells::System::Double w);
			static Aspose::Cells::System::Double BetaRegularized(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double WqCdfBetaP(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double WqCdfBetaQ(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double WqCdfBetaPinv(Aspose::Cells::System::Double P , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double WqCdfBetaQinv(Aspose::Cells::System::Double Q , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double BetaDistPdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B);
			static Aspose::Cells::System::Double BETADIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double BETADIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B);
			static Aspose::Cells::System::Double BETAINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double BETAINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B);
			 BetaFuncs();
		public:
			virtual ~BetaFuncs();
	};

}

}

}
