#pragma once
//#include "System/Int16.h"
#include "FormulaNodeType.h"
#include "RangeDataWrapperAbstract.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_RANGEDATAWRAPPEREXTERNAL() 

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
namespace CellsSs {
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
class ExternalRow;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperExternal : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _dataBuffer;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(intrusive_ptr<Aspose::Cells::ExternalRow> rowData , Aspose::Cells::System::Int32 column);
	public:

			 RangeDataWrapperExternal(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 RangeDataWrapperExternal();
		public:
			virtual ~RangeDataWrapperExternal();
	};

}

}

}
