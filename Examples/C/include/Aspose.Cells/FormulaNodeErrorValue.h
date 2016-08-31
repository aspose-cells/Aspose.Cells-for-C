#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Boxing.h"
#include "ErrorType.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "FormulaNodeError.h"
#define STATIC_FORMULANODEERRORVALUE() 

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
	class FormulaNodeErrorValue : public Aspose::Cells::FormulaModel::FormulaNodeError
	{
	private:

			void Init_Vars();
			 FormulaNodeErrorValue();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> Instance;
			 virtual Aspose::Cells::ErrorType GetErrorType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> GetCalcERRORTYPE();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> ToStringValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
		public:
			virtual ~FormulaNodeErrorValue();
	};

}

}

}
