#pragma once
//#include "System/Int16.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#include "ShareableDimensionType.h"
#define STATIC_FUNCTIONWRAPPERBUILDER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class IFunctionParams;
class FormulaNodeFunction;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionWrapperBuilder : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> _funcNode;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFunctionParams> _funcPP;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> _wrappers;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> _vParams;
			Aspose::Cells::FormulaModel::ShareableDimensionType _shiftType;
			bool _hasNA;
			bool _initedShift;
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
			Aspose::Cells::System::Int32 _count1R;
			Aspose::Cells::System::Int32 _count1C;
			Aspose::Cells::System::Int32 _count2D;
			Aspose::Cells::System::Int32 _first1R;
			Aspose::Cells::System::Int32 _first1C;
			Aspose::Cells::System::Int32 _first2D;
			void InitIndices(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> indices , Aspose::Cells::System::Int32 count , Aspose::Cells::System::Int32 endIndex , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> combinedWrappers);
	public:

			 FunctionWrapperBuilder(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> funcNode , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void SetSingle(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			void SetWrapper(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> GetParamsOfSingleWrapper();
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> BuildWrapper();
			 FunctionWrapperBuilder();
		public:
			virtual ~FunctionWrapperBuilder();
	};

}

}

}
