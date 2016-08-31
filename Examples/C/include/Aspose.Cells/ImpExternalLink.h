#pragma once
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Double.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_IMPEXTERNALLINK() 

namespace Aspose {
namespace Cells {
class ExternName;
class ExternalSheetDataSet;
class SupbookData;
class ExternalRow;
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
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpExternalLink : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void ReadOleLink(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadOleItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			void ReadDdeLink(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadDdeItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			intrusive_ptr<Aspose::Cells::ExternName> ReadOneDdeOleItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			void ReadExternalBook(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSheetDataSet(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			void ReadSheetData(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			void ReadRow(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> sheetDataSet);
			void ReadCell(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::ExternalRow> row);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadSheetNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadDefinedNames(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _relInfo;
			 ImpExternalLink(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relInfo);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static bool IsPreserve(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpExternalLink();
		public:
			virtual ~ImpExternalLink();
	};

}

}

}
