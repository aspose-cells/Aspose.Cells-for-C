#pragma once
//#include "System/Int16.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "Revision.h"
#define STATIC_REVISIONCELLCHANGE() 

namespace Aspose {
namespace Cells {
class Font;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCellData;
class RevisionStyle;
class RevisionCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionCellChange : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionCellChange();
			 RevisionCellChange(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			Aspose::Cells::System::Int32 GetRow();
			Aspose::Cells::System::Int32 GetColumn();
			bool IsNewFormatted;
			bool IsOldFormatted;
			bool IsEndOfListFormulaUpdate;
			Aspose::Cells::System::Int32 NumFmtId;
			bool ContainsOldPhonetic;
			bool ContainsOldQuotePrefix;
			bool ContainsPhonetic;
			bool ContainsQuotePrefix;
			bool IsUndoRejected;
			Aspose::Cells::System::Int32 Id;
			bool IsStyleFormat;
			Aspose::Cells::System::Int32 TabId;
			bool IsFromRejection;
			bool IsDxfFormat;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> OldCellData;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> NewCellData;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionStyle> OldStyle;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionStyle> NewStyle;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Font*>> Etxps;
		public:
			virtual ~RevisionCellChange();
	};

}

}

}
