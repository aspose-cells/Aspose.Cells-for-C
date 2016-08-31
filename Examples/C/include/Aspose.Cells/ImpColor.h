#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Double.h"
//#include "System/Drawing/Color.h"
//#include "System/Int32.h"
//#include "System/Exception.h"
#define STATIC_IMPCOLOR() 

namespace Aspose {
namespace Cells {
class InternalColor;
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
	class ImpColor : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static void ReadColorSubElements(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::InternalColor> c);
			static intrusive_ptr<Aspose::Cells::System::String> ReadAttrValAndSkip(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			static intrusive_ptr<Aspose::Cells::InternalColor> ReadColor(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpColor();
		public:
			virtual ~ImpColor();
	};

}

}

}
