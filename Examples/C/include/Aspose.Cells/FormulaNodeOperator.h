#pragma once
#include "FormulaToken.h"
#include "System/Text/StringBuilder.h"
#include "FormulaNodeType.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "FormulaNodeAbstract.h"
#include "System/Char.h"
#define STATIC_FORMULANODEOPERATOR() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperator : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
	public:

			 virtual bool GetUnary();
			 virtual Aspose::Cells::System::Int32 GetPriority();
			 virtual void SelfToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void Discharge();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetSimpleValue();
			static bool IsOperator(Aspose::Cells::System::Char c);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperator> GetOperator(Aspose::Cells::System::Byte tokenID);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperator> GetOperator(Aspose::Cells::System::Char c);
			 FormulaNodeOperator();
		public:
			virtual ~FormulaNodeOperator();
	};

}

}

}
