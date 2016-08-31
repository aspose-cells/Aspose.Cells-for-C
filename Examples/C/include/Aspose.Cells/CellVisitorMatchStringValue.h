#pragma once
#include "System/Object.h"
#include "ICellVisitor.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORMATCHSTRINGVALUE() 

namespace Aspose {
namespace Cells {
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class IStringMatcher;
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellVisitorMatchStringValue : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			Aspose::Cells::Cells* m_Cells;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Cache;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringMatcher> m_StringMatcher;
	public:

			 CellVisitorMatchStringValue(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::IStringMatcher> stringMatcher);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorMatchStringValue();
		public:
			virtual ~CellVisitorMatchStringValue();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
