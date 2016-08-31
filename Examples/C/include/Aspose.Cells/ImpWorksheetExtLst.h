#pragma once
#include "ExtUriUtil.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_IMPWORKSHEETEXTLST() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellsColor;
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
class ImpWorksheet;
class DataImpWorksheet;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpWorksheetExtLst : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			Aspose::Cells::Worksheet* _worksheet;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> _impWorksheetData;
			void ReadSlicers(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::OpenXML::ImpWorksheet> sheet);
			void ReadX14ConditionalFormatting(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::OpenXML::ImpWorksheet> sheet , bool isX14);
	public:

			 ImpWorksheetExtLst(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData , intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> impWorksheetData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::OpenXML::ImpWorksheet> sheet);
			void ReadExt(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::OpenXML::ImpWorksheet> sheet);
			void ReadSparklineGroups(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSparklineGroup(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::CellsColor> ReadColor(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpWorksheetExtLst();
		public:
			virtual ~ImpWorksheetExtLst();
	};

}

}

}
