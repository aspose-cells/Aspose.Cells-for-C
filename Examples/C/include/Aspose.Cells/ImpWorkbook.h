#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Text/StringBuilder.h"
#include "ExtUriUtil.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/Guid.h"
//#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/UInt32.h"
//#include "System/Exception.h"
//#include "System/Convert.h"
#include "System/Object.h"
//#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/StringHelperPal.h"
//#include "System/Globalization/NumberStyles.h"
#define STATIC_IMPWORKBOOK() 

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
class DataImpWhole;
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpWorkbook : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			Aspose::Cells::System::Int32 _activeTab;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile;
			void ReadExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExtPart(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::String> uri);
			void ReadSlicerCaches(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::String> uri);
			void ReadFileRecoveryPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCustomWorkbookViews(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSmartTagPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSmartTagTypes(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCalcPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadWorkbookProtection(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadFileSharing(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadFileVersion(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExternalRefs(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExternalRefs_keep(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotCaches(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::String> uri);
			void ReadWorkbookPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadBookViews(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSheets(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::System::String> ProcessPrintArea(intrusive_ptr<Aspose::Cells::System::String> refersTo);
			void ReadNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void AddKeepName(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::String> refTo , Aspose::Cells::System::Int32 localSheetId , intrusive_ptr<Aspose::Cells::System::String> publishToServer , intrusive_ptr<Aspose::Cells::System::String> workbookParameter);
			Aspose::Cells::System::Int32 CheckPrintTitleType(intrusive_ptr<Aspose::Cells::System::String> range);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			 ImpWorkbook(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExternalLinkInfo(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpWorkbook();
		public:
			virtual ~ImpWorkbook();
	};

}

}

}
