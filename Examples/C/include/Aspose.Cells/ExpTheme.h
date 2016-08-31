#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/Collections/ArrayList.h"
//#include "System/IO/Stream.h"
//#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_EXPTHEME() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
class XmlDocument;
class XmlElement;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataColorScheme;
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpTheme : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool HasKeepThemeData();
			intrusive_ptr<Aspose::Cells::System::String> GetThemeString();
			void UpdateClrScheme();
			void AddClrSchemeData(intrusive_ptr<Aspose::Cells::Xml::XmlElement> elem);
			void WriteOneDataSchemeColor(intrusive_ptr<Aspose::Cells::Xml::XmlElement> elem , intrusive_ptr<Aspose::Cells::OpenXML::DataColorScheme> clr);
			void AddAttribute(intrusive_ptr<Aspose::Cells::Xml::XmlElement> elm , intrusive_ptr<Aspose::Cells::System::String> attrName , intrusive_ptr<Aspose::Cells::System::String> value);
			void AddAttribute(intrusive_ptr<Aspose::Cells::Xml::XmlElement> elm , intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> attrName , intrusive_ptr<Aspose::Cells::System::String> nsURI , intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Xml::XmlElement> AddElement(intrusive_ptr<Aspose::Cells::Xml::XmlElement> parentElm , intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> elmName , intrusive_ptr<Aspose::Cells::System::String> nsURI);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::Xml::XmlDocument> _doc;
			intrusive_ptr<Aspose::Cells::System::String> NS_a;
			 ExpTheme(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			 ExpTheme(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpTheme();
		public:
			virtual ~ExpTheme();
	};

}

}

}
