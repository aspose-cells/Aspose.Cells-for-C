#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_REVISIONRRD() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionLog;
class RevisionMergeConflict;
class RevisionCellComment;
class RevisionCellChange;
class RevisionAutoFormat;
class RevisionQueryTable;
class RevisionCellMove;
class RevisionCustomView;
class RevisionDefinedName;
class RevisionInsertSheet;
class RevisionRenameSheet;
class RevisionInsertDelete;
class RevisionFormat;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class RevisionRRD : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Unused1;
			Aspose::Cells::System::Int32 RevId;
			Aspose::Cells::System::Int32 RevisionType;
			bool IsAccepted;
			bool IsUndoAction;
			bool Reserved1;
			bool Reserved2;
			Aspose::Cells::System::Int32 TabId;
			 RevisionRRD();
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> log);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionQueryTable> rmc);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionMergeConflict> rmc);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionAutoFormat> raf);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionDefinedName> rrs);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionRenameSheet> rrs);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellMove> rcm);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertSheet> ris);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellComment> ric);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionCustomView> ric);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertDelete> ric);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionFormat> rf);
			 RevisionRRD(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellChange> rcc);
			void ToRevisionCellChange(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellChange> rcc);
			void ToRevisionCellMove(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellMove> rcm);
			Aspose::Cells::System::Int32 Write(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
		public:
			virtual ~RevisionRRD();
	};

}

}

}

}
