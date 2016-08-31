#pragma once
#include "System/Collections/ArrayList.h"
#include "System/Int16.h"
//#include "System/Single.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Object.h"
#define STATIC_NORMALDISTRIBUTION() 


namespace Aspose {
namespace Cells {
	class NormalDistribution : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static Aspose::Cells::System::Double phi(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double gauss(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double approxFloor(Aspose::Cells::System::Double a);
			static bool approxEqual(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::Double taylor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> pPolynom , Aspose::Cells::System::Int32 nMax , Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double GammaHelp(Aspose::Cells::System::Double& x , bool& bReflect);
			static Aspose::Cells::System::Double GetGamma(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double GetLogGamma(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double GetFDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double fF1 , Aspose::Cells::System::Double fF2);
			static Aspose::Cells::System::Double GetBetaDist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double alpha , Aspose::Cells::System::Double beta);
			static Aspose::Cells::System::Double GetFValue(Aspose::Cells::System::Double x , Aspose::Cells::System::Double fp , Aspose::Cells::System::Double fF1 , Aspose::Cells::System::Double fF2);
			static Aspose::Cells::System::Double F_lcl_IterateInverse(Aspose::Cells::System::Double fp , Aspose::Cells::System::Double fF1 , Aspose::Cells::System::Double fF2 , Aspose::Cells::System::Double x0 , Aspose::Cells::System::Double x1);
	public:

			static Aspose::Cells::System::Double Normsinv(Aspose::Cells::System::Double probability);
			static Aspose::Cells::System::Double Norminv(Aspose::Cells::System::Double probability , Aspose::Cells::System::Double mean , Aspose::Cells::System::Double standard_dev);
			static Aspose::Cells::System::Double Normdist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double mean , Aspose::Cells::System::Double standard_dev , bool cumulative);
			static Aspose::Cells::System::Double Normsdist(Aspose::Cells::System::Double z);
			static Aspose::Cells::System::Double Fdist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2);
			static Aspose::Cells::System::Double Finv(Aspose::Cells::System::Double probability , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2);
			static Aspose::Cells::System::Double Expondist(Aspose::Cells::System::Double x , Aspose::Cells::System::Double lambda , bool cumulative);
			static Aspose::Cells::System::Double NegbinomDist(Aspose::Cells::System::Double number_f , Aspose::Cells::System::Double number_s , Aspose::Cells::System::Double probability_s);
			static Aspose::Cells::System::Double Sln(Aspose::Cells::System::Double cost , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double life);
			static Aspose::Cells::System::Double Syd(Aspose::Cells::System::Double cost , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double life , Aspose::Cells::System::Double per);
			static Aspose::Cells::System::Double Nper(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Int16 type);
			static Aspose::Cells::System::Double Nper(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv);
			static Aspose::Cells::System::Double Nper(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv);
			static Aspose::Cells::System::Double Xnpv(Aspose::Cells::System::Double rate , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> values , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dates);
			static Aspose::Cells::System::Double Xnpv(Aspose::Cells::System::Double rate , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> dates);
			 NormalDistribution();
		public:
			virtual ~NormalDistribution();
	};

}

}
