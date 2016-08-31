#pragma once
#include "FormulaNodeType.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Text/StringBuilder.h"
//#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Int64.h"
//#include "System/UInt16.h"
//#include "System/String.h"
//#include "System/Collections/Hashtable.h"
#include "NodeValueVolatileType.h"
#include "RefMode.h"
#include "FormulaNodeAbstract.h"
//#include "System/Math.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
#include "FormulaValueAcceptedType.h"
#include "ShareableDimensionType.h"
//#include "System/Char.h"
#define STATIC_FORMULANODEREFERENCE() 

namespace Aspose {
namespace Cells {
class CellArea;
class ExternalSheet;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeString;
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
class RangeReference;
class FormulaNodeBoolean;
class FormulaRelInfo;
class FormulaNodeValuesCache;
class FormulaNodeDouble;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeReference : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> _value;
			Aspose::Cells::FormulaUtility::RefMode _refMode;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> _cachedValue;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetNodeForBase(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::ExternalSheet> es , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , bool isValue , bool checkLeaf);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetNode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::ExternalSheet> es , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , bool isRaw , bool checkLeaf);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> BuildWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 sheetIndex);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> BuildWrapperWithCache(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::CellArea> rangeArea);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> BuildWrapperWithVariableCell(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 sheetIndex);
	public:

			 FormulaNodeReference(Aspose::Cells::FormulaUtility::RefMode refMode , intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> value);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> DeepClone();
			intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> GetRangeReference();
			bool IsExternal(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual bool GetAcceptCache();
			 virtual void Cache(bool recursive);
			 virtual void ClearCache(bool recursive);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> GetValuesCache();
			 virtual void SetValuesCache(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> value);
			 virtual Aspose::Cells::FormulaModel::NodeValueVolatileType CheckVolatile(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaUtility::RefMode refMode);
			 virtual Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableDimensionType(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual bool Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 origRow , Aspose::Cells::System::Int32 origCol , bool useRange);
			 virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetCalculatedRetMode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToArrayMode();
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeString> ToStringValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> ToBooleanValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool IsRefError(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool IsRefError(intrusive_ptr<Aspose::Cells::ExternalSheet> es , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetSimpleValue();
			 virtual bool IsSingle(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleRow(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> colInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaNodeReference();
		public:
			virtual ~FormulaNodeReference();
	};

}

}

}
