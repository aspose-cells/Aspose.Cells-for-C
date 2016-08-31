#pragma once
#include "CellData.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "RawCellValueType.h"
#include "System/Byte.h"
//#include "System/Int16.h"
#include "AbstractRow.h"
#include "System/Int32.h"
#include "RowProperties.h"
#define STATIC_LIGHTROWDATA() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
}
}
}

namespace Aspose {
namespace Cells {
	class LightRowData : public Aspose::Cells::CellsSs::AbstractRow
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_CellData;
	public:

			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> RowProperties;
			void Shift(Aspose::Cells::System::Int32 offset);
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCellData();
			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 rawPos);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos);
			 virtual Aspose::Cells::System::Int32 SyncPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 rawPos);
			 virtual Aspose::Cells::System::Int32 GetSequencePosition(Aspose::Cells::System::Int32 sn);
			 virtual Aspose::Cells::System::Int32 GetPositionSequence(Aspose::Cells::System::Int32 position);
			 virtual Aspose::Cells::System::Int32 GetAdjacentPosition(Aspose::Cells::System::Int32 position , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumerator();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition , bool reversed);
			 virtual Aspose::Cells::System::Int32 GetCapacity();
			 virtual void EnsureCapacity(Aspose::Cells::System::Int32 count);
			 virtual void Remove(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 RemoveBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual Aspose::Cells::System::Int32 GetCountBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual void Clear(Aspose::Cells::System::Int32 initCapacity);
			 virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandSize);
			 virtual void SyncData(Aspose::Cells::System::Int32 rowDataPos);
			 virtual void SyncData();
			 virtual Aspose::Cells::System::Int32 Sync();
			 virtual Aspose::Cells::System::Int32 InsertCell(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::CellData*>> cellsdata , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 srcPosition , Aspose::Cells::System::Int32 count , bool clone);
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
			 virtual bool HasPooledString();
			 virtual bool HasPooledFormula();
			 virtual bool HasCellDataObject();
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetRowXfIndex();
			 virtual void SetRowXfIndex(Aspose::Cells::System::Int32 value);
			 virtual Aspose::Cells::System::Byte GetRowOption(Aspose::Cells::System::Int32 optionIndex);
			 virtual void SetRowOption(Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte option);
			 virtual Aspose::Cells::System::Int32 GetRowRawHeight();
			 virtual void SetRowRawHeight(Aspose::Cells::System::Int32 value);
			 virtual bool TrimSequentially(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> ToRowProperties(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateRowProperties(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetCacheData();
			 LightRowData();
		public:
			virtual ~LightRowData();
	};

}

}
