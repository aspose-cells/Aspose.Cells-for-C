#pragma once
#include "System/Object.h"
#define STATIC_DATADXF() 

namespace Aspose {
namespace Cells {
namespace Record {
class FormatRecord;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataFont;
class DataAlignment;
class DataProtection;
class DataFill;
class DataBorder;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataDxf : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataFont> FontInfo;
			intrusive_ptr<Aspose::Cells::OpenXML::DataFill> FillInfo;
			intrusive_ptr<Aspose::Cells::OpenXML::DataBorder> BorderInfo;
			intrusive_ptr<Aspose::Cells::Record::FormatRecord> NumFmtInfo;
			intrusive_ptr<Aspose::Cells::OpenXML::DataAlignment> AlignInfo;
			intrusive_ptr<Aspose::Cells::OpenXML::DataProtection> ProtectInfo;
			 DataDxf();
		public:
			virtual ~DataDxf();
	};

}

}

}
