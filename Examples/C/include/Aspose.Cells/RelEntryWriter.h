#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
#include "AbstractEntryWriter.h"
//#include "System/String.h"
#define STATIC_RELENTRYWRITER() 

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
class DataRelationship;
class ZipOutputStream;
class RelHashMap;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class RelEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::RelHashMap> map;
	public:

			 RelEntryWriter(intrusive_ptr<Aspose::Cells::OpenXML::RelHashMap> map);
			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			static void WriteOneRelationship(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> rel);
			 RelEntryWriter();
		public:
			virtual ~RelEntryWriter();
	};

}

}

}
