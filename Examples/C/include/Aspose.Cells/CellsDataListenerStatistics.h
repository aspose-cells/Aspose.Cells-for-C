#pragma once
#include "System/Object.h"
#include "ICellsDataListener.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_CELLSDATALISTENERSTATISTICS() 

namespace Aspose {
namespace Cells {
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRowCollection;
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellsDataListenerStatistics : public Aspose::Cells::CellsSs::ICellsDataListener
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataListener> m_Parent;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> m_Rows;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> m_Row;
			Aspose::Cells::System::Int32 m_ArrCellIndex;
			Aspose::Cells::System::Int32 m_ArrRowPos;
			Aspose::Cells::System::Int32 m_ArrCellPos;
			Aspose::Cells::System::Int32 m_ArrRowIndex;
			Aspose::Cells::System::Int32 m_ArrColIndex;
	public:

			 CellsDataListenerStatistics(intrusive_ptr<Aspose::Cells::Cells> cells);
			Aspose::Cells::System::Int32 GetCellsArrayCellIndex();
			Aspose::Cells::System::Int32 GetCellsArrayRowIndex();
			Aspose::Cells::System::Int32 GetCellsArrayColumnIndex();
			Aspose::Cells::System::Int32 GetCellsArrayRowPosition();
			Aspose::Cells::System::Int32 GetCellsArrayCellPosition();
			void UpdateCellArrayIndex(Aspose::Cells::System::Int32 rowPos , Aspose::Cells::System::Int32 cellPos , Aspose::Cells::System::Int32 cellIndex , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> row , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 colIndex);
			void RegisterChain(intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataListener> parent);
			intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataListener> GetRegisterChain();
			 CellsDataListenerStatistics();
		public:
			virtual ~CellsDataListenerStatistics();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
