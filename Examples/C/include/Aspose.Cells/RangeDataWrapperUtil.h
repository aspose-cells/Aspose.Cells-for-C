#pragma once
//#include "System/Array.h"
//#include "System/Int16.h"
//#include "System/Math.h"
#include "FormulaNodeType.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPERUTIL() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class ICombinedAlgorithmTwo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
class IStatisticsAlgorithm;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetWrapperItem(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> data , Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 colOffset);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetWrapperForArrayMode(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> root , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetWrapperForNA1D(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 totalCount);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetWrapperForNAHOf2D(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 dimNATotal);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetWrapperForNAVOf2D(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 dimNATotal);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetWrapperForNA2Of2D(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 rowTotal , Aspose::Cells::System::Int32 colTotal);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCombinedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> w1 , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> w2 , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmTwo> alg);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ToArrayNode(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> ToCustomFunctionParam(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData , intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef , bool initEnum);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData , intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef , bool initEnum , bool checkDefault);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> BuildWrapperOfDuality(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> val , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultVal , Aspose::Cells::FormulaModel::FormulaNodeType baseType , Aspose::Cells::System::Int32 vCount , Aspose::Cells::System::Int32 from , Aspose::Cells::System::Int32 to , Aspose::Cells::System::Int32 startOfData , Aspose::Cells::System::Int32 dataSize , bool vertical , Aspose::Cells::System::Int32 baseIndexForShift , bool shift);
			 RangeDataWrapperUtil();
		public:
			virtual ~RangeDataWrapperUtil();
	};

}

}

}
