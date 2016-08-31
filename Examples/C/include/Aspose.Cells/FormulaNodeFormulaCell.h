#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Int16.h"
#include "RefMode.h"
#include "FormulaNodeType.h"
#include "FormulaValueAcceptedType.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#include "FormulaNodeAbstract.h"
//#include "System/Char.h"
#define STATIC_FORMULANODEFORMULACELL() 

namespace Aspose {
namespace Cells {
class FormulaCell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class FormulaNodeString;
class FormulaNodeBoolean;
class IFormulaNode;
class FormulaNodeDouble;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeFormulaCell : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaCell> _fc;
			Aspose::Cells::System::Int32 _sheetIndex;
	public:

			 FormulaNodeFormulaCell(Aspose::Cells::System::Int32 sheet , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			intrusive_ptr<Aspose::Cells::FormulaCell> GetFormulaCell();
			Aspose::Cells::System::Int32 GetSheetIndex();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode();
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> ToStringValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> ToBooleanValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetSimpleValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaNodeFormulaCell();
		public:
			virtual ~FormulaNodeFormulaCell();
	};

}

}

}
