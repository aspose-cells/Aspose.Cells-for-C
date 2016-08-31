#pragma once
#include "Revision.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_REVISIONCOLLECTION() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionLog;
class RevisionPSHandler;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Object> Parent;
			 RevisionCollection(intrusive_ptr<Aspose::Cells::System::Object> parent);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> GetIndexObject(Aspose::Cells::System::Int32 index);
			void PrepareSave(intrusive_ptr<Aspose::Cells::Revisions::RevisionPSHandler> handler);
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> Get_log();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Revisions::Revision> revision);
			 RevisionCollection();
		public:
			virtual ~RevisionCollection();
	};

}

}

}
