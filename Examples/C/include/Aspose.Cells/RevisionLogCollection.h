#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "RevisionLog.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_REVISIONLOGCOLLECTION() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionUserCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionLogCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			bool m_DiskRevisions;
			bool m_Exclusive;
			bool m_History;
			bool m_KeepChangeHistory;
			Aspose::Cells::System::Int32 m_PreserveHistory;
			bool m_protected;
			bool m_Shared;
			bool m_TrackRevisions;
			Aspose::Cells::System::Int32 m_RevisionId;
			Aspose::Cells::System::Int32 m_Version;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_Guid;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_LastGuid;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionUserCollection> m_Users;
			Aspose::Cells::Workbook* m_workbook;
			 RevisionLogCollection(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> log);
			void PrepareSave(bool toBinary);
			 RevisionLogCollection();
		public:
			virtual ~RevisionLogCollection();
	};

}

}

}
