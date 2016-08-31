#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
//#include "System/Byte.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_EXPREVISIONS() 

namespace Aspose {
namespace Cells {
class RefString;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCellMove;
class RevisionDefinedName;
class RevisionStyle;
class RevisionHeader;
class RevisionCellComment;
class RevisionLogCollection;
class RevisionInsertSheet;
class RevisionUserCollection;
class RevisionFormat;
class RevisionCollection;
class RevisionCustomView;
class RevisionQueryTable;
class RevisionCellData;
class RevisionMergeConflict;
class RevisionRenameSheet;
class RevisionLog;
class RevisionCellChange;
class RevisionInsertDelete;
class RevisionAutoFormat;
class RevisionUndo;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpWhole;
class ExpStyles;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpRevisions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::ExpStyles> m_ExpStyles;
			void WriteRevisions(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			void WriteRcc(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionCellChange> revision);
			void WriteCellData(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> celldata , intrusive_ptr<Aspose::Cells::System::String> nodeName);
			void WriteIs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::RefString> refstr , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void WriteFormat(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionStyle> cellStyle , intrusive_ptr<Aspose::Cells::System::String> nodeName);
			void WriteRm(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionCellMove> revision);
			void WriteUndo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionUndo> revision);
			void WriteRrc(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertDelete> revision);
			void WriteRfmt(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionFormat> revision);
			void WriteRis(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertSheet> revision);
			void WriteRsnm(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionRenameSheet> revision);
			void WriteRcft(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionMergeConflict> revision);
			void WriteRaf(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionAutoFormat> revision);
			void WriteRqt(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionQueryTable> revision);
			void WriteRcmt(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionCellComment> revision);
			void WriteRcv(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionCustomView> revision);
			void WriteRdn(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionDefinedName> revision);
			void WriteHeader(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionHeader> header);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _dataExpWhole;
			 ExpRevisions(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> dataExpWhole , intrusive_ptr<Aspose::Cells::OpenXML::ExpStyles> expStyles);
			void WriteLog(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> log);
			void WriteUserNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionUserCollection> users);
			void WriteHeaders(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> logs);
			 ExpRevisions();
		public:
			virtual ~ExpRevisions();
	};

}

}

}
