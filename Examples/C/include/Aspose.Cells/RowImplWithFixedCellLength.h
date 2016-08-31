#pragma once
//#include "System/Boxing.h"
//#include "System/Int16.h"
#include "RawCellValueType.h"
//#include "System/Math.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "AbstractRow.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_ROWIMPLWITHFIXEDCELLLENGTH() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class RowCollectionImplBin2DFixedCellLength;
class IPositionEnumerator;
class CellData;
class RowProperties;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowImplWithFixedCellLength : public Aspose::Cells::CellsSs::AbstractRow
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 ROW_HEADER_SIZE;
			 static const Aspose::Cells::System::Int32 ROW_XF_OFFSET;
			 static const Aspose::Cells::System::Int32 ROW_HEIGHT_OFFSET;
			 static const Aspose::Cells::System::Int32 ROW_OPTION_OFFSET;
			 static const Aspose::Cells::System::Int32 ROW_SIZE_OFFSET;
			 static const Aspose::Cells::System::Int32 CELL_XF_OFFSET;
			 static const Aspose::Cells::System::Int32 CELL_TYPE_OFFSET;
			 static const Aspose::Cells::System::Int32 CELL_VALUE_OFFSET;
			 static const Aspose::Cells::System::Int32 CELL_SIZE_HALF;
			intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplBin2DFixedCellLength> m_Rows;
			Aspose::Cells::System::Int32 m_RowIndex;
			Aspose::Cells::System::Int32 m_RowPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_Data;
			Aspose::Cells::System::Int32 m_LastPos;
			bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount , bool sequential);
			void ExpandCell(Aspose::Cells::System::Int32 position);
			void ExpandData(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
	public:

			 static const Aspose::Cells::System::Int32 CELL_SIZE;
			 RowImplWithFixedCellLength(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplBin2DFixedCellLength> rows , Aspose::Cells::System::Int32 rowPos);
			 RowImplWithFixedCellLength(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplBin2DFixedCellLength> rows , Aspose::Cells::System::Int32 rowPos , Aspose::Cells::System::Int32 rowIndex);
			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual void SyncData(Aspose::Cells::System::Int32 rowDataPos);
			 virtual void SyncData();
			 virtual Aspose::Cells::System::Int32 Sync();
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 column);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 rawPos);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos);
			 virtual Aspose::Cells::System::Int32 SyncPosition(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 position);
			 virtual Aspose::Cells::System::Int32 GetAdjacentPosition(Aspose::Cells::System::Int32 position , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumerator();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition , bool reversed);
			 virtual Aspose::Cells::System::Int32 GetSequencePosition(Aspose::Cells::System::Int32 index);
			 virtual Aspose::Cells::System::Int32 GetPositionSequence(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetCapacity();
			 virtual void EnsureCapacity(Aspose::Cells::System::Int32 cellCount);
			 virtual void Remove(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 RemoveBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual Aspose::Cells::System::Int32 GetCountBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual void Clear(Aspose::Cells::System::Int32 initCellCapacity);
			 virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount);
			 virtual bool TrimSequentially(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetCacheData();
			 virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual Aspose::Cells::System::Int32 InsertCell(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::CellData*>> cellsdata , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 srcPosition , Aspose::Cells::System::Int32 count , bool clone);
			 virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position);
			 virtual Aspose::Cells::System::Int32 GetXfIndexByPosition(Aspose::Cells::System::Int32 position);
			 virtual void UpdateXfIndexByPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 xf);
			 virtual Aspose::Cells::CellsSs::RawCellValueType GetTypeByPosition(Aspose::Cells::System::Int32 position);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValueByPosition(Aspose::Cells::System::Int32 position);
			 virtual void UpdateValueByPosition(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual Aspose::Cells::System::Int32 GetValueIndexByPosition(Aspose::Cells::System::Int32 position);
			 virtual void UpdateValueIndexByPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 index);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> ValueToCellData(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual bool HasPooledString();
			 virtual bool HasPooledFormula();
			 virtual bool HasCellDataObject();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> ToCellData(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateCellData(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 fields);
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetRowXfIndex();
			 virtual void SetRowXfIndex(Aspose::Cells::System::Int32 value);
			 virtual Aspose::Cells::System::Int32 GetRowRawHeight();
			 virtual void SetRowRawHeight(Aspose::Cells::System::Int32 value);
			 virtual Aspose::Cells::System::Byte GetRowOption(Aspose::Cells::System::Int32 optionIndex);
			 virtual void SetRowOption(Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte option);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> ToRowProperties(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateRowProperties(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetData();
			static Aspose::Cells::System::Int32 GetRowCapacity(Aspose::Cells::System::Int32 cellCount);
			static Aspose::Cells::System::Int32 GetDataSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static void ShiftRowIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> rowData , Aspose::Cells::System::Int32 offset);
			static void InitRowData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> rowData , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps);
			static void ToRowProperties(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> rowData , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			static void UpdateRowProperties(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> rowData , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			static Aspose::Cells::System::Int32 GetRowIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static Aspose::Cells::System::Int32 GetRowXfIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static void SetRowXfIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 xfIndex);
			static Aspose::Cells::System::Int32 GetRowRawHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static void SetRowRawHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 rawHeight);
			static Aspose::Cells::System::Byte GetRowOption(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 optionIndex);
			static void SetRowOption(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte value);
			 RowImplWithFixedCellLength();
		public:
			virtual ~RowImplWithFixedCellLength();
	};

}

}

}
