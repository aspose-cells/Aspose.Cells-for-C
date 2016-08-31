#pragma once
//#include "System/Array.h"
//#include "System/Single.h"
#include "System/Object.h"
#include "System/Double.h"
#include "Integral.h"
#include "System/Array2D.h"
#include "NLEquations.h"
//#include "System/Math.h"
#include "System/Int32.h"
//#include "System/Exception.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#define STATIC_STAT() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Stat : public Aspose::Cells::System::Object
	{
	private:


		class INTE_TDIST;

		 friend class Stat::INTE_TDIST;

		class NLEq_T;

		 friend class Stat::NLEq_T;

		class NLEq_CHI;

		 friend class Stat::NLEq_CHI;

		class NLEq_F;

		 friend class Stat::NLEq_F;

		class INTE_GammaDist;

		 friend class Stat::INTE_GammaDist;

		
	class INTE_TDIST : public Aspose::Cells::FormulaUtility::Integral
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _degrees_freedom;
	public:

			 INTE_TDIST(Aspose::Cells::System::Double degrees_freedom);
			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x);
			 INTE_TDIST();
		public:
			virtual ~INTE_TDIST();
	};

		
	class NLEq_T : public Aspose::Cells::FormulaUtility::NLEquations
	{
	protected:

			 virtual void Func(Aspose::Cells::System::Double x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _degrees_freedom;
	public:

			 NLEq_T(Aspose::Cells::System::Double degree_freedom);
			 NLEq_T();
		public:
			virtual ~NLEq_T();
	};

		
	class NLEq_CHI : public Aspose::Cells::FormulaUtility::NLEquations
	{
	protected:

			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x);
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _degrees_freedom;
	public:

			 NLEq_CHI(Aspose::Cells::System::Double degree);
			 NLEq_CHI();
		public:
			virtual ~NLEq_CHI();
	};

		
	class NLEq_F : public Aspose::Cells::FormulaUtility::NLEquations
	{
	protected:

			 virtual void Func(Aspose::Cells::System::Double x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _degrees_freedom1;
			Aspose::Cells::System::Double _degrees_freedom2;
	public:

			 NLEq_F(Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2);
			 NLEq_F();
		public:
			virtual ~NLEq_F();
	};

		
	class INTE_GammaDist : public Aspose::Cells::FormulaUtility::Integral
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Double alpha;
			Aspose::Cells::System::Double beta;
			 INTE_GammaDist(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			 virtual Aspose::Cells::System::Double Func(Aspose::Cells::System::Double x);
			 INTE_GammaDist();
		public:
			virtual ~INTE_GammaDist();
	};
	protected:

			static Aspose::Cells::System::Double fHalfMachEps;
			static Aspose::Cells::System::Double GetGammaContFraction(Aspose::Cells::System::Double fA , Aspose::Cells::System::Double fX);
			static Aspose::Cells::System::Double GetGammaSeries(Aspose::Cells::System::Double fA , Aspose::Cells::System::Double fX);
			static Aspose::Cells::System::Double GetLowRegIGamma(Aspose::Cells::System::Double fA , Aspose::Cells::System::Double fX);
	private:

			void Init_Vars();
			static bool BetaDistPdf(Aspose::Cells::System::Double& x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B);
			static Aspose::Cells::System::Double TDISTPdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom);
			static Aspose::Cells::System::Double GammaDistPdf(Aspose::Cells::System::Double fX , Aspose::Cells::System::Double fAlpha , Aspose::Cells::System::Double fLambda);
	public:

			static Aspose::Cells::System::Double BETADIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , bool& isError);
			static Aspose::Cells::System::Double BETADIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B , bool& isError);
			static Aspose::Cells::System::Double BETAINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , bool& isError);
			static Aspose::Cells::System::Double BETAINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B , bool& isError);
			static Aspose::Cells::System::Double TDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom , Aspose::Cells::System::Int32 tails , bool& isError);
			static Aspose::Cells::System::Double TINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom , bool& isError);
			static Aspose::Cells::System::Double CHIDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom , bool& isError);
			static Aspose::Cells::System::Double CHIINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom , bool& isError);
			static Aspose::Cells::System::Double FDISTPdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2);
			static Aspose::Cells::System::Double FDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2 , bool& isError);
			static Aspose::Cells::System::Double FINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2 , bool& isError);
			static Aspose::Cells::System::Double GammaDistCdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha);
			static Aspose::Cells::System::Double GammaDistCdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta);
			Aspose::Cells::System::Double GetUpRegIGamma(Aspose::Cells::System::Double fA , Aspose::Cells::System::Double fX);
			static Aspose::Cells::System::Double GammaDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta , bool cumulative);
			static Aspose::Cells::System::Double GammaINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta);
			static Aspose::Cells::System::Double EXPONDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double lambda , bool cumulative , bool& isError);
			static Aspose::Cells::System::Double BINOM_INV(Aspose::Cells::System::Int32 Trials , Aspose::Cells::System::Double Probability_s , Aspose::Cells::System::Double alpha , bool& isError);
			static Aspose::Cells::System::Double BINOMDIST(Aspose::Cells::System::Int32 Number_s , Aspose::Cells::System::Int32 Trials , Aspose::Cells::System::Double Probability_s , bool Cumulative , bool& isError);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> FREQUENCY(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data_array , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> bins_array , bool& isError);
			static intrusive_ptr<Aspose::Cells::System::Object> FORECAST(Aspose::Cells::System::Double guess , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static Aspose::Cells::System::Double SUM(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> AVERAGE(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static Aspose::Cells::System::Double Min(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static Aspose::Cells::System::Double Max(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static Aspose::Cells::System::Double PRODUCT(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> STDEV(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> VAR(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> STDEVP(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> VARP(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> WEIBULL(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta , bool cumulative);
			static intrusive_ptr<Aspose::Cells::System::Object> SLOPE(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static Aspose::Cells::System::Double Combin(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double Fact(Aspose::Cells::System::Double v , Aspose::Cells::System::Double k);
			static intrusive_ptr<Aspose::Cells::System::Object> STANDARDIZE(Aspose::Cells::System::Double x , Aspose::Cells::System::Double mean , Aspose::Cells::System::Double dev);
			static intrusive_ptr<Aspose::Cells::System::Object> PERMUT(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static intrusive_ptr<Aspose::Cells::System::Object> STEYX(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static Aspose::Cells::System::Double Mean(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 size);
			static Aspose::Cells::System::Double Sum(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data);
			static intrusive_ptr<Aspose::Cells::System::Object> TRIMMEAN(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Double percent);
			static intrusive_ptr<Aspose::Cells::System::Object> INTERCEPT(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> KURT(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> SKEW(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static Aspose::Cells::System::Double Variance(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Variance_m(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n , Aspose::Cells::System::Double mean);
			static Aspose::Cells::System::Double ComputeVariance(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n , Aspose::Cells::System::Double mean);
			static intrusive_ptr<Aspose::Cells::System::Object> PROB(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> prob , Aspose::Cells::System::Double lower , Aspose::Cells::System::Double upper);
			static intrusive_ptr<Aspose::Cells::System::Object> PROB(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> prob , Aspose::Cells::System::Double lower);
			static intrusive_ptr<Aspose::Cells::System::Object> LOGINV(Aspose::Cells::System::Double p , Aspose::Cells::System::Double mean , Aspose::Cells::System::Double dev);
			static intrusive_ptr<Aspose::Cells::System::Object> LOGNORMDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double mean , Aspose::Cells::System::Double dev);
			static intrusive_ptr<Aspose::Cells::System::Object> CONFIDENCE(Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double dev , Aspose::Cells::System::Int32 size);
			static intrusive_ptr<Aspose::Cells::System::Object> COVAR(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static intrusive_ptr<Aspose::Cells::System::Object> CRITBINOM(Aspose::Cells::System::Int32 trials , Aspose::Cells::System::Double probability , Aspose::Cells::System::Double alpha);
			static intrusive_ptr<Aspose::Cells::System::Object> AVEDEV(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> DEVSQ(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> FISHER(Aspose::Cells::System::Double x);
			static intrusive_ptr<Aspose::Cells::System::Object> FISHERINV(Aspose::Cells::System::Double y);
			static intrusive_ptr<Aspose::Cells::System::Object> CHITEST(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> actual , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> expected);
			static intrusive_ptr<Aspose::Cells::System::Object> GAMMALN(Aspose::Cells::System::Double y);
			static intrusive_ptr<Aspose::Cells::System::Object> HARMEAN(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Object> HYPGEOMDIST(Aspose::Cells::System::Double ss , Aspose::Cells::System::Double ns , Aspose::Cells::System::Double ps , Aspose::Cells::System::Double np);
			static intrusive_ptr<Aspose::Cells::System::Object> NEGBINOMDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double r , Aspose::Cells::System::Double p);
			static intrusive_ptr<Aspose::Cells::System::Object> PERCENTRANK(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> array , Aspose::Cells::System::Double x , Aspose::Cells::System::Double significane);
			static intrusive_ptr<Aspose::Cells::System::Object> PERCENTRANK(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> array , Aspose::Cells::System::Double x);
			static intrusive_ptr<Aspose::Cells::System::Object> Ztest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Double u , Aspose::Cells::System::Double sigma);
			static intrusive_ptr<Aspose::Cells::System::Object> Ztest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Double u);
			 Stat();
		public:
			virtual ~Stat();
	};

}

}

}
