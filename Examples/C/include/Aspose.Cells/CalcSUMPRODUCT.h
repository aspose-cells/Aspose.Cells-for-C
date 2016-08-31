#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CALCSUMPRODUCT() 

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
	class CalcSUMPRODUCT : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void OnError();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> _wrappers;
			Aspose::Cells::System::Int32 _wSN;
			bool _firstWrapper;
			bool _inArr;
			bool _finishArr;
			bool _checkDefault;
			bool _zeroDefault;
			Aspose::Cells::System::Double _dvDefault;
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> _wrapper;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _res;
			Aspose::Cells::System::Double _dv;
			 CalcSUMPRODUCT(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ResetForWrapper();
			void OnAllZero();
			bool CheckDefault();
			bool CheckCurrent();
			bool CheckError();
	public:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc();
			 CalcSUMPRODUCT();
		public:
			virtual ~CalcSUMPRODUCT();
	};

}

}

}
