#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_SIMPLESTATISTICSCALCULATOR() 

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
	class SimpleStatisticsCalculator : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Double Sum(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arr , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static Aspose::Cells::System::Double Average(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arr , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static Aspose::Cells::System::Double Stdev(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arr , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static Aspose::Cells::System::Double Stdevp(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arr , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static Aspose::Cells::System::Double Devsq(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arr , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static Aspose::Cells::System::Double Avedev(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arr , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Skew(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arr , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Kurt(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arr , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static Aspose::Cells::System::Int32 Gcd(Aspose::Cells::System::Int32 m , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double FactDouble(Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Fact(Aspose::Cells::System::Int32 n);
			 SimpleStatisticsCalculator();
		public:
			virtual ~SimpleStatisticsCalculator();
	};

}

}

}
