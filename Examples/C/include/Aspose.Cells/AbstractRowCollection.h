#pragma once
#include "System/Byte.h"
#include "AbstractCellsDataCollection.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "CellsAccessorType.h"
#include "System/Int32.h"
#define STATIC_ABSTRACTROWCOLLECTION() 

namespace Aspose {
namespace Cells {
class Cells;
class RowCollection;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
class ICellsAccessor;
class RowProperties;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class AbstractRowCollection : public Aspose::Cells::CellsSs::AbstractCellsDataCollection
	{
	private:

			void Init_Vars();
	public:

			 virtual void ResetExpand(Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 expandCellCount);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowProperties*>> rowProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowByPosition(Aspose::Cells::System::Int32 position);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowByCachedData(intrusive_ptr<Aspose::Cells::System::Object> cacheData);
			 virtual void TrimAll(Aspose::Cells::System::Int32 rowLimit , Aspose::Cells::System::Int32 rowExpand , Aspose::Cells::System::Int32 cellLimit , Aspose::Cells::System::Int32 cellExpand);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> ToRowProperties(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateRowProperties(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual Aspose::Cells::System::Byte GetRowOption(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 optionIndex);
			 virtual void SetRowOption(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte value);
			 virtual Aspose::Cells::System::Int32 GetRowRawHeight(Aspose::Cells::System::Int32 position);
			 virtual void SetRowRawHeight(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 rawHeight);
			 virtual Aspose::Cells::System::Int32 GetRowXfIndex(Aspose::Cells::System::Int32 position);
			 virtual void SetRowXfIndex(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 xf);
			 virtual bool GetMultiThreadReading();
			 virtual void SetMultiThreadReading(bool value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::AbstractRow*>> GetRowsBetweenId(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool clone);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rows , Aspose::Cells::System::Int32 srcPosition , Aspose::Cells::System::Int32 count , bool clone);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::ICellsAccessor> GetCellsAccessor(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows , Aspose::Cells::CellsSs::CellsAccessorType type);
			 virtual bool GetCachePreferred();
			 AbstractRowCollection();
		public:
			virtual ~AbstractRowCollection();
	};

}

}

}
