#pragma once
namespace Aspose {
namespace Cells {
namespace Xml {
	enum AnyXmlTextHandling 

	{

			AnyXmlTextHandling_None = 0x0000 ,
			AnyXmlTextHandling_Text = 0x0001 ,
			AnyXmlTextHandling_SignificantWhitespace = 0x0002 ,
			AnyXmlTextHandling_Whitespace = 0x0004 ,
			AnyXmlTextHandling_TextAndSignificant = Aspose::Cells::Xml::AnyXmlTextHandling_SignificantWhitespace|Aspose::Cells::Xml::AnyXmlTextHandling_Text ,
			AnyXmlTextHandling_TextAndSignificantAndIgnorable = Aspose::Cells::Xml::AnyXmlTextHandling_Whitespace|Aspose::Cells::Xml::AnyXmlTextHandling_SignificantWhitespace|Aspose::Cells::Xml::AnyXmlTextHandling_Text ,
	};


}

}

}
