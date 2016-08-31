#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "IColumnStyleAccessor.h"
#define STATIC_COLUMNSTYLEACCESSORDIRECT() 

namespace Aspose {
namespace Cells {
class Cells;
class ColumnCollection;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ColumnStyleAccessorDirect : public Aspose::Cells::CellsSs::IColumnStyleAccessor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::ColumnCollection> _columns;
	public:

			 ColumnStyleAccessorDirect(intrusive_ptr<Aspose::Cells::Cells> cells);
			Aspose::Cells::System::Int32 GetColumnXF(Aspose::Cells::System::Int32 columnIndex);
			 ColumnStyleAccessorDirect();
		public:
			virtual ~ColumnStyleAccessorDirect();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
