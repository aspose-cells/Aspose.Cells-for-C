#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "System/String.h"
#include "Revision.h"
#define STATIC_REVISIONCELLMOVE() 

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
	class RevisionCellMove : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionCellMove();
			 RevisionCellMove(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			intrusive_ptr<Aspose::Cells::CellArea> SourceArea;
			intrusive_ptr<Aspose::Cells::System::String> GetSource();
			void SetSource(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::CellArea> DestArea;
			intrusive_ptr<Aspose::Cells::System::String> GetDestination();
			void SetDestination(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsUndoRejected;
			Aspose::Cells::System::Int32 Id;
			Aspose::Cells::System::Int32 TabId;
			Aspose::Cells::System::Int32 SourceTabId;
			bool IsFromRejection;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> m_SubRevisions;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> GetSubRevisions();
		public:
			virtual ~RevisionCellMove();
	};

}

}

}
