#pragma once
//#include "System/Array.h"
#include "System/Array2D.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Single.h"
//#include "System/Type.h"
#include "System/Double.h"
//#include "System/DateTime.h"
//#include "System/Int64.h"
#include "System/Int32.h"
//#include "System/String.h"
//#include "System/Math.h"
//#include "System/TypeCode.h"
#include "System/Collections/ArrayList.h"
#define STATIC_STATISTIC() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Statistic : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Object> GetPercentileList(intrusive_ptr<Aspose::Cells::System::Object> child1 , bool date1904 , bool cmfFormula);
	public:

			 Statistic();
			static intrusive_ptr<Aspose::Cells::System::Object> SMALL(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> array , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> childResult2 , bool isSmall);
			static intrusive_ptr<Aspose::Cells::System::Object> SMALL(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> array , intrusive_ptr<Aspose::Cells::System::Object> childResult2 , bool isSmall);
			static intrusive_ptr<Aspose::Cells::System::Object> BINOMDIST(Aspose::Cells::System::Int32 Number_s , Aspose::Cells::System::Int32 Trials , Aspose::Cells::System::Double Probability_s , bool Cumulative);
			static intrusive_ptr<Aspose::Cells::System::Object> EXPONDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double lambda , bool cumulative);
			static Aspose::Cells::System::Double Poisson(Aspose::Cells::System::Int32 x , Aspose::Cells::System::Double mean , bool cumulative);
			static intrusive_ptr<Aspose::Cells::System::Object> BetaDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta , Aspose::Cells::System::Double A , Aspose::Cells::System::Double B);
			static intrusive_ptr<Aspose::Cells::System::Object> BetaInv(Aspose::Cells::System::Double probability , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta , Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static intrusive_ptr<Aspose::Cells::System::Object> GammaDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta , bool cumulative);
			static intrusive_ptr<Aspose::Cells::System::Object> GammaInv(Aspose::Cells::System::Double probability , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta);
			static intrusive_ptr<Aspose::Cells::System::Object> TDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degreesFreedom , Aspose::Cells::System::Int32 tails);
			static intrusive_ptr<Aspose::Cells::System::Object> TInv(Aspose::Cells::System::Double probability , Aspose::Cells::System::Double degreesFreedom);
			static intrusive_ptr<Aspose::Cells::System::Object> ChiDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degreesFreedom);
			static intrusive_ptr<Aspose::Cells::System::Object> ChiInv(Aspose::Cells::System::Double probability , Aspose::Cells::System::Double degreesFreedom);
			static intrusive_ptr<Aspose::Cells::System::Object> FDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degreesFreedom1 , Aspose::Cells::System::Double degreesFreedom2);
			static intrusive_ptr<Aspose::Cells::System::Object> FInv(Aspose::Cells::System::Double probability , Aspose::Cells::System::Double degreesFreedom1 , Aspose::Cells::System::Double degreesFreedom2);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculatePercentile(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , Aspose::Cells::System::Double k);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculatePercentile(intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Object> child2 , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings , bool cmfFormula);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateQuartile(intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Object> child2 , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings , bool cmfFormula);
		public:
			virtual ~Statistic();
	};

}

}

}
