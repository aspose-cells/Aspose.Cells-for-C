#pragma once
//#include "System/Int16.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/String.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Boolean.h"
//#include "System/DateTime.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_EXPPIVOTCACHERECORDS() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpPivotCacheRecords : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> _cache;
	public:

			 ExpPivotCacheRecords(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpPivotCacheRecords();
		public:
			virtual ~ExpPivotCacheRecords();
	};

}

}

}
