#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#include "FormulaToken.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int32Helper.h"
#include "System/Collections/Stack.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
//#include "System/UInt16Helper.h"
#define STATIC_FORMULABINTOTREE() 

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
	class FormulaBinToTree : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> _tokenIterator;
			intrusive_ptr<Aspose::Cells::System::Collections::Stack> _stack;
			bool _cacheValue;
			Aspose::Cells::System::Int32 _startPos;
			void OnInvalidFormula(intrusive_ptr<Aspose::Cells::System::String> msg);
			void CalcuateValueOperator(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> node);
			void CalcuateValueOperatorUnary(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorUnary> node);
			void CacheNodeValue(intrusive_ptr<Aspose::Cells::System::Collections::Stack> stack , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> nodeNew);
	public:

			 FormulaBinToTree(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaBinToTree(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> tokenIterator);
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> GetFormulaTokenVisitor();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Convert(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , bool cacheValue);
			intrusive_ptr<Aspose::Cells::System::String> ConvertBinaryToString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			 FormulaBinToTree();
		public:
			virtual ~FormulaBinToTree();
	};

}

}

}
