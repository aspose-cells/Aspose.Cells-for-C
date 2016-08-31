#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#define STATIC_EXPTABLE() 

namespace Aspose {
namespace Cells {
class SaveOptions;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpWorksheet;
}
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
class ListColumn;
}
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
	class ExpTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> _expWorksheetData;
			intrusive_ptr<Aspose::Cells::Tables::ListObject> _table;
			bool invalidQueyTable;
			void WriteTableStyleInfo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteTableColumns(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteTableColumn(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Tables::ListColumn> col);
			intrusive_ptr<Aspose::Cells::System::String> GetTableRef();
			void WriteTableAttrs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			intrusive_ptr<Aspose::Cells::System::String> GetTableXFId(Aspose::Cells::System::Int32 idx);
			intrusive_ptr<Aspose::Cells::System::String> GetColumnXFId(intrusive_ptr<Aspose::Cells::Tables::ListColumn> col , Aspose::Cells::System::Int32 idx);
	public:

			 ExpTable(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> expWorksheetData , intrusive_ptr<Aspose::Cells::Tables::ListObject> table , intrusive_ptr<Aspose::Cells::SaveOptions> options);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpTable();
		public:
			virtual ~ExpTable();
	};

}

}

}
