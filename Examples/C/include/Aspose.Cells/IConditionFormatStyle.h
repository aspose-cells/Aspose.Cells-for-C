#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Double.h"
//#include "System/Int16.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#define STATIC_ICONDITIONFORMATSTYLE() 

namespace Aspose {
namespace Cells {
class ConditionalFormattingValue;
class CellArea;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaNodeDouble;
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}

namespace Aspose {
namespace Cells {
namespace StyleObject {
	class IConditionFormatStyle : public Aspose::Cells::System::Object
	{
	protected:

			 IConditionFormatStyle(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas);
			 virtual void InitCellValue();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> Calculate(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> fc);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas;
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToFormulaNode(intrusive_ptr<Aspose::Cells::CellArea> ca);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToFormulaNode(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas);
	public:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> m_FormulaRelInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> m_CellValue;
			 virtual bool IsShowValue();
			 IConditionFormatStyle();
		public:
			virtual ~IConditionFormatStyle();
	};

}

}

}
