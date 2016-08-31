#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_EXPQUERYTABLE() 

namespace Aspose {
namespace Cells {
class QueryTableFieldCollection;
class QueryTable;
class QueryTableField;
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
	class ExpQueryTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void WriteFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::QueryTableFieldCollection> fields , bool isFields);
			void WriteField(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::QueryTableField> field , bool isFields , intrusive_ptr<Aspose::Cells::System::String> node);
	public:

			intrusive_ptr<Aspose::Cells::QueryTable> _queryTable;
			 ExpQueryTable(intrusive_ptr<Aspose::Cells::QueryTable> queryTable);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpQueryTable();
		public:
			virtual ~ExpQueryTable();
	};

}

}

}
