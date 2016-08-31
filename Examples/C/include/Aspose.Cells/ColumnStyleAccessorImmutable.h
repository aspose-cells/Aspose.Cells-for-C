#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Math.h"
#include "System/Int32.h"
#include "IColumnStyleAccessor.h"
#define STATIC_COLUMNSTYLEACCESSORIMMUTABLE() 

namespace Aspose {
namespace Cells {
class Cells;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ColumnStyleAccessorImmutable : public Aspose::Cells::CellsSs::IColumnStyleAccessor
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _startDefaultColumn;
			Aspose::Cells::System::Int32 _defaultColumnXf;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _arrColumnXF;
	public:

			 ColumnStyleAccessorImmutable(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 maxColumn);
			Aspose::Cells::System::Int32 GetColumnXF(Aspose::Cells::System::Int32 columnIndex);
			 ColumnStyleAccessorImmutable();
		public:
			virtual ~ColumnStyleAccessorImmutable();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
