#pragma once
#include "FunctionIndex.h"
//#include "System/Char.h"
//#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Int64.h"
//#include "System/UInt16.h"
//#include "System/Single.h"
//#include "System/Type.h"
//#include "System/Array.h"
//#include "System/Text/Encoding.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Exception.h"
//#include "System/Math.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/StringHelperPal.h"
//#include "System/Random.h"
#include "FormulaValueAcceptedType.h"
//#include "System/DateTime.h"
//#include "System/TypeCode.h"
#define STATIC_CALCFUNCWITHFIXEDPARAMS() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaNodeBoolean;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcFuncWithFixedParams : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int64 MaxBitArgument;
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDn(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType acceptedType , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcTBILL(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcCUM(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDnB(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType acceptedType , Aspose::Cells::System::Int32 nDouble);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcSn(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcComplex(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDateTimeValue(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcSnDm(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nString , Aspose::Cells::System::Int32 mDouble , Aspose::Cells::FormulaModel::FormulaValueAcceptedType acceptedType);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcBn(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcIMPOWER(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcFormulaTEXT(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcTEXT(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> format , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcT(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcN(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcVALUE(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcTYPE(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcERRORTYPE(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcRowColCount(bool isRow , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> CalcIS(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcAREAS(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcBitLogic(Aspose::Cells::FormulaModel::FunctionIndex funcIndex , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcBitShift(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool left);
			 CalcFuncWithFixedParams();
		public:
			virtual ~CalcFuncWithFixedParams();
	};

}

}

}
