#pragma once
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/Single.h"
#include "System/Double.h"
//#include "System/Math.h"
#include "System/Int32.h"
//#include "System/Exception.h"
#include "System/Array1D.h"
#define STATIC_CALCSTAT() 

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
	class CalcStat : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static Aspose::Cells::System::Double TDISTPdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom);
			static Aspose::Cells::System::Double PairTtest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static Aspose::Cells::System::Double Freedom(Aspose::Cells::System::Double var1 , Aspose::Cells::System::Int32 n1 , Aspose::Cells::System::Double var2 , Aspose::Cells::System::Int32 n2);
			static Aspose::Cells::System::Double Mean(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Int32 stride);
			static Aspose::Cells::System::Double Variance(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double VarianceM(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n , Aspose::Cells::System::Double mean);
			static Aspose::Cells::System::Double ComputeVariance(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n , Aspose::Cells::System::Double mean);
			static Aspose::Cells::System::Double Combin(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
	public:

			static Aspose::Cells::System::Double PERCENTRANKINC(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> array , Aspose::Cells::System::Int32 size , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double PERCENTRANKEXC(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> array , Aspose::Cells::System::Int32 size , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double PERCENTILE(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arrValue , Aspose::Cells::System::Double pos);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> FDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2 , bool cumulative);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BETADIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B , bool cumulative);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BETAINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> FINVRT(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CHIINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> TDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom , Aspose::Cells::System::Int32 tails);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> TINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CHIDISTRT(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CHIDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom , bool cumulative);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Critbinom(Aspose::Cells::System::Int32 trials , Aspose::Cells::System::Double probability , Aspose::Cells::System::Double alpha);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BINOMDIST(Aspose::Cells::System::Int32 Number_s , Aspose::Cells::System::Int32 Trials , Aspose::Cells::System::Double Probability_s , bool Cumulative);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GammaINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> HYPGEOMDIST(Aspose::Cells::System::Double ss , Aspose::Cells::System::Double ns , Aspose::Cells::System::Double ps , Aspose::Cells::System::Double np);
			static Aspose::Cells::System::Double WEIBULL(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta , bool cumulative);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GammaDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta , bool cumulative);
			static Aspose::Cells::System::Double Ztest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Double u , Aspose::Cells::System::Double sigma);
			static Aspose::Cells::System::Double Ztest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Double u);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Ttest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , Aspose::Cells::System::Int32 tails , Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Double TwoEqualTtest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static Aspose::Cells::System::Double TwoUnEqualTtest(Aspose::Cells::System::Double mean1 , Aspose::Cells::System::Double mean2 , Aspose::Cells::System::Double var1 , Aspose::Cells::System::Double var2 , Aspose::Cells::System::Int32 n1 , Aspose::Cells::System::Int32 n2);
			static Aspose::Cells::System::Double Pvariance(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Int32 stride_x , Aspose::Cells::System::Int32 n1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , Aspose::Cells::System::Int32 stride_y , Aspose::Cells::System::Int32 n2);
			static Aspose::Cells::System::Double Fact(Aspose::Cells::System::Double v , Aspose::Cells::System::Double k);
			 CalcStat();
		public:
			virtual ~CalcStat();
	};

}

}

}
