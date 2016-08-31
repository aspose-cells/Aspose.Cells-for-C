#pragma once
#include "System/Byte.h"
#include "AbstractCellsDataCollection.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "RawCellValueType.h"
#include "System/Int32.h"
#define STATIC_ABSTRACTROW() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class RowProperties;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class AbstractRow : public Aspose::Cells::CellsSs::AbstractCellsDataCollection
	{
	private:

			void Init_Vars();
	public:

			 virtual bool HasPooledString();
			 virtual bool HasPooledFormula();
			 virtual bool HasCellDataObject();
			 virtual Aspose::Cells::System::Int32 Sync();
			 virtual void SyncData();
			 virtual void SyncData(Aspose::Cells::System::Int32 rowDataPos);
			 virtual Aspose::Cells::System::Int32 InsertCell(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::CellData*>> cellsdata , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> ToRowProperties(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateRowProperties(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual Aspose::Cells::System::Int32 GetXfIndexByPosition(Aspose::Cells::System::Int32 position);
			 virtual void UpdateXfIndexByPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 xf);
			 virtual Aspose::Cells::CellsSs::RawCellValueType GetTypeByPosition(Aspose::Cells::System::Int32 position);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValueByPosition(Aspose::Cells::System::Int32 position);
			 virtual void UpdateValueByPosition(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual Aspose::Cells::System::Int32 GetValueIndexByPosition(Aspose::Cells::System::Int32 position);
			 virtual void UpdateValueIndexByPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 indexValue);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> ValueToCellData(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> ToCellData(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateCellData(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 fields);
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetRowXfIndex();
			 virtual void SetRowXfIndex(Aspose::Cells::System::Int32 value);
			 virtual Aspose::Cells::System::Byte GetRowOption(Aspose::Cells::System::Int32 optionIndex);
			 virtual void SetRowOption(Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte option);
			 virtual Aspose::Cells::System::Int32 GetRowRawHeight();
			 virtual void SetRowRawHeight(Aspose::Cells::System::Int32 value);
			 virtual bool TrimSequentially(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetCacheData();
			 virtual bool GetMultiThreadReading();
			 virtual void SetMultiThreadReading(bool value);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 srcPosition , Aspose::Cells::System::Int32 count , bool clone);
			 virtual Aspose::Cells::System::Int32 CopyCells(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> source , bool clone);
			 AbstractRow();
		public:
			virtual ~AbstractRow();
	};

}

}

}
