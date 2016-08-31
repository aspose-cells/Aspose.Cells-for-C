#pragma once
//#include "System/UInt16.h"
#include "PivotTableSourceType.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/IO/MemoryStream.h"
//#include "System/BitConverter.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#define STATIC_PIVOTCACHEWRITER() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
class ConsolidationPivotCacheDataSource;
}
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
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
namespace Pivot {
	class PivotCacheWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataCache;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> _cache;
			 PivotCacheWriter(intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataCache);
			Aspose::Cells::System::Int32 GetGlobalRecordSize();
			Aspose::Cells::System::Int32 GetSxTBLRecordSize();
			void WriteGlobal(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteSxDBCur(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms);
			Aspose::Cells::System::Int32 WriteSxTBLToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 WriteSxTBLRecordToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> ds);
			Aspose::Cells::System::Int32 WriteSxTBPGsToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> ds);
			Aspose::Cells::System::Int32 WriteSxTBRGIITMsToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::String*>> pageItems);
			static Aspose::Cells::System::Int32 WriteSxTBRGIITMRecordToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 items);
			static Aspose::Cells::System::Int32 WriteSxIdSTMToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 streamId);
			static Aspose::Cells::System::Int32 WriteSxVsToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::Pivot::PivotTableSourceType dataSourceType);
			 PivotCacheWriter();
		public:
			virtual ~PivotCacheWriter();
	};

}

}

}
