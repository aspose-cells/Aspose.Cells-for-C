#pragma once
#include "System/Object.h"
#include "RevisionActionType.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "System/String.h"
#include "Revision.h"
#define STATIC_REVISIONINSERTSHEET() 

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
	class RevisionInsertSheet : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionInsertSheet();
			 RevisionInsertSheet(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			intrusive_ptr<Aspose::Cells::System::String> Name;
			bool IsUndoRejected;
			Aspose::Cells::System::Int32 Id;
			Aspose::Cells::System::Int32 TabId;
			Aspose::Cells::System::Int32 SheetPosition;
			bool IsFromRejection;
			Aspose::Cells::Revisions::RevisionActionType ActionType;
		public:
			virtual ~RevisionInsertSheet();
	};

}

}

}
