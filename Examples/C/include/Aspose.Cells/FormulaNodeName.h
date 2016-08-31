#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "RefMode.h"
//#include "System/String.h"
#include "FormulaNodeType.h"
//#include "System/BitConverter.h"
#include "NodeValueVolatileType.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "FormulaNodeAbstract.h"
#include "ShareableDimensionType.h"
//#include "System/Int16.h"
//#include "System/Char.h"
#define STATIC_FORMULANODENAME() 

namespace Aspose {
namespace Cells {
class ExternName;
class Name;
class NameCommonInfo;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class FormulaNodeValuesCache;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeName : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Object> _value;
			intrusive_ptr<Aspose::Cells::NameCommonInfo> _nameProps;
			Aspose::Cells::System::Int32 _externalSheetFlag;
			Aspose::Cells::FormulaUtility::RefMode _refMode;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> _cachedValue;
			 FormulaNodeName();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> RebuildResult(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> res , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> GetFormulaRelInfo(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetNodeForCheck(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRawNode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			 FormulaNodeName(Aspose::Cells::FormulaUtility::RefMode refMode , intrusive_ptr<Aspose::Cells::Name> name , Aspose::Cells::System::Int32 externalSheetIndex);
			 FormulaNodeName(Aspose::Cells::FormulaUtility::RefMode refMode , intrusive_ptr<Aspose::Cells::ExternName> name , Aspose::Cells::System::Int32 externalSheetIndex);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> DeepClone();
			 virtual void Discharge();
			bool GetExternal();
			intrusive_ptr<Aspose::Cells::NameCommonInfo> GetNameProps();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetCalculatedRetMode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsStaticArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableDimensionType(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual bool Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 origRow , Aspose::Cells::System::Int32 origCol , bool useRange);
			 virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual void ToArrayMode();
			 virtual bool GetSimpleValue();
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual bool GetAcceptCache();
			 virtual void Cache(bool recursive);
			 virtual void ClearCache(bool recursive);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> GetValuesCache();
			 virtual void SetValuesCache(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> value);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingle(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleRow(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> colInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual Aspose::Cells::FormulaModel::NodeValueVolatileType CheckVolatile(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaUtility::RefMode refMode);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
		public:
			virtual ~FormulaNodeName();
	};

}

}

}
