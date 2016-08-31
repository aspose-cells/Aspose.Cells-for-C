#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "AbstractRowCollection.h"
#include "System/Int32.h"
#include "LightRowData.h"
#define STATIC_LIGHTROWSDATA() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
class AbstractRow;
class RowProperties;
}
}
}

namespace Aspose {
namespace Cells {
	class LightRowsData : public Aspose::Cells::CellsSs::AbstractRowCollection
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::LightRowData> m_RowData;
	public:

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
			 virtual void ResetExpand(Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 expandCellCount);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowProperties*>> rowsProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> row , bool clone);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rows , Aspose::Cells::System::Int32 srcPosition , Aspose::Cells::System::Int32 count , bool clone);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowByPosition(Aspose::Cells::System::Int32 position);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowByCachedData(intrusive_ptr<Aspose::Cells::System::Object> cacheData);
			 virtual void TrimAll(Aspose::Cells::System::Int32 rowLimit , Aspose::Cells::System::Int32 rowExpand , Aspose::Cells::System::Int32 cellLimit , Aspose::Cells::System::Int32 cellExpand);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> ToRowProperties(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateRowProperties(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual Aspose::Cells::System::Int32 GetRowXfIndex(Aspose::Cells::System::Int32 position);
			 virtual void SetRowXfIndex(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 xfIndex);
			 virtual Aspose::Cells::System::Byte GetRowOption(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 optionIndex);
			 virtual void SetRowOption(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte optValue);
			 virtual Aspose::Cells::System::Int32 GetRowRawHeight(Aspose::Cells::System::Int32 position);
			 virtual void SetRowRawHeight(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 rawHeight);
			 LightRowsData();
		public:
			virtual ~LightRowsData();
	};

}

}
