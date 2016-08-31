#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/DateTime.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
//#include "System/Guid.h"
#define STATIC_IMPREVISIONUSERNAMES() 

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
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpRevisionUserNames : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> _Logs;
			 ImpRevisionUserNames(intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> logs);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpRevisionUserNames();
		public:
			virtual ~ImpRevisionUserNames();
	};

}

}

}
