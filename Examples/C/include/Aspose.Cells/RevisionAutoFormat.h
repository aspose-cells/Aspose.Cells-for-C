#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "Revision.h"
#define STATIC_REVISIONAUTOFORMAT() 

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
	class RevisionAutoFormat : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
	public:

			 RevisionAutoFormat();
			 RevisionAutoFormat(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			bool GetApplyNumberFormats();
			void SetApplyNumberFormats(bool value);
			bool GetApplyFontFormats();
			void SetApplyFontFormats(bool value);
			bool GetApplyAlignmentFormats();
			void SetApplyAlignmentFormats(bool value);
			bool GetApplyBorderFormats();
			void SetApplyBorderFormats(bool value);
			bool GetApplyPatternFormats();
			void SetApplyPatternFormats(bool value);
			bool GetApplyWidthHeightFormats();
			void SetApplyWidthHeightFormats(bool value);
			Aspose::Cells::System::Int32 Options;
			Aspose::Cells::System::Int32 AutoFormatId;
			intrusive_ptr<Aspose::Cells::CellArea> CellArea;
			Aspose::Cells::System::Int32 TabId;
		public:
			virtual ~RevisionAutoFormat();
	};

}

}

}
