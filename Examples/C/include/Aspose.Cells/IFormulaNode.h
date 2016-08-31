#pragma once
#include "System/Byte.h"
#include "ShareableDimensionType.h"
#include "System/Object.h"
#include "RefMode.h"
#include "NodeValueVolatileType.h"
#include "System/String.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "FormulaValueAcceptedType.h"
#include "System/Array1D.h"
#define STATIC_IFORMULANODE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeString;
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class FormulaNodeDouble;
class FormulaNodeBoolean;
class FormulaNodeValuesCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IFormulaNode : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Byte GetTokenId() = 0;
			virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType() = 0;
			virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue() = 0;
			virtual bool IsNumeric() = 0;
			virtual bool IsBoolean() = 0;
			virtual bool IsError() = 0;
			virtual bool IsString() = 0;
			virtual intrusive_ptr<Aspose::Cells::System::Object> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode() = 0;
			virtual Aspose::Cells::FormulaUtility::RefMode GetCalculatedRetMode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual void ToArrayMode() = 0;
			virtual bool IsStaticArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::System::String> ToString(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType type) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> ToStringValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> ToBooleanValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual bool IsSingle(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual bool IsSingleRow(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual bool IsSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> columnInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef) = 0;
			virtual bool GetAcceptCache() = 0;
			virtual void Cache(bool recursive) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> GetValuesCache() = 0;
			virtual void SetValuesCache(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> value) = 0;
			virtual void ClearCache(bool recursive) = 0;
			virtual bool GetSimpleValue() = 0;
			virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another) = 0;
			virtual Aspose::Cells::FormulaModel::NodeValueVolatileType CheckVolatile(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaUtility::RefMode refMode) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> FindEqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> toFind) = 0;
			virtual Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableDimensionType(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange) = 0;
			virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange) = 0;
			virtual bool Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 origRow , Aspose::Cells::System::Int32 origCol , bool useRange) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> DeepClone() = 0;
			virtual void Discharge() = 0;
		public:
	};

}

}

}
