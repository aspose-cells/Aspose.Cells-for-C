#pragma once
#include "RangeDataWrapperNABase.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_RANGEDATAWRAPPERNA1DBASE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperNA1DBase : public Aspose::Cells::FormulaModel::RangeDataWrapperNABase
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::System::Int32 _wrapperCount;
			Aspose::Cells::System::Int32 _totalCount;
			bool _vertical;
			bool _next;
			Aspose::Cells::System::Int32 _wrapperIndex;
			Aspose::Cells::System::Int32 _iterIndex;
	public:

			 RangeDataWrapperNA1DBase(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 totalCount);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual void ResetIterator();
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
			 virtual bool GetSingle();
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 RangeDataWrapperNA1DBase();
		public:
			virtual ~RangeDataWrapperNA1DBase();
	};

}

}

}
