#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "Revision.h"
#define STATIC_REVISIONQUERYTABLE() 

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
	class RevisionQueryTable : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionQueryTable();
			 RevisionQueryTable(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			Aspose::Cells::System::Int32 FieldId;
			intrusive_ptr<Aspose::Cells::CellArea> CellArea;
			Aspose::Cells::System::Int32 TabId;
			Aspose::Cells::System::Int32 Id;
		public:
			virtual ~RevisionQueryTable();
	};

}

}

}
