#pragma once
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/Char.h"
#include "System/DateTime.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_ANYXMLBUILDER() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class AnyXmlBuilder : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static bool HasInvalidChars(intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsValidXmlChar(Aspose::Cells::System::Char c);
			intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> mXmlWriter;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> mXmlCharsFilter;
	public:

			 AnyXmlBuilder(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::System::Text::Encoding> encoding , bool isPrettyFormat);
			 AnyXmlBuilder(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , bool isPrettyFormat);
			intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> GetXmlWriter();
			void StartDocument(intrusive_ptr<Aspose::Cells::System::String> rootElementName);
			void EndDocument();
			void StartElement(intrusive_ptr<Aspose::Cells::System::String> elementName);
			void EndElement();
			void EndElement(intrusive_ptr<Aspose::Cells::System::String> elementName);
			void FullEndElement();
			void FullEndElement(intrusive_ptr<Aspose::Cells::System::String> elementName);
			void WriteRaw(intrusive_ptr<Aspose::Cells::System::String> text);
			void WriteElement(intrusive_ptr<Aspose::Cells::System::String> elementName , intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteOptionalElement(intrusive_ptr<Aspose::Cells::System::String> elementName , intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteOptionalElement(intrusive_ptr<Aspose::Cells::System::String> elementName , intrusive_ptr<Aspose::Cells::System::DateTime> value);
			void WriteElement(intrusive_ptr<Aspose::Cells::System::String> elementName , Aspose::Cells::System::Int32 value);
			void WriteString(intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteAttributeString(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> FilterInvalidXmlChars(intrusive_ptr<Aspose::Cells::System::String> text);
			 AnyXmlBuilder();
		public:
			virtual ~AnyXmlBuilder();
	};

}

}

}
