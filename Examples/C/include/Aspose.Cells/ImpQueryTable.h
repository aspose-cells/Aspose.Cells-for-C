#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_IMPQUERYTABLE() 

namespace Aspose {
namespace Cells {
class Worksheet;
class QueryTableFieldCollection;
class QueryTable;
class QueryTableField;
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
class XmlDocument;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWorksheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpQueryTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Xml::XmlDocument> _doc;
			void ReadTable(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadQueryTableRefresh(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadQueryTableFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::QueryTableFieldCollection> fields);
			intrusive_ptr<Aspose::Cells::QueryTableField> ReadQueryTableField(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::QueryTableFieldCollection> fields);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> _impSheet;
			intrusive_ptr<Aspose::Cells::Worksheet> _sheet;
			intrusive_ptr<Aspose::Cells::System::Object> Parent;
			intrusive_ptr<Aspose::Cells::System::String> _fn;
			 ImpQueryTable(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::Object> parent , intrusive_ptr<Aspose::Cells::System::String> fn);
			intrusive_ptr<Aspose::Cells::QueryTable> queryTable;
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpQueryTable();
		public:
			virtual ~ImpQueryTable();
	};

}

}

}
