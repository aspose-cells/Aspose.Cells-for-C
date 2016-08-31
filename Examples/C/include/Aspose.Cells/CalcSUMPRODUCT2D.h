#pragma once
#include "System/Object.h"
#include "CalcSUMPRODUCT.h"
#include "System/Array2D.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CALCSUMPRODUCT2D() 

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
	class CalcSUMPRODUCT2D : public Aspose::Cells::FormulaModel::CalcSUMPRODUCT
	{
	protected:

			 virtual void ResetForWrapper();
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> _values;
			Aspose::Cells::System::Int32 _offsetRowATW;
			Aspose::Cells::System::Int32 _offsetColATW;
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> _rowData;
			Aspose::Cells::System::Int32 _startRowOfWrapper;
			Aspose::Cells::System::Int32 _startColOfWrapper;
			Aspose::Cells::System::Int32 _startRowOfArr;
			Aspose::Cells::System::Int32 _startColOfArr;
			Aspose::Cells::System::Int32 _maxRowOfArr;
			Aspose::Cells::System::Int32 _endColOfArr;
			Aspose::Cells::System::Int32 _currRowArr;
			Aspose::Cells::System::Int32 _currColArr;
			Aspose::Cells::System::Int32 _currRowWrapper;
			Aspose::Cells::System::Int32 _currColWrapper;
			Aspose::Cells::System::Int32 _nextRowArr;
			Aspose::Cells::System::Int32 _nextColArr;
			Aspose::Cells::System::Int32 _nextRowWrapper;
			Aspose::Cells::System::Int32 _nextColWrapper;
			void FillDefaultToRowEnd();
			bool FillDefaultToEnd();
			void FillDefaultRow();
			void FillDefaultToCurrentRow();
			void FillRowToCurrent();
			void FillCurrent();
			bool FinishWrapper();
			bool FillToCurrent();
	public:

			 CalcSUMPRODUCT2D(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 minRow , Aspose::Cells::System::Int32 minCol , Aspose::Cells::System::Int32 maxRow , Aspose::Cells::System::Int32 maxCol , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc();
			 CalcSUMPRODUCT2D();
		public:
			virtual ~CalcSUMPRODUCT2D();
	};

}

}

}
