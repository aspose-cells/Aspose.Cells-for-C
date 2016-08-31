#pragma once
#include "CalcSUMPRODUCT1DW.h"
#include "System/Object.h"
//#include "System/Double.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CALCSUMPRODUCT1DVH() 

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
	class CalcSUMPRODUCT1DVH : public Aspose::Cells::FormulaModel::CalcSUMPRODUCT1DW
	{
	protected:

			 virtual void ResetForWrapper();
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _rowUsed;
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _currRow;
	public:

			 CalcSUMPRODUCT1DVH(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 minCol , Aspose::Cells::System::Int32 maxCol , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc();
			 CalcSUMPRODUCT1DVH();
		public:
			virtual ~CalcSUMPRODUCT1DVH();
	};

}

}

}
