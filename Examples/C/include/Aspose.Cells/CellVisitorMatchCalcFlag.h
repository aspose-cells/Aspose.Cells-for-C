#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "ICellVisitor.h"
#include "CellData.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORMATCHCALCFLAG() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellVisitorMatchCalcFlag : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> m_Match;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Cache;
	public:

			 CellVisitorMatchCalcFlag(bool match0 , bool match1 , bool match2 , bool match3);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorMatchCalcFlag();
		public:
			virtual ~CellVisitorMatchCalcFlag();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
