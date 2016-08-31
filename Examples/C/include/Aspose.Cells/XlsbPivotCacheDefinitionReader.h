#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/UInt32.h"
#include "System/DateTime.h"
//#include "System/Double.h"
//#include "System/IO/MemoryStream.h"
//#include "System/BitConverter.h"
#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Array2D.h"
//#include "System/UInt16.h"
#include "System/Byte.h"
#include "System/String.h"
#include "OpenXMLUtil.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#define STATIC_XLSBPIVOTCACHEDEFINITIONREADER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCalculatedItem;
class PivotCache;
class ConsolidationPivotCacheDataSource;
class PivotCacheCollection;
class SxFDB;
class SxName;
class ConsolidationRangeSet;
class SxRng;
class SxRule;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbReader;
class XlsbBinaryReader;
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
namespace OpenXLSB {
	class XlsbPivotCacheDefinitionReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache;
			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> DataCache;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCacheCollection> caches;
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::Int32 length;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap;
			void ReadExt();
			void ReadPivotCacheDefinition();
			void ReadCacheSource();
			void ReadConsolidationSource();
			void ReadRangeSets(intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> dataSource , Aspose::Cells::System::Int32 pageCount);
			void ReadOneRangeSet(intrusive_ptr<Aspose::Cells::Pivot::ConsolidationRangeSet> rangeSet);
			void ReadPages(intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> dataSource);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> ReadPage(Aspose::Cells::System::Int32 index);
			void ReadWorksheetSource();
			void ReadCacheField();
			void ReadPName(intrusive_ptr<Aspose::Cells::Pivot::SxName> name);
			void ReadFieldGroup(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			void ReadRangePr(intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			void ReadDiscretePr(intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			void ReadGroupItems(intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			void ReadSharedItems(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			void ReadCalculatedItem();
			void ReadCalItemPNames(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
			void ReadPivotRules(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTime(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
	public:

			intrusive_ptr<Aspose::Cells::System::String> rid;
			bool IsNotSupported;
			 XlsbPivotCacheDefinitionReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> reader , intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataCache , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap);
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> GetCache();
			void SetCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> value);
			void Read(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader);
			Aspose::Cells::System::Int32 RecordCount;
			 XlsbPivotCacheDefinitionReader();
		public:
			virtual ~XlsbPivotCacheDefinitionReader();
	};

}

}

}
