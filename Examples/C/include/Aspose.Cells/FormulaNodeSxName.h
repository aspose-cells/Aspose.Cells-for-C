#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#include "FormulaNodeBinary.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_FORMULANODESXNAME() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeSxName : public Aspose::Cells::FormulaModel::FormulaNodeBinary
	{
	private:

			void Init_Vars();
	public:

			 FormulaNodeSxName(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 tokenPos);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaNodeSxName();
		public:
			virtual ~FormulaNodeSxName();
	};

}

}

}
