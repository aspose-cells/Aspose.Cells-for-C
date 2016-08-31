#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_REVISIONSTYLE() 

namespace Aspose {
namespace Cells {
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionStyle : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> ExtLst;
			bool IsRangeBorder;
			intrusive_ptr<Aspose::Cells::Style> Style;
			 RevisionStyle();
		public:
			virtual ~RevisionStyle();
	};

}

}

}
