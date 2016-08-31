#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "FormulaNodeAbstract.h"
#include "FormulaNodeType.h"
#include "RefMode.h"
#include "System/Int32.h"
#include "System/Byte.h"
#define STATIC_FORMULANODEARRAY() 

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
	class FormulaNodeArray : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> GetArray(Aspose::Cells::System::Int32 rowIndex);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetCalculatedRetMode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsStaticArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual bool GetSimpleValue();
			 FormulaNodeArray();
		public:
			virtual ~FormulaNodeArray();
	};

}

}

}
