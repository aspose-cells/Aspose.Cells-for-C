#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Text/StringBuilder.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Char.h"
//#include "System/Array.h"
#include "RawCellValueType.h"
//#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "System/Int64.h"
#include "RefMode.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
#include "FormulaValueAcceptedType.h"
//#include "System/Exception.h"
#define STATIC_FORMULANODEVALUEUTIL() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeError;
class FormulaNodeOperatorCompare;
class FormulaNodeOperatorList;
class IFormulaNode;
class ComplexNumber;
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
class Criteria;
class FormulaNodeDouble;
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
class Worksheet;
class Cells;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeValueUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> SimpleValueToNode(intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			static Aspose::Cells::FormulaUtility::RefMode ToRefMode(Aspose::Cells::System::Byte tokenId);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ParseDouble(intrusive_ptr<Aspose::Cells::System::String> val , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ParseDate(intrusive_ptr<Aspose::Cells::System::String> val , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCellNode(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool raw , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToFormulaNode(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , bool raw , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToFormulaNode(intrusive_ptr<Aspose::Cells::CellsSs::CellData> plainData , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToFormulaNode(Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> value);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToFormulaNode(intrusive_ptr<Aspose::Cells::System::DateTime> dt , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToFormulaNode(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToFormulaNode(Aspose::Cells::System::Int64 val);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToFormulaNode(Aspose::Cells::System::Double val);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToFormulaNode(intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::Criteria> ParseCriteria(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool regex);
			static intrusive_ptr<Aspose::Cells::FormulaModel::Criteria> BuildCriteria(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool regex);
			static intrusive_ptr<Aspose::Cells::FormulaModel::Criteria> BuildCriteria(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr , bool regex);
			static bool EqualsCriteria(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node1 , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node2 , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static bool AcceptString(Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			static bool AcceptBoolean(Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			static bool AcceptNull(Aspose::Cells::FormulaModel::FormulaValueAcceptedType type);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetParamValues(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arrValue , Aspose::Cells::FormulaModel::FormulaValueAcceptedType types);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetParamValues(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> arrValue);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetParamValues(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> arrValue);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetParamValues(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::DateTime*>> arrValue , Aspose::Cells::FormulaModel::FormulaValueAcceptedType types);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetParamValues(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::ComplexNumber*>> arrValue);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetParamValues(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> arrValue , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> err);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> GetParamValues(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> arrValue , Aspose::Cells::System::Int32 flag , Aspose::Cells::System::Double defaultValue);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToDoubleArray(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> arrValue , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 flag);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> ToDoubleArray(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> arrValue , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 flag);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> ToDoubleArray(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrValue , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 flag);
			static bool IsInvalid(Aspose::Cells::System::Double v);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> RequireDoubleNode(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> RequireReference(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> RequireReferenceOrNull(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> ToNodeArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> dvs);
			static bool EqualsValue(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> one , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> another);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetMathCalculatedResult(Aspose::Cells::System::Double val);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> ListNodeToArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorList> list);
			static void AddNode(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> al , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node);
			static bool IsRef(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node);
			static void CacheForCalc(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> root , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sub);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetExternalCellNode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 FormulaNodeValueUtil();
		public:
			virtual ~FormulaNodeValueUtil();
	};

}

}

}
