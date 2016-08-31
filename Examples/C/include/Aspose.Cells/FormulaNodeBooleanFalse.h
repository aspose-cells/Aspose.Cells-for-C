#pragma once
#include "System/Object.h"
#include "System/Text/StringBuilder.h"
#include "FormulaNodeBoolean.h"
#include "FormulaValueAcceptedType.h"
//#include "System/String.h"
#define STATIC_FORMULANODEBOOLEANFALSE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeString;
class FormulaRelInfo;
class FormulaNodeDouble;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeBooleanFalse : public Aspose::Cells::FormulaModel::FormulaNodeBoolean
	{
	private:

			void Init_Vars();
			 FormulaNodeBooleanFalse();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> Instance;
			 virtual bool GetBooleanValue();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> ToStringValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
		public:
			virtual ~FormulaNodeBooleanFalse();
	};

}

}

}
