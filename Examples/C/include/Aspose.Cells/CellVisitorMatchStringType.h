#pragma once
#include "System/Object.h"
#include "ICellVisitor.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORMATCHSTRINGTYPE() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IStringMatcher;
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellVisitorMatchStringType : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellsSs::IStringMatcher> m_StringMatcher;
	public:

			 CellVisitorMatchStringType(intrusive_ptr<Aspose::Cells::CellsSs::IStringMatcher> stringMatcher);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorMatchStringType();
		public:
			virtual ~CellVisitorMatchStringType();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
