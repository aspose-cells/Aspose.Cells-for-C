#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/UInt16.h"
//#include "System/Boxing.h"
//#include "System/Collections/Hashtable.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Type.h"
//#include "System/TypeCode.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTCACHERECORDS() 

namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
class SxFDB;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCacheRecords : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _C8;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> Flags;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> ShortItemsFlags;
			Aspose::Cells::Pivot::PivotCache* cache;
			 PivotCacheRecords(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			 PivotCacheRecords(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , Aspose::Cells::System::Int32 rows , Aspose::Cells::System::Int32 columns);
			void Init(Aspose::Cells::System::Int32 recordCount , Aspose::Cells::System::Int32 _numberOfBaseFields);
			void GatherUniqueItems(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> sxFDB);
			Aspose::Cells::System::Int32 GetCountOfC8();
			void Write(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotCacheRecords> records);
			 PivotCacheRecords();
		public:
			virtual ~PivotCacheRecords();
	};

}

}

}
