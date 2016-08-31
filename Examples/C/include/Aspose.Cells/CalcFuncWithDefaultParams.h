#pragma once
#include "FunctionIndex.h"
//#include "System/Text/StringBuilder.h"
#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "FormulaToken.h"
//#include "System/UInt16.h"
#include "System/String.h"
//#include "System/Int64.h"
//#include "System/Convert.h"
//#include "System/Math.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "RefMode.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
#include "FormulaValueAcceptedType.h"
//#include "System/TypeCode.h"
#define STATIC_CALCFUNCWITHDEFAULTPARAMS() 

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
	class CalcFuncWithDefaultParams : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::String> ToInternalBookAddress(intrusive_ptr<Aspose::Cells::System::String> s , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> PadForBaseConversion(intrusive_ptr<Aspose::Cells::System::String> result , Aspose::Cells::System::Int32 places);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ConvertBase(intrusive_ptr<Aspose::Cells::System::String> bin , Aspose::Cells::System::Int32 fromBase , Aspose::Cells::System::Int32 toBase , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> dvs);
			static intrusive_ptr<Aspose::Cells::System::String> Dollar(Aspose::Cells::System::Double value , Aspose::Cells::System::Int32 decimals , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::System::String> Fixed(Aspose::Cells::System::Double number , Aspose::Cells::System::Int32 decimals , bool noCommas , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 GetHWForOFFSET(Aspose::Cells::System::Double v);
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDn(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> funcNode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nDouble , Aspose::Cells::FormulaModel::FormulaValueAcceptedType types);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcSn(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nString);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcSnDm(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nString , Aspose::Cells::System::Int32 mDouble , Aspose::Cells::FormulaModel::FormulaValueAcceptedType acceptedType);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcTnDm(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nDate , Aspose::Cells::System::Int32 mDouble , Aspose::Cells::FormulaModel::FormulaValueAcceptedType acceptedType);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDnBm(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nD , Aspose::Cells::System::Int32 nB , Aspose::Cells::FormulaModel::FormulaValueAcceptedType acceptedType);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDkTnDm(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nDk , Aspose::Cells::System::Int32 nDate , Aspose::Cells::System::Int32 mDouble , Aspose::Cells::FormulaModel::FormulaValueAcceptedType acceptedType);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcOFFSET(Aspose::Cells::FormulaUtility::RefMode refMode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcINDEX(Aspose::Cells::FormulaUtility::RefMode refMode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcROWCOLUMN(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRow);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcCELL(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcIF(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CalcFuncWithDefaultParams();
		public:
			virtual ~CalcFuncWithDefaultParams();
	};

}

}

}
