#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/Int64.h"
//#include "System/Decimal.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Int16.h"
//#include "System/Boolean.h"
#include "System/Array1D.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/Array2D.h"
#include "Constants.h"
//#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/DateTime.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_EXPPIVOTCACHEDEFINITION() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class DataExpDcon;
class SxFDB;
class PivotCache;
class SxFilt;
class ConsolidationRangeSet;
class PivotCalculatedItem;
class SxRng;
}
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
class DataPivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpPivotCacheDefinition : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> _cache;
			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> _dataCache;
			bool HasExt();
			void WriteExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteCalculatedItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOneCalculatedItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
			void WriteOneFilt(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::SxFilt> filt);
			void WriteCacheFields(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOneSharedItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Object> obj);
			void WriteOneGroupItem(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Object> obj);
			void WriteOneCacheField(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			void WriteFieldGroup(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			void WriteGroupItems(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			void WriteCacheSource(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteConsolidation(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePages(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::String*>> pageItems);
			void WritePage(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> page);
			void WriteRangeSets(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Pivot::ConsolidationRangeSet*>> rangeSets);
			void WriteRangeSet(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeset , intrusive_ptr<Aspose::Cells::Pivot::DataExpDcon> dcon);
			void WriteWorksheetSource(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePivotCacheDefinitionAttr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
	public:

			 ExpPivotCacheDefinition(intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dCache);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpPivotCacheDefinition();
		public:
			virtual ~ExpPivotCacheDefinition();
	};

}

}

}
