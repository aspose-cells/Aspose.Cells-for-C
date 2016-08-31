#pragma once
#include "ShareableDimensionType.h"
#include "System/Object.h"
#include "FormulaNodeOperator.h"
//#include "System/Int16.h"
#include "NodeValueVolatileType.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "RefMode.h"
#include "System/Array1D.h"
#define STATIC_FORMULANODEOPERATORUNARY() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorUnary : public Aspose::Cells::FormulaModel::FormulaNodeOperator
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _child;
	public:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorUnary> CreateInstance();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetChild();
			void SetChild(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 virtual void ClearCache(bool recursive);
			 virtual bool GetUnary();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> DeepClone();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetCalculatedRetMode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToArrayMode();
			 virtual Aspose::Cells::FormulaModel::NodeValueVolatileType CheckVolatile(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaUtility::RefMode refMode);
			 virtual bool IsStaticArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableDimensionType(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual bool Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 origRow , Aspose::Cells::System::Int32 origCol , bool useRange);
			 virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingle(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleRow(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> colInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> FindEqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> toFind);
			 FormulaNodeOperatorUnary();
		public:
			virtual ~FormulaNodeOperatorUnary();
	};

}

}

}
