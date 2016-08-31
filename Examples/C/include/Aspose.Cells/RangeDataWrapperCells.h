#pragma once
#include "CellData.h"
#include "FormulaNodeType.h"
#include "RangeDataWrapperAbstract.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_RANGEDATAWRAPPERCELLS() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperCells : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
			bool _rawNode;
	protected:

			intrusive_ptr<Aspose::Cells::Worksheet> _sheet;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _data;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			Aspose::Cells::System::Int32 _dataFields;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildValue();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildValue(intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			 virtual void Copy(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperCells> src);
	public:

			 virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCellData(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 RangeDataWrapperCells(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			Aspose::Cells::System::Int32 GetCellDataFields();
			void SetCellDataFields(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCurrentData();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 RangeDataWrapperCells();
		public:
			virtual ~RangeDataWrapperCells();
	};

}

}

}
