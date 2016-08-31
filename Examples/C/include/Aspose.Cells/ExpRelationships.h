#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
//#include "System/String.h"
//#include "System/Int32Helper.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_EXPRELATIONSHIPS() 

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
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpRelationships : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void WritePkgRels(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			static void WriteXlsbPkgRels(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> wbookInfo , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			static void WriteRelations(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> relList);
			static void WriteRelations(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relList);
			static void WriteOneRelationship(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> rel);
			 ExpRelationships();
		public:
			virtual ~ExpRelationships();
	};

}

}

}
