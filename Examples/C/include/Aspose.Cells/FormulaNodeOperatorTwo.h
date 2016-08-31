#pragma once
#include "ShareableDimensionType.h"
#include "System/Object.h"
#include "FormulaNodeOperator.h"
#include "NodeValueVolatileType.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "RefMode.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
#define STATIC_FORMULANODEOPERATORTWO() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
class FormulaNodeValuesCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorTwo : public Aspose::Cells::FormulaModel::FormulaNodeOperator
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetParamWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _left;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _right;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> _cachedValue;
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalculateOpr(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> CreateInstance();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetLeft();
			void SetLeft(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRight();
			void SetRight(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> GetCopy();
			 virtual bool GetUnary();
			 virtual bool GetAcceptCache();
			 virtual void Cache(bool recursive);
			 virtual void ClearCache(bool recursive);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> GetValuesCache();
			 virtual void SetValuesCache(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> value);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> DeepClone();
			 virtual void Discharge();
			void ClearCacheForBuildingWrapperItem();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetCalculatedRetMode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToArrayMode();
			 virtual bool IsStaticArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::NodeValueVolatileType CheckVolatile(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaUtility::RefMode refMode);
			 virtual Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableDimensionType(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual bool Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 origRow , Aspose::Cells::System::Int32 origCol , bool useRange);
			 virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingle(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleRow(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> colInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> FindEqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> toFind);
			 FormulaNodeOperatorTwo();
		public:
			virtual ~FormulaNodeOperatorTwo();
	};

}

}

}
