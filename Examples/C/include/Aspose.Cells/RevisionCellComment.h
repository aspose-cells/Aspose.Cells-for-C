#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "RevisionActionType.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "Revision.h"
#define STATIC_REVISIONCELLCOMMENT() 

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
	class RevisionCellComment : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionCellComment();
			 RevisionCellComment(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			Aspose::Cells::Revisions::RevisionActionType ActionType;
			bool AlwaysShow;
			intrusive_ptr<Aspose::Cells::System::String> Author;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Guid;
			Aspose::Cells::System::Int32 Row;
			Aspose::Cells::System::Int32 Column;
			intrusive_ptr<Aspose::Cells::System::String> GetCellName();
			void SetCellName(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsHiddenRow;
			bool IsHiddenColumn;
			Aspose::Cells::System::Int32 NewLength;
			bool IsOldComment;
			Aspose::Cells::System::Int32 OldLength;
			Aspose::Cells::System::Int32 TabId;
		public:
			virtual ~RevisionCellComment();
	};

}

}

}
