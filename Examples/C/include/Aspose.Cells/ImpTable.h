#pragma once
//#include "System/ApplicationException.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_IMPTABLE() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListColumn;
class ListObject;
}
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
namespace OpenXML {
class DataImpWorksheet;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> _impWorksheetData;
			intrusive_ptr<Aspose::Cells::Worksheet> _worksheet;
			intrusive_ptr<Aspose::Cells::Tables::ListObject> _table;
			void ReadTableAttr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadTableStyleInfo(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadTableColumns(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadColumnAttr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Tables::ListColumn> col);
			void ReadTableColumn(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , Aspose::Cells::System::Int32 idx);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetTable();
			void SetTable(intrusive_ptr<Aspose::Cells::Tables::ListObject> value);
			 ImpTable(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> impWorksheetData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpTable();
		public:
			virtual ~ImpTable();
	};

}

}

}
