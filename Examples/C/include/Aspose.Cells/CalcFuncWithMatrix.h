#pragma once
#include "FunctionIndex.h"
//#include "System/Collections/ArrayList.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Int64.h"
//#include "System/Array.h"
//#include "System/String.h"
#include "System/Object.h"
//#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/Math.h"
#include "FormulaValueAcceptedType.h"
#define STATIC_CALCFUNCWITHMATRIX() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeFunction;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcFuncWithMatrix : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetStatisticsResultForIf(Aspose::Cells::FormulaModel::FunctionIndex func , Aspose::Cells::System::Double sum , Aspose::Cells::System::Int32 count);
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcW1D(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType singleVAT);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDnW(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nDouble , Aspose::Cells::System::Int32 flag);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcWn(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 nRange);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcTrendGrowth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isGrowth , bool useRange);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDoubleMatrix(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nRange);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcFREQUENCY(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcPROB(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcFVSCHEDULE(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcStatisticsIF(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcCOUNTIF(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> funcNode , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> range , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcCOUNTIFS(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcStatisticsIFS(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcCOUNTBLANK(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcSERIESSUM(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcTTEST(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcXNPV(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcTRANSPOSE(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcXIRR(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CalcFuncWithMatrix();
		public:
			virtual ~CalcFuncWithMatrix();
	};

}

}

}
