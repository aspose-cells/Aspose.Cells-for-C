#pragma once
#include "System/Object.h"
#include "OperatorType.h"
#include "System/TypeCode.h"
//#include "System/Boxing.h"
#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Type.h"
//#include "System/DateTime.h"
#define STATIC_FORMATSPECIFIEDCONDITION() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class FormatSpecifiedCondition : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::OperatorType m_Operator;
			Aspose::Cells::System::Double m_Operand;
	public:

			 FormatSpecifiedCondition(Aspose::Cells::OperatorType type , Aspose::Cells::System::Double operand);
			Aspose::Cells::OperatorType GetOperator();
			Aspose::Cells::System::Double GetOperand();
			bool IsMatched(Aspose::Cells::System::Double value);
			bool IsMatched(Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value , bool isDate1904);
			bool IsMatched(intrusive_ptr<Aspose::Cells::System::Object> value , bool isDate1904);
			 FormatSpecifiedCondition();
		public:
			virtual ~FormatSpecifiedCondition();
	};

}

}

}

}
