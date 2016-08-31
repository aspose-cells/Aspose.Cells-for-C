#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Boxing.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_TTEST() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class TTest : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> TwoEqualTtest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Int32 stride_x , Aspose::Cells::System::Int32 n1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , Aspose::Cells::System::Int32 stride_y , Aspose::Cells::System::Int32 n2);
			static intrusive_ptr<Aspose::Cells::System::Object> TwoUnEqualTtest(Aspose::Cells::System::Double mean1 , Aspose::Cells::System::Double mean2 , Aspose::Cells::System::Double var1 , Aspose::Cells::System::Double var2 , Aspose::Cells::System::Int32 n1 , Aspose::Cells::System::Int32 n2);
			static intrusive_ptr<Aspose::Cells::System::Object> Freedom(Aspose::Cells::System::Double var1 , Aspose::Cells::System::Int32 n1 , Aspose::Cells::System::Double var2 , Aspose::Cells::System::Int32 n2);
			static Aspose::Cells::System::Double Mean(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 size);
			static Aspose::Cells::System::Double Pvariance(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , Aspose::Cells::System::Int32 stride_x , Aspose::Cells::System::Int32 n1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , Aspose::Cells::System::Int32 stride_y , Aspose::Cells::System::Int32 n2);
			static Aspose::Cells::System::Double Variance(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Variance_m(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n , Aspose::Cells::System::Double mean);
			static Aspose::Cells::System::Double ComputeVariance(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> data , Aspose::Cells::System::Int32 stride , Aspose::Cells::System::Int32 n , Aspose::Cells::System::Double mean);
			static intrusive_ptr<Aspose::Cells::System::Object> PairTtest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			static intrusive_ptr<Aspose::Cells::System::Object> Ttest(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , Aspose::Cells::System::Int32 tails , Aspose::Cells::System::Int32 type);
			 TTest();
		public:
			virtual ~TTest();
	};

}

}

}
