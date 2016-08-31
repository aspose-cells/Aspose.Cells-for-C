#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"
#include "AnyXmlTextHandling.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#define STATIC_ANYXMLREADER() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class AnyXmlReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void Init();
			bool IsEmptyElement();
			intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> mReader;
	public:

			 AnyXmlReader(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			bool ReadChild(intrusive_ptr<Aspose::Cells::System::String> parentElement);
			bool ReadChildWithTextValues(intrusive_ptr<Aspose::Cells::System::String> parentElement , Aspose::Cells::Xml::AnyXmlTextHandling textHandling);
			void IgnoreElement();
			bool IsEndElement(intrusive_ptr<Aspose::Cells::System::String> elemName);
			intrusive_ptr<Aspose::Cells::System::String> ReadAttribute(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> defaultValue);
			Aspose::Cells::System::Int32 ReadIntAttribute(intrusive_ptr<Aspose::Cells::System::String> localName , Aspose::Cells::System::Int32 defaultValue);
			Aspose::Cells::System::Double ReadDoubleAttribute(intrusive_ptr<Aspose::Cells::System::String> localName , Aspose::Cells::System::Double defaultValue);
			bool MoveToElement();
			bool MoveToNextAttribute();
			intrusive_ptr<Aspose::Cells::System::String> ReadString();
			intrusive_ptr<Aspose::Cells::System::String> ReadOuterXml();
			intrusive_ptr<Aspose::Cells::System::String> GetPrefix();
			intrusive_ptr<Aspose::Cells::System::String> GetLocalName();
			intrusive_ptr<Aspose::Cells::System::String> GetValue();
			 AnyXmlReader();
		public:
			virtual ~AnyXmlReader();
	};

}

}

}
