#pragma once
#include "System/Object.h"
#include "CalcSUMPRODUCT.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CALCSUMPRODUCT1DW() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcSUMPRODUCT1DW : public Aspose::Cells::FormulaModel::CalcSUMPRODUCT
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> _values;
			Aspose::Cells::System::Int32 _offsetATW;
			Aspose::Cells::System::Int32 _wrapperSize;
			Aspose::Cells::System::Int32 _startOfWrapper;
			Aspose::Cells::System::Int32 _startOfArr;
			Aspose::Cells::System::Int32 _maxOfArr;
			Aspose::Cells::System::Int32 _currIndex;
			Aspose::Cells::System::Int32 _nextIndex;
			 virtual void ResetForWrapper();
			bool FillDefaultToEnd();
			void FillDefaultToCurrent();
			void FillCurrent();
			bool FillSingle();
			bool FinishWrapper();
	public:

			 CalcSUMPRODUCT1DW(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 min , Aspose::Cells::System::Int32 max , Aspose::Cells::System::Int32 dataCount);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc();
			 CalcSUMPRODUCT1DW();
		public:
			virtual ~CalcSUMPRODUCT1DW();
	};

}

}

}
