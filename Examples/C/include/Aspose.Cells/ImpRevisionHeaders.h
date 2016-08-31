#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/DateTime.h"
//#include "System/Guid.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_IMPREVISIONHEADERS() 

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
class RevisionLogCollection;
class RevisionHeader;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpRevisionHeaders : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> _Logs;
			 ImpRevisionHeaders(intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> logs);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadHeader(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSheetMap(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Revisions::RevisionHeader> header);
			void ReadReviewedList(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Revisions::RevisionHeader> header);
			 ImpRevisionHeaders();
		public:
			virtual ~ImpRevisionHeaders();
	};

}

}

}
