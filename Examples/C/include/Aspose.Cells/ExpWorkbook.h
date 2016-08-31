#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Guid.h"
//#include "System/StringHelperPal.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Convert.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
//#include "System/Byte.h"
//#include "System/Double.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_EXPWORKBOOK() 

namespace Aspose {
namespace Cells {
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
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpWorkbook : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
			void WriteFileRecoveryPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteRootAttr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteFileSharing(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteSmartTagPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteSmartTagTypes(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			bool HasExtLst();
			void WriteSlicerCachesExtList(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> xmlns);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExtMap;
			void WriteExtList(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteExtPart(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> uri);
			void WriteCustomWorkbookViews(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteCalcPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOleSize(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteSheets(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteBookViews(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOnePivotCaches(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , Aspose::Cells::System::Int32 cacheId , intrusive_ptr<Aspose::Cells::System::String> rid);
			void WritePivotChaches(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> xmlns);
			void WriteFileVersion(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteWorkbookProtection(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteWorkbookPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteExternalRefs(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteExternalRefs_keep(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteKeepNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOneName(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 localSheetId , intrusive_ptr<Aspose::Cells::System::String> area , bool isHidden , intrusive_ptr<Aspose::Cells::System::String> publishToServerString , intrusive_ptr<Aspose::Cells::System::String> workbookParameterString , intrusive_ptr<Aspose::Cells::System::String> comment);
	public:

			 ExpWorkbook(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpWorkbook();
		public:
			virtual ~ExpWorkbook();
	};

}

}

}
