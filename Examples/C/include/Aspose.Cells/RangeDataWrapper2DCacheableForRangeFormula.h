#pragma once
#include "System/Object.h"
#include "FormulaNodeType.h"
#include "RangeDataWrapperAbstract.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPER2DCACHEABLEFORRANGEFORMULA() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapper2DCacheableForRangeFormula : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _defaultValue;
			Aspose::Cells::FormulaModel::FormulaNodeType _baseType;
			bool _shiftRow;
			bool _shiftCol;
			Aspose::Cells::System::Int32 _baseCellRow;
			Aspose::Cells::System::Int32 _baseCellCol;
	public:

			 RangeDataWrapper2DCacheableForRangeFormula(Aspose::Cells::FormulaModel::FormulaNodeType baseType , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 baseCellRow , Aspose::Cells::System::Int32 baseCellCol , bool shiftRow , bool shiftCol);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual bool IsDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValue();
			 virtual bool GetShiftableRowForRangeFormula();
			 virtual bool GetShiftableColumnForRangeFormula();
			 RangeDataWrapper2DCacheableForRangeFormula();
		public:
			virtual ~RangeDataWrapper2DCacheableForRangeFormula();
	};

}

}

}
