#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "AbstractEntryWriter.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_PIVOTCACHEENTRYWRITER() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataPivotCache;
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class PivotCacheEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataPivotCache;
	public:

			 PivotCacheEntryWriter(intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataPivotCache);
			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			 PivotCacheEntryWriter();
		public:
			virtual ~PivotCacheEntryWriter();
	};

}

}

}
