#pragma once
#include "System/Object.h"
#include "RevisionActionType.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "Revision.h"
#define STATIC_REVISIONINSERTDELETE() 

namespace Aspose {
namespace Cells {
class CellArea;
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
	class RevisionInsertDelete : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionInsertDelete();
			 RevisionInsertDelete(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			Aspose::Cells::Revisions::RevisionActionType ActionType;
			bool IsEdgeDeleted;
			bool IsEndOfList;
			bool IsUndoRejected;
			intrusive_ptr<Aspose::Cells::CellArea> CellArea;
			Aspose::Cells::System::Int32 Id;
			Aspose::Cells::System::Int32 TabId;
			bool IsFromRejection;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> m_SubRevisions;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> GetSubRevisions();
		public:
			virtual ~RevisionInsertDelete();
	};

}

}

}
