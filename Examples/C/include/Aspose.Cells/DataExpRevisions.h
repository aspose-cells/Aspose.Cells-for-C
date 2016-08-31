#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATAEXPREVISIONS() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionLogCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataExpRevisions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 DataExpRevisions(intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> logs);
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> _logs;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> HeadersRelInfo;
			 DataExpRevisions();
		public:
			virtual ~DataExpRevisions();
	};

}

}

}
