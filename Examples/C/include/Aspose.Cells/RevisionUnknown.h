#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "RevisionType.h"
#include "System/String.h"
#include "Revision.h"
#define STATIC_REVISIONUNKNOWN() 

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
	class RevisionUnknown : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionUnknown();
			 RevisionUnknown(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 RevisionUnknown(intrusive_ptr<Aspose::Cells::System::String> xml);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			intrusive_ptr<Aspose::Cells::System::String> Xml;
		public:
			virtual ~RevisionUnknown();
	};

}

}

}
