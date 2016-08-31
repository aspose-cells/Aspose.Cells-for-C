#pragma once
#include "XmlnsType.h"
//#include "System/Math.h"
#include "System/Double.h"
//#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/Hashtable.h"
#define STATIC_EXPWORKSHEETEXTLST() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellsColor;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ExpWorksheet;
class DataExpWorksheet;
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
	class ExpWorksheetExtLst : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			Aspose::Cells::Worksheet* _worksheet;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> _expWorksheetData;
			void WriteExtPart(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> uri);
			void WriteSlicers(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , Aspose::Cells::OpenXML::XmlnsType type);
			bool HasExtLstData();
			bool HasValidationsData();
			bool HasConditionalFormattingsData();
			void WriteSparklineGroupCollection(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteColor(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> elmName , intrusive_ptr<Aspose::Cells::CellsColor> color);
			intrusive_ptr<Aspose::Cells::System::String> GetTintString(Aspose::Cells::System::Double tint);
	public:

			 ExpWorksheetExtLst(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> expWorksheetData);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::ExpWorksheet> expWorksheet);
			 ExpWorksheetExtLst();
		public:
			virtual ~ExpWorksheetExtLst();
	};

}

}

}
