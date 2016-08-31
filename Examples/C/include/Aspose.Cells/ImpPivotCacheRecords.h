#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Convert.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
//#include "System/DateTime.h"
//#include "System/ApplicationException.h"
#include "System/Int32.h"
//#include "System/Exception.h"
#include "System/Array1D.h"
#define STATIC_IMPPIVOTCACHERECORDS() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
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
	class ImpPivotCacheRecords : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> _cache;
			void ReadValue(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			 ImpPivotCacheRecords(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			Aspose::Cells::System::Int32 NumberOfBaseFields;
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , Aspose::Cells::System::Int32 recordCount);
			 ImpPivotCacheRecords();
		public:
			virtual ~ImpPivotCacheRecords();
	};

}

}

}
