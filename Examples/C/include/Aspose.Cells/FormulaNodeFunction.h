#pragma once
#include "FormulaNodeType.h"
#include "System/Text/StringBuilder.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/String.h"
#include "NodeValueVolatileType.h"
#include "RefMode.h"
#include "FormulaNodeAbstract.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/Math.h"
//#include "System/StringHelperPal.h"
//#include "System/Random.h"
//#include "System/DateTime.h"
//#include "System/Collections/ArrayList.h"
#include "ShareableDimensionType.h"
#define STATIC_FORMULANODEFUNCTION() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeValuesCache;
class IFormulaNode;
class FunctionWrapperBuilder;
class IRangeDataWrapperFormulaNode;
class Function;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeFunction : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::Function> _value;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> _arrParams;
			Aspose::Cells::FormulaUtility::RefMode _retMode;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> _cachedValue;
			 FormulaNodeFunction();
			bool NeedParamWrapperForArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcUnknown(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> BuildSingleWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FunctionWrapperBuilder> builder , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetParamWrapper(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			bool IsParamSingle(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool IsParamSingleRow(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool IsParamSingleColumn(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetParamItem(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetParamRow(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetParamColumn(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> columnInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> ToSingleWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
	public:

			 FormulaNodeFunction(Aspose::Cells::FormulaUtility::RefMode retMode , intrusive_ptr<Aspose::Cells::FormulaModel::Function> func);
			 FormulaNodeFunction(Aspose::Cells::FormulaUtility::RefMode retMode , intrusive_ptr<Aspose::Cells::FormulaModel::Function> func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParams);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> DeepClone();
			 virtual void Discharge();
			void ClearCacheForBuildingWrapperItem();
			intrusive_ptr<Aspose::Cells::FormulaModel::Function> GetFunction();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetCalculatedRetMode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToArrayMode();
			 virtual bool IsStaticArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::NodeValueVolatileType CheckVolatile(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaUtility::RefMode refMode);
			 virtual Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableDimensionType(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual bool Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 origRow , Aspose::Cells::System::Int32 origCol , bool useRange);
			 virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual bool GetAcceptCache();
			 virtual void Cache(bool recursive);
			 virtual void ClearCache(bool recursive);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> GetValuesCache();
			 virtual void SetValuesCache(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> value);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Byte GetTokenId();
			Aspose::Cells::System::Int32 GetParamCount();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> GetParams();
			void SetParams(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParams , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalculateFunc(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetSimpleValue();
			 virtual bool IsSingle(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleRow(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> columnInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> FindEqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> toFind);
		public:
			virtual ~FormulaNodeFunction();
	};

}

}

}
