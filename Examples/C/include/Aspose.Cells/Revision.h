#pragma once
#include "RevisionType.h"
#include "System/Object.h"
#define STATIC_REVISION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class Revision : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			 virtual intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> Parent;
			 Revision(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 Revision();
		public:
			virtual ~Revision();
	};

}

}

}
