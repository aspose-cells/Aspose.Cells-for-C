#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
//#include "System/String.h"
//#include "System/Math.h"
#include "System/Object.h"
#include "System/Int32.h"
//#include "System/StringHelperPal.h"
#define STATIC_CALCFUNCWITHVARIABLEPARAMS() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
class IStatisticsAlgorithm;
class FormulaNodeReference;
class CellVisitorAlgorithm;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcFuncWithVariableParams : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcSingleForSUMPRODUCT(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcAlgorithm(intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorAlgorithm> visitor , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeReference> pr);
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc(intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> algorithm , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcSUMPRODUCT(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcNPV(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcSUBTOTAL(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcCONCATENATE(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcGETPIVOTDATA(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcAGGREGATE(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CalcFuncWithVariableParams();
		public:
			virtual ~CalcFuncWithVariableParams();
	};

}

}

}
