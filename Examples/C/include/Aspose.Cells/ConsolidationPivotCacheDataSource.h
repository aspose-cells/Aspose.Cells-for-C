#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Int32Helper.h"
#include "PivotCacheDataSource.h"
//#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Object.h"
#include "System/Array2D.h"
#include "PivotTableSourceType.h"
#include "System/Int32.h"
//#include "System/ArgumentException.h"
#include "System/Array1D.h"
#define STATIC_CONSOLIDATIONPIVOTCACHEDATASOURCE() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class ConsolidationRangeSet;
class PivotPageFields;
class PivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class ConsolidationPivotCacheDataSource : public Aspose::Cells::Pivot::PivotCacheDataSource
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
			 virtual Aspose::Cells::Pivot::PivotTableSourceType GetType();
			bool _autoPage;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Pivot::ConsolidationRangeSet*>> RangeSets;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::String*>> PageItems;
			Aspose::Cells::Pivot::PivotCache* _u_pivotCache;
			 ConsolidationPivotCacheDataSource(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache);
			 ConsolidationPivotCacheDataSource(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , intrusive_ptr<Aspose::Cells::Pivot::PivotPageFields> pageFields , bool autoPage);
			void InitCusotmPageItems(intrusive_ptr<Aspose::Cells::Pivot::PivotPageFields> pageFields);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSourceData();
			 virtual void SetSourceData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 ConsolidationPivotCacheDataSource();
		public:
			virtual ~ConsolidationPivotCacheDataSource();
	};

}

}

}
