#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "Revision.h"
#define STATIC_REVISIONMERGECONFLICT() 

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
	class RevisionMergeConflict : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionMergeConflict();
			 RevisionMergeConflict(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			bool IsUndoRejected;
			bool IsFromRejection;
			Aspose::Cells::System::Int32 Id;
			Aspose::Cells::System::Int32 TabId;
		public:
			virtual ~RevisionMergeConflict();
	};

}

}

}
