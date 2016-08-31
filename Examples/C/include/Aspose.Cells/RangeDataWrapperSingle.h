#pragma once
#include "FormulaNodeType.h"
#include "RangeDataWrapperAbstract.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPERSINGLE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperSingle : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			Aspose::Cells::FormulaModel::FormulaNodeType _baseType;
			bool _init;
	public:

			 RangeDataWrapperSingle(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 RangeDataWrapperSingle(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , Aspose::Cells::FormulaModel::FormulaNodeType baseType);
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
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValueWithoutRecursion();
			 virtual bool IsDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 RangeDataWrapperSingle();
		public:
			virtual ~RangeDataWrapperSingle();
	};

}

}

}
