#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "FormulaNodeAbstract.h"
#include "FormulaNodeType.h"
#include "System/Text/StringBuilder.h"
//#include "System/Char.h"
//#include "System/Int32.h"
#include "FormulaValueAcceptedType.h"
#define STATIC_FORMULANODESTRING() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeDouble;
class FormulaNodeBoolean;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeString : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> _value;
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_EMPTY;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_TRUE;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_FALSE;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_DIV;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_NA;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_NAME;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_NULL;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_NUMBER;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_REF;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> VALUENODE_VALUE;
			 FormulaNodeString(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetStringValue();
			void SetStringValue(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsEmpty();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual bool IsString();
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> ToStringValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> ToBooleanValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaNodeString();
		public:
			virtual ~FormulaNodeString();
	};

}

}

}
