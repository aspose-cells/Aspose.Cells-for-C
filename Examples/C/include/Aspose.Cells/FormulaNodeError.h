#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/String.h"
#include "Constants.h"
#include "FormulaNodeType.h"
#include "FormulaNodeAbstract.h"
#include "ErrorType.h"
//#include "System/Int32.h"
#include "FormulaValueAcceptedType.h"
#define STATIC_FORMULANODEERROR() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeDouble;
class FormulaNodeBoolean;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeError : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetInstance(Aspose::Cells::System::Byte value);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetInstance(intrusive_ptr<Aspose::Cells::System::String> str);
			 virtual Aspose::Cells::ErrorType GetErrorType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> GetCalcERRORTYPE();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual bool IsError();
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> ToBooleanValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
			 FormulaNodeError();
		public:
			virtual ~FormulaNodeError();
	};

}

}

}
