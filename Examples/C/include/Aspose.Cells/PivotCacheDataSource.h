#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "PivotTableSourceType.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_PIVOTCACHEDATASOURCE() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CopyOptions;
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
namespace Pivot {
	class PivotCacheDataSource : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 virtual void Refresh();
			 virtual void DoAfterRead();
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotCacheDataSource> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			 virtual void InsertRowsInSmart(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual void InsertColumns(Aspose::Cells::System::Int32 colIndex , Aspose::Cells::System::Int32 totalColumns , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSourceData();
			 virtual void SetSourceData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual Aspose::Cells::Pivot::PivotTableSourceType GetType();
			bool IsNotSupported();
			static intrusive_ptr<Aspose::Cells::Pivot::PivotCacheDataSource> Create(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , Aspose::Cells::Pivot::PivotTableSourceType type);
			 PivotCacheDataSource();
		public:
			virtual ~PivotCacheDataSource();
	};

}

}

}
