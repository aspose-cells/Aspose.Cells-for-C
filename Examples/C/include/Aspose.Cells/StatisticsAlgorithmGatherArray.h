#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "StatisticsAlgorithmMath.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/Array.h"
#define STATIC_STATISTICSALGORITHMGATHERARRAY() 

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
	class StatisticsAlgorithmGatherArray : public Aspose::Cells::FormulaModel::StatisticsAlgorithmMath
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> _data;
			Aspose::Cells::System::Int32 _size;
			 virtual bool IsNegligibleZeroAlways();
			 virtual bool IsNegligibleZero();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessZero();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessZero(Aspose::Cells::System::Int32 count);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessValue(Aspose::Cells::System::Double value);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessValue(Aspose::Cells::System::Double value , Aspose::Cells::System::Int32 count);
	public:

			 StatisticsAlgorithmGatherArray(bool isA , bool strict , bool ignoreError);
			 StatisticsAlgorithmGatherArray(Aspose::Cells::System::Int32 initSize , bool isA , bool strict , bool ignoreError);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> GetDataBuffer();
			Aspose::Cells::System::Int32 GetDataSize();
			 virtual void Reset();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			 StatisticsAlgorithmGatherArray();
		public:
			virtual ~StatisticsAlgorithmGatherArray();
	};

}

}

}
