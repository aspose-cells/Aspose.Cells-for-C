#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Text/StringBuilder.h"
#include "FormulaNodeType.h"
#include "FormulaNodeAbstract.h"
#include "FormulaValueAcceptedType.h"
#include "System/String.h"
#define STATIC_FORMULANODENULL() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeString;
class FormulaRelInfo;
class FormulaNodeDouble;
class FormulaNodeBoolean;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeNull : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
			 FormulaNodeNull();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeNull> Instance;
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> ToStringValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> ToBooleanValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> FindEqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> toFind);
		public:
			virtual ~FormulaNodeNull();
	};

}

}

}
