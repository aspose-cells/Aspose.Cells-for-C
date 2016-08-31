#pragma once
#include "System/Object.h"
#include "RangeDataWrapperAbstract.h"
//#include "System/Int16.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERCOMBINEDTWOBASE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class ICombinedAlgorithmTwo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperCombinedTwoBase : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> _wrapper1;
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> _wrapper2;
			intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmTwo> _algorithm;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _defaultValue;
			bool _matched1;
			bool _matched2;
			bool _next1;
			bool _next2;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			bool _move;
	public:

			 RangeDataWrapperCombinedTwoBase(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper1 , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper2 , intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmTwo> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 virtual void ResetIterator();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValueWithoutRecursion();
			 virtual bool IsDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetShiftableRowForRangeFormula();
			 virtual bool GetShiftableColumnForRangeFormula();
			 virtual bool GetSingle();
			 virtual bool GetEnumerableEdge2DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 virtual bool GetEnumerableEdge1DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 virtual bool IsIdle();
			 virtual void SetIsIdle(bool value);
			 virtual bool GetCacheItemPreference();
			 RangeDataWrapperCombinedTwoBase();
		public:
			virtual ~RangeDataWrapperCombinedTwoBase();
	};

}

}

}
