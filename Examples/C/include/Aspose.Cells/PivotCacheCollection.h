#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/GC.h"
#include "System/UInt32.h"
#include "PivotCache.h"
#include "PivotTableSourceType.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTCACHECOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class WorksheetCollection;
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotPageFields;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCacheCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			void Dispose();
			Aspose::Cells::WorksheetCollection* _worksheets;
			Aspose::Cells::System::Int32 _maxCacheId;
			 PivotCacheCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void DoAfterReading();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> GetByX14PivotCacheId(Aspose::Cells::System::UInt32 pivotCacheId);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool useSameSource);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::Pivot::PivotTableSourceType sourceType , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , bool isAutoPage , intrusive_ptr<Aspose::Cells::Pivot::PivotPageFields> pageFields);
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetPivotCache(Aspose::Cells::Pivot::PivotTableSourceType sourceType , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData);
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> AddCopy(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> source , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void InsertRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void InsertColumns(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void AddRead(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> GetByCacheId(Aspose::Cells::System::Int32 cacheId);
			void Remove(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			void Remove(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			 PivotCacheCollection();
		public:
			virtual ~PivotCacheCollection();
	};

}

}

}
