#pragma once
#include "System/Object.h"
#include "RangeDataWrapperAbstract.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERCOMBINEDMULTIBASE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class ICombinedAlgorithmMultiple;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperCombinedMultiBase : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> _wrappers;
			intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple> _algorithm;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _defaultValue;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> _match;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> _next;
			Aspose::Cells::System::Int32 _firstMatched;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			Aspose::Cells::System::Int32 _moveIndex;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> GetClonedWrappers(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			 RangeDataWrapperCombinedMultiBase(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 virtual void ResetIterator();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValueWithoutRecursion();
			 virtual bool IsDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetShiftableRowForRangeFormula();
			 virtual bool GetShiftableColumnForRangeFormula();
			 virtual bool GetSingle();
			 virtual bool GetEnumerableEdge2DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 virtual bool GetEnumerableEdge1DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual bool IsIdle();
			 virtual void SetIsIdle(bool value);
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
			 virtual bool GetCacheItemPreference();
			 RangeDataWrapperCombinedMultiBase();
		public:
			virtual ~RangeDataWrapperCombinedMultiBase();
	};

}

}

}
