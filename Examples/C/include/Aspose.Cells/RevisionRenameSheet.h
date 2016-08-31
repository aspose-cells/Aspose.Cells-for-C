#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "System/String.h"
#include "Revision.h"
#define STATIC_REVISIONRENAMESHEET() 

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
	class RevisionRenameSheet : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionRenameSheet();
			 RevisionRenameSheet(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			intrusive_ptr<Aspose::Cells::System::String> NewName;
			intrusive_ptr<Aspose::Cells::System::String> OldName;
			bool IsUndoRejected;
			Aspose::Cells::System::Int32 Id;
			Aspose::Cells::System::Int32 TabId;
			bool IsFromRejection;
		public:
			virtual ~RevisionRenameSheet();
	};

}

}

}
