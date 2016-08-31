#pragma once
//#include "System/Single.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
//#include "System/Console.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/UInt32.h"
#include "System/Double.h"
//#include "System/ArgumentOutOfRangeException.h"
//#include "System/Int32Helper.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/Math.h"
//#include "System/DoubleHelper.h"
//#include "System/ArgumentException.h"
#include "System/Array1D.h"
#define STATIC_SPECIALFUNCTIONS() 

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class SpecFucResult;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class SpecialFunctions : public Aspose::Cells::System::Object
	{
	protected:

			static Aspose::Cells::System::Double M_SQRT2;
			static Aspose::Cells::System::Double M_SQRTPI;
			static void WQ_ERROR(intrusive_ptr<Aspose::Cells::System::String> error , Aspose::Cells::System::Int32 code);
			static void DOMAIN_ERROR(intrusive_ptr<Aspose::Cells::FormulaUtility::SpecFucResult> result);
			static Aspose::Cells::System::Double rat_eval(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> a , Aspose::Cells::System::Int32 na , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> b , Aspose::Cells::System::Int32 nb , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double small(Aspose::Cells::System::Double q);
			static Aspose::Cells::System::Double intermediate(Aspose::Cells::System::Double r);
			static Aspose::Cells::System::Double tail(Aspose::Cells::System::Double r);
			static bool isnegint(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double EVAL_RESULT(Aspose::Cells::System::Int32 fn , intrusive_ptr<Aspose::Cells::FormulaUtility::SpecFucResult> result);
			static Aspose::Cells::System::Double wq_cdf_ugaussian_Pinv(Aspose::Cells::System::Double P);
			static Aspose::Cells::System::Double wq_cdf_ugaussian_Qinv(Aspose::Cells::System::Double Q);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> factorialLnCache;
			static Aspose::Cells::System::Int32 FactorialPrecompSize;
			static Aspose::Cells::System::Int32 FactorialLnCacheSize;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> factorialPrecomp;
			static Aspose::Cells::System::Double beta_cont_frac(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double x , Aspose::Cells::System::Double epsabs);
			static Aspose::Cells::System::Double beta_inc_AXPY(Aspose::Cells::System::Double A , Aspose::Cells::System::Double Y , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double bisect(Aspose::Cells::System::Double x , Aspose::Cells::System::Double P , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double xtol , Aspose::Cells::System::Double Ptol);
			static Aspose::Cells::System::Double wq_ran_beta_pdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Int32 HarmonicPrecompSize;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> harmonicPrecomp;
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_factorialLnCache();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_factorialPrecomp();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> erfinv_a;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_erfinv_a();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> erfinv_b;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_erfinv_b();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> erfinv_c;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_erfinv_c();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> erfinv_d;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_erfinv_d();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_harmonicPrecomp();
	public:

			static Aspose::Cells::System::Double Hypot(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Int64 IntPow(Aspose::Cells::System::Int64 radix , Aspose::Cells::System::UInt32 exponent);
			static Aspose::Cells::System::Int32 IntPow2(Aspose::Cells::System::Int32 exponent);
			static Aspose::Cells::System::Int32 IntLog2(Aspose::Cells::System::Int32 x);
			static Aspose::Cells::System::Int32 CeilingToPowerOf2(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int32 FloorToPowerOf2(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int64 Gcd(Aspose::Cells::System::Int64 a , Aspose::Cells::System::Int64 b);
			static Aspose::Cells::System::Int64 Gcd(Aspose::Cells::System::Int64 a , Aspose::Cells::System::Int64 b , Aspose::Cells::System::Int64& x , Aspose::Cells::System::Int64& y);
			static Aspose::Cells::System::Int64 Lcm(Aspose::Cells::System::Int64 a , Aspose::Cells::System::Int64 b);
			static Aspose::Cells::System::Double Sinc(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double FactorialLn(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Double Factorial(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Double BinomialCoefficient(Aspose::Cells::System::Int32 n , Aspose::Cells::System::Int32 k);
			static Aspose::Cells::System::Double BinomialCoefficientLn(Aspose::Cells::System::Int32 n , Aspose::Cells::System::Int32 k);
			static Aspose::Cells::System::Double GammaLn(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::Double Gamma(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::Double GammaRegularized(Aspose::Cells::System::Double a , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double wq_ran_gamma_pdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double wq_cdf_gamma_Pinv(Aspose::Cells::System::Double P , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double wq_cdf_gamma_Qinv(Aspose::Cells::System::Double Q , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double Beta(Aspose::Cells::System::Double z , Aspose::Cells::System::Double w);
			static Aspose::Cells::System::Double BetaLn(Aspose::Cells::System::Double z , Aspose::Cells::System::Double w);
			static Aspose::Cells::System::Double IncompleteBetaRegularized(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double BetaRegularized(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double wq_cdf_beta_P(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double wq_cdf_beta_Q(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double wq_cdf_beta_Pinv(Aspose::Cells::System::Double P , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double wq_cdf_beta_Qinv(Aspose::Cells::System::Double Q , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double Erf(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double ErfInverse(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double HarmonicNumber(Aspose::Cells::System::Int32 n);
			 SpecialFunctions();
		public:
			virtual ~SpecialFunctions();
	};

}

}

}
