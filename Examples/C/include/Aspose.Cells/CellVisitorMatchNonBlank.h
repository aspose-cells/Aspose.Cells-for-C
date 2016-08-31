#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "ICellVisitor.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_CELLVISITORMATCHNONBLANK() 

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
	class CellVisitorMatchNonBlank : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
	public:

			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorMatchNonBlank();
		public:
			virtual ~CellVisitorMatchNonBlank();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
