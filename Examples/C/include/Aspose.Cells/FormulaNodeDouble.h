#pragma once
#include "System/Byte.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "FormulaNodeAbstract.h"
#include "FormulaNodeType.h"
#include "System/Text/StringBuilder.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "FormulaValueAcceptedType.h"
//#include "System/String.h"
#define STATIC_FORMULANODEDOUBLE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeString;
class FormulaRelInfo;
class FormulaNodeBoolean;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeDouble : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _value;
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> VALUENODE_ZERO;
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> VALUENODE_ONE;
			 FormulaNodeDouble(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetDoubleValue();
			bool IsValid();
			bool IsZero();
			bool IsOne();
			bool IsEqualZero();
			bool IsEqualOne();
			Aspose::Cells::System::Int32 CompareToZero();
			Aspose::Cells::System::Int32 CompareToOne();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual bool IsNumeric();
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> ToStringValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> ToBooleanValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
			 FormulaNodeDouble();
		public:
			virtual ~FormulaNodeDouble();
	};

}

}

}
