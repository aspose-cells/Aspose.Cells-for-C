#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "RevisionActionType.h"
#include "RevisionType.h"
#include "Revision.h"
#define STATIC_REVISIONCUSTOMVIEW() 

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
	class RevisionCustomView : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionCustomView();
			 RevisionCustomView(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Guid;
			Aspose::Cells::Revisions::RevisionActionType ActionType;
		public:
			virtual ~RevisionCustomView();
	};

}

}

}
