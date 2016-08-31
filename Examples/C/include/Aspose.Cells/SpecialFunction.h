#pragma once
//#include "System/ArgumentOutOfRangeException.h"
//#include "System/Single.h"
//#include "System/Boxing.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/UInt32.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_SPECIALFUNCTION() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class SpecialFunction : public Aspose::Cells::System::Object
	{
	protected:

			static Aspose::Cells::System::Double M_SQRT2;
			static Aspose::Cells::System::Double M_SQRTPI;
			static Aspose::Cells::System::Double RatEval(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> a , Aspose::Cells::System::Int32 na , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> b , Aspose::Cells::System::Int32 nb , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double Small(Aspose::Cells::System::Double q);
			static Aspose::Cells::System::Double Intermediate(Aspose::Cells::System::Double r);
			static Aspose::Cells::System::Double Tail(Aspose::Cells::System::Double r);
			static bool IsNegInt(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double WqCdfUGaussianPinv(Aspose::Cells::System::Double P);
			static Aspose::Cells::System::Double WqCdfUGaussianQinv(Aspose::Cells::System::Double Q);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> factorialPrecomp;
			static Aspose::Cells::System::Int32 HarmonicPrecompSize;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> harmonicPrecomp;
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> factorialLnCache;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_factorialLnCache();
			 static const Aspose::Cells::System::Int32 FactorialPrecompSize;
			 static const Aspose::Cells::System::Int32 FactorialLnCacheSize;
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
			static Aspose::Cells::System::Double Erf(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double ErfInverse(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double HarmonicNumber(Aspose::Cells::System::Int32 n);
			 SpecialFunction();
		public:
			virtual ~SpecialFunction();
	};

}

}

}
