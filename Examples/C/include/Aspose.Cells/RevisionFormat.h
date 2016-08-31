#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "RevisionType.h"
#include "System/Int32.h"
#include "Revision.h"
#define STATIC_REVISIONFORMAT() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionStyle;
class RevisionCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionFormat : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionFormat();
			 RevisionFormat(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			intrusive_ptr<Aspose::Cells::Revisions::RevisionStyle> Style;
			Aspose::Cells::System::Int32 Length;
			bool IsStyleFormat;
			Aspose::Cells::System::Int32 TabId;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> AreaList;
			Aspose::Cells::System::Int32 StartIndex;
			bool IsDxfFormat;
			intrusive_ptr<Aspose::Cells::System::String> ExtLst;
		public:
			virtual ~RevisionFormat();
	};

}

}

}
