#pragma once
//#include "System/Collections/IEnumerator.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/Hashtable.h"
#define STATIC_IMPTHEME() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlDocument;
class XmlElement;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataColorScheme;
class DataTheme;
class DataFontScheme;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpTheme : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Xml::XmlDocument> _doc;
			void ParseDoc();
			void ReadFontScheme(intrusive_ptr<Aspose::Cells::Xml::XmlElement> fontScheme);
			intrusive_ptr<Aspose::Cells::OpenXML::DataFontScheme> ReadDataSchemeFont(intrusive_ptr<Aspose::Cells::Xml::XmlElement> elem);
			void ReadClrScheme(intrusive_ptr<Aspose::Cells::Xml::XmlElement> elm);
			intrusive_ptr<Aspose::Cells::OpenXML::DataColorScheme> ReadColorElm(intrusive_ptr<Aspose::Cells::Xml::XmlElement> elm);
	public:

			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataTheme> _dataTheme;
			 ImpTheme(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlDocument> doc , bool kept);
			 ImpTheme();
		public:
			virtual ~ImpTheme();
	};

}

}

}
