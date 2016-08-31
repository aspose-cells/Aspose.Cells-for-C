#pragma once
//#include "System/Exception.h"
#include "System/Array2D.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/ApplicationException.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Convert.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/DateTime.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "OpenXMLUtil.h"
#include "System/Int32.h"
#define STATIC_IMPPIVOTCACHEDEFINITION() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class ConsolidationRangeSet;
class SxRule;
class SxFDB;
class PivotCache;
class PivotCalculatedItem;
class SxRng;
}
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
class DataPivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpPivotCacheDefinition : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> _DataCache;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> _cache;
			Aspose::Cells::Workbook* _book;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap;
			void ReadCalculatedItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCalculatedItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadPivotArea(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
			void ReadReferences(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule , intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
			void ReadReference(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule , intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
			void ReadCacheFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCacheField(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadFieldGroup(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			void ReadDiscretePr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			void ReadRangePr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			void ReadGroupItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			void ReadSharedItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			void ReadPivotCacheDefinition(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCacheSource(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadConsolidationSource(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadRangeSets(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , Aspose::Cells::System::Int32 pageCount);
			void ReadPages(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> ReadPage(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOneRangeSet(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Pivot::ConsolidationRangeSet> rangeSet);
			void ReadWorksheetSource(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> GetCache();
			void SetCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> value);
			 ImpPivotCacheDefinition(intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> DataCache , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> rels);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExt(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::System::String> rId;
			Aspose::Cells::System::Int32 RecordCount;
			 ImpPivotCacheDefinition();
		public:
			virtual ~ImpPivotCacheDefinition();
	};

}

}

}
