#pragma once
//#include "System/ArgumentOutOfRangeException.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Single.h"
//#include "System/Exception.h"
#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/DoubleHelper.h"
//#include "System/ArgumentException.h"
#include "System/Array1D.h"
#define STATIC_GAMMAFUNCS() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class GammaFuncs : public Aspose::Cells::System::Object
	{
	protected:

			static Aspose::Cells::System::Double GetGammaContFraction(Aspose::Cells::System::Double fA , Aspose::Cells::System::Double fX);
			static Aspose::Cells::System::Double GetGammaSeries(Aspose::Cells::System::Double fA , Aspose::Cells::System::Double fX);
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Double fHalfMachEps;
	public:

			static Aspose::Cells::System::Double GammaLn(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::Double Gamma(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::Double GammaRegularized(Aspose::Cells::System::Double a , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double WqRanGammaPdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double WqCdfGammaPinv(Aspose::Cells::System::Double P , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double WqCdfGammaQinv(Aspose::Cells::System::Double Q , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double GammaDistPdf(Aspose::Cells::System::Double fX , Aspose::Cells::System::Double fAlpha , Aspose::Cells::System::Double fLambda);
			static Aspose::Cells::System::Double GammaDistCdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha);
			static Aspose::Cells::System::Double GammaDistCdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta);
			static Aspose::Cells::System::Double GetLowRegIGamma(Aspose::Cells::System::Double fA , Aspose::Cells::System::Double fX);
			Aspose::Cells::System::Double GetUpRegIGamma(Aspose::Cells::System::Double fA , Aspose::Cells::System::Double fX);
			static Aspose::Cells::System::Double GammaDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta , bool cumulative);
			static Aspose::Cells::System::Double GammaINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta);
			 GammaFuncs();
		public:
			virtual ~GammaFuncs();
	};

}

}

}
