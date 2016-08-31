#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/String.h"
#include "System/IO/MemoryStream.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Int32.h"
#define STATIC_XLSBPIVOTCACHEDEFINITIONWRITER() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class ConsolidationPivotCacheDataSource;
class SxFDB;
class PivotCache;
class SxRng;
class SxRule;
class SxName;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
class DataPivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbPivotCacheDefinitionWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataCache;
	public:

			 XlsbPivotCacheDefinitionWriter(intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataCache);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			void Write();
			void WriteCacheDefExt(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteCacheFields(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteFieldGroup(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteGroupItems(intrusive_ptr<Aspose::Cells::Pivot::SxRng> range , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteSharedItems(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WritePName(intrusive_ptr<Aspose::Cells::Pivot::SxName> name , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteCalItems(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WritePivotArea(intrusive_ptr<Aspose::Cells::Pivot::SxRule> rule , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteCacheSource(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteListDataBase(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteConsolidation(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WritePages(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream , intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> s);
			void WriteRangeSets(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream , intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> s);
			bool IsSameDataType(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dataItems);
			 XlsbPivotCacheDefinitionWriter();
		public:
			virtual ~XlsbPivotCacheDefinitionWriter();
	};

}

}

}
