#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/UInt32.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Byte.h"
#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/Hashtable.h"
#define STATIC_EXPSHAREDSTRINGS() 

namespace Aspose {
namespace Cells {
class RefString;
class RichText;
class PhoneticSettings;
class Workbook;
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
class ExpStyles;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpSharedStrings : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _dataExpWhole;
			intrusive_ptr<Aspose::Cells::OpenXML::ExpStyles> _expStyles;
	public:

			 ExpSharedStrings(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> dataExpWhole , intrusive_ptr<Aspose::Cells::OpenXML::ExpStyles> expStyles);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			static void WritePhonetic(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::PhoneticSettings> settings , intrusive_ptr<Aspose::Cells::OpenXML::ExpStyles> _expStyles);
			static void WriteRefString(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::RefString> refstr);
			static void WriteT(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> str);
			static void WriteRichText(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::RichText> rtext , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 ExpSharedStrings();
		public:
			virtual ~ExpSharedStrings();
	};

}

}

}
