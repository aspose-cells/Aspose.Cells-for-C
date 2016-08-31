#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/StringHelperPal.h"
//#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_EXPEXTERNALLINK() 

namespace Aspose {
namespace Cells {
class ExternalCell;
class SupbookData;
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
namespace OpenXML {
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpExternalLink : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::SupbookData> _supBook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
			void WriteExternal(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteSheetDataSet(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void GetCellValueAndType(intrusive_ptr<Aspose::Cells::ExternalCell> cell , intrusive_ptr<Aspose::Cells::System::String>& t , intrusive_ptr<Aspose::Cells::System::String>& v);
			void WriteSheetNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteDefinedNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteDde(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteDdeItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOle(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOleItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
	public:

			 ExpExternalLink(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData , intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpExternalLink();
		public:
			virtual ~ExpExternalLink();
	};

}

}

}
