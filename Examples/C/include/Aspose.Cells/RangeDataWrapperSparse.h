#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "RangeDataWrapperAbstract.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERSPARSE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperSparse : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _defaultValue;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			Aspose::Cells::FormulaModel::FormulaNodeType _baseType;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _indices;
			bool _vertical;
			Aspose::Cells::System::Int32 _dataSize;
			bool _shift;
			Aspose::Cells::System::Int32 _baseCellIndex;
			Aspose::Cells::System::Int32 _startOfData;
			Aspose::Cells::System::Int32 _startOfArr;
			Aspose::Cells::System::Int32 _endOfArr;
			Aspose::Cells::System::Int32 _sizeOfArr;
			Aspose::Cells::System::Int32 _arrIndex;
			Aspose::Cells::System::Int32 _dataIndex;
	public:

			 RangeDataWrapperSparse(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , Aspose::Cells::FormulaModel::FormulaNodeType baseType , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> indices , Aspose::Cells::System::Int32 startOfData , Aspose::Cells::System::Int32 dataSize , bool vertical , Aspose::Cells::System::Int32 baseCellIndex , bool shiftable);
			 RangeDataWrapperSparse(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperSparse> source);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual bool GetSingle();
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 virtual void ResetIterator();
			 virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual bool MoveNext();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent();
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValueWithoutRecursion();
			 virtual bool GetShiftableRowForRangeFormula();
			 virtual bool GetShiftableColumnForRangeFormula();
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 RangeDataWrapperSparse();
		public:
			virtual ~RangeDataWrapperSparse();
	};

}

}

}
