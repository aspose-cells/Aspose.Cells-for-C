#pragma once
#include "System/Int32.h"
//#include "System/Double.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Math.h"
#define STATIC_CALCLOOKUP() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class Criteria;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
class FormulaRelInfo;
class FormulaNodeReference;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcLookup : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetHVLookupRange(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> tableArray , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> res , Aspose::Cells::System::Int32 index , bool vertical , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeReference> GetHVLookupRange(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeReference> original , Aspose::Cells::System::Int32 index , bool vertical , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> res);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetLookupRange(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> tableArray , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> res , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeReference> GetLookupRange(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeReference> original , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> res);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetMatchArray(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> tableArray , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 Match(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> lookupValue , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> dataWrapper , Aspose::Cells::System::Int32 matchType , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 ExactMatch(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> lookupValue , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> dataWrapper , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 MatchDescend(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> lookupValue , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> dataWrapper , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 BinarySearch(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> lookupValue , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> dataWrapper , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 SearchToEnd(intrusive_ptr<Aspose::Cells::FormulaModel::Criteria> criteria , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> dataWrapper , Aspose::Cells::System::Int32 nextIndex , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> HVLookup(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isVertical);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Lookup(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Match(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CalcLookup();
		public:
			virtual ~CalcLookup();
	};

}

}

}
