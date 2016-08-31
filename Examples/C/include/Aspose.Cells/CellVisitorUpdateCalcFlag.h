#pragma once
#include "CellData.h"
#include "System/Object.h"
#include "ICellVisitor.h"
#include "RawCellValueType.h"
#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORUPDATECALCFLAG() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CellVisitorUpdateCalcFlag : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_Flag;
			bool m_SetValue;
			Aspose::Cells::CellsSs::RawCellValueType m_ValueType;
			intrusive_ptr<Aspose::Cells::System::Object> m_Value;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> m_RelInfo;
			bool m_Backup;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Cache;
	public:

			 CellVisitorUpdateCalcFlag(Aspose::Cells::System::Int32 flag);
			 CellVisitorUpdateCalcFlag(Aspose::Cells::System::Int32 flag , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CellVisitorUpdateCalcFlag(Aspose::Cells::System::Int32 flag , Aspose::Cells::CellsSs::RawCellValueType valueType , intrusive_ptr<Aspose::Cells::System::Object> value);
			 CellVisitorUpdateCalcFlag(Aspose::Cells::System::Int32 flag , Aspose::Cells::CellsSs::RawCellValueType valueType , intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorUpdateCalcFlag();
		public:
			virtual ~CellVisitorUpdateCalcFlag();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
