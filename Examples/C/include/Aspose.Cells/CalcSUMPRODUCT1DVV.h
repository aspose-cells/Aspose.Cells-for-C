#pragma once
#include "CalcSUMPRODUCT1DW.h"
#include "System/Object.h"
//#include "System/Double.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CALCSUMPRODUCT1DVV() 

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
	class CalcSUMPRODUCT1DVV : public Aspose::Cells::FormulaModel::CalcSUMPRODUCT1DW
	{
	protected:

			 virtual void ResetForWrapper();
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _colUsed;
			Aspose::Cells::System::Int32 _colCount;
			bool _useLast;
			Aspose::Cells::System::Int32 _currCol;
			Aspose::Cells::System::Int32 _nextCol;
			void FillDefault();
	public:

			 CalcSUMPRODUCT1DVV(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 minRow , Aspose::Cells::System::Int32 maxRow , Aspose::Cells::System::Int32 colIndex , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc();
			 CalcSUMPRODUCT1DVV();
		public:
			virtual ~CalcSUMPRODUCT1DVV();
	};

}

}

}
