#pragma once
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "FormulaToken.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int32Helper.h"
#include "System/Collections/Stack.h"
//#include "System/StringHelperPal.h"
#include "System/Text/StringBuilder.h"
#define STATIC_FORMULABINTOVALUE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaNodeOperatorUnary;
class FormulaRelInfo;
class FormulaNodeOperatorTwo;
class FormulaTokenVisitor;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaBinToValue : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			bool _globalJIT;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> _tokenIterator;
			intrusive_ptr<Aspose::Cells::System::Collections::Stack> _stack;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _buffer;
			Aspose::Cells::System::Int32 _startPos;
			bool _currJIT;
			Aspose::Cells::System::Int32 _stackSizeJIT;
			bool CalcTokens();
			void ProcessTAttrChoose();
			void ProcessTAttrIF();
			void CalcuateFunction(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 numOfArguments);
			void OnInvalidFunctionParam(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 expectedCount);
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> BuildDebugInfo();
			void OnInvalidFormula(intrusive_ptr<Aspose::Cells::System::String> msg);
			void CalcuateValueOperator(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> node);
			void CalcuateValueOperatorUnary(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorUnary> node);
			void CalculateRefOperator(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> node);
	public:

			 FormulaBinToValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			 FormulaBinToValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , bool jit);
			 FormulaBinToValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> visitor);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> GetFormulaTokenVisitor();
			 FormulaBinToValue();
		public:
			virtual ~FormulaBinToValue();
	};

}

}

}
