#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "PivotCacheDataSource.h"
#include "System/String.h"
#include "PivotTableSourceType.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_UNKOWNPIVOTCACHEDATASOURCE() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CopyOptions;
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class UnkownPivotCacheDataSource : public Aspose::Cells::Pivot::PivotCacheDataSource
	{
	private:

			void Init_Vars();
	public:

			 UnkownPivotCacheDataSource(Aspose::Cells::Pivot::PivotTableSourceType type);
			 virtual void Refresh();
			 virtual void DoAfterRead();
			 virtual Aspose::Cells::Pivot::PivotTableSourceType GetType();
			Aspose::Cells::System::Int32 ConnectionId;
			Aspose::Cells::Pivot::PivotTableSourceType _Type;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Rels;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Data;
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSourceData();
			 virtual void SetSourceData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual void InsertColumns(Aspose::Cells::System::Int32 colIndex , Aspose::Cells::System::Int32 totalColumns , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual void InsertRowsInSmart(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotCacheDataSource> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			 UnkownPivotCacheDataSource();
		public:
			virtual ~UnkownPivotCacheDataSource();
	};

}

}

}
