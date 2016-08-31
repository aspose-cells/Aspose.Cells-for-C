#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Double.h"
//#include "System/Boxing.h"
//#include "System/Guid.h"
//#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_IMPREVISIONLOGS() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCellData;
class RevisionLog;
class Revision;
class RevisionStyle;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpRevisionLogs : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _Workbook;
			intrusive_ptr<Aspose::Cells::System::Object> ToCellValue(intrusive_ptr<Aspose::Cells::System::Object> valRead , intrusive_ptr<Aspose::Cells::System::String> dataType);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 ImpRevisionLogs(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> log);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRsnm(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRqt(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRis(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRrc(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadUndo(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRm(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRcc(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> ReadCellData(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::Revisions::Revision> revision);
			intrusive_ptr<Aspose::Cells::Revisions::RevisionStyle> ReadCellStyle(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool isDxf);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRcft(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRcmt(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRaf(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRdn(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRfmt(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadRcv(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpRevisionLogs();
		public:
			virtual ~ImpRevisionLogs();
	};

}

}

}
