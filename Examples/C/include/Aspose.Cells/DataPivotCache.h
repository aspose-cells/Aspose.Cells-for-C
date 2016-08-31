#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_DATAPIVOTCACHE() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
class DataExpDcon;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class RelHashMap;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataPivotCache : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> ImpEntryName;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> _cache;
			intrusive_ptr<Aspose::Cells::System::String> DefRelIdInWorkbook;
			intrusive_ptr<Aspose::Cells::System::String> RecordRelId;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Pivot::DataExpDcon*>> _DataExpDcons;
			 DataPivotCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			intrusive_ptr<Aspose::Cells::OpenXML::RelHashMap> Init(bool isXml);
			 DataPivotCache();
		public:
			virtual ~DataPivotCache();
	};

}

}

}
