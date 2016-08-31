#pragma once
#include "System/Object.h"
#define STATIC_REVISIONLOG() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCollection;
class RevisionLogCollection;
class RevisionHeader;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionLog : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> Parent;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionHeader> Header;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> Revisions;
			 RevisionLog(intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> logs);
			 RevisionLog();
		public:
			virtual ~RevisionLog();
	};

}

}

}
