#pragma once
#include "AbstractRowCollection.h"
#include "System/Object.h"
#include "RawCellValueType.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "AbstractCellsDataListImpl.h"
#include "AbstractRow.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#define STATIC_ROWCOLLECTIONIMPLLIST() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class IStringPool;
class IPositionEnumerator;
class RowProperties;
}
}
}
namespace Aspose {
namespace Cells {
class FormulaPool;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowCollectionImplList : public Aspose::Cells::CellsSs::AbstractRowCollection
	{
	private:


		class RowImplList;

		 friend class RowCollectionImplList::RowImplList;

		class RowsDataImplWithList;

		 friend class RowCollectionImplList::RowsDataImplWithList;

		class RowDataImplWithList;

		 friend class RowCollectionImplList::RowDataImplWithList;

		
	class RowImplList : public Aspose::Cells::CellsSs::AbstractRow
	{
	private:

			void Init_Vars();
			Aspose::Cells::CellsSs::RowCollectionImplList* m_Rows;
			Aspose::Cells::System::Int32 m_RowPos;
	public:

			intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList::RowDataImplWithList> RowData;
			 RowImplList(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList> rows , Aspose::Cells::System::Int32 rowPos , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 capacity);
			 RowImplList(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList> rows , Aspose::Cells::System::Int32 rowPos , intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList::RowDataImplWithList> rowData);
			 virtual Aspose::Cells::System::Int32 GetCount();
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
			 virtual void Clear(Aspose::Cells::System::Int32 initCapacity);
			 virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandSize);
			 virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position);
			 virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual Aspose::Cells::System::Int32 InsertCell(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::CellData*>> cellsdata , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 srcPosition , Aspose::Cells::System::Int32 count , bool clone);
			 virtual Aspose::Cells::System::Int32 CopyCells(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> source , bool clone);
			Aspose::Cells::System::Int32 CopyCells(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList::RowImplList> impl , bool clone);
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
			 virtual Aspose::Cells::System::Int32 Sync();
			 virtual void SyncData(Aspose::Cells::System::Int32 rowDataPos);
			 virtual void SyncData();
			 RowImplList();
		public:
			virtual ~RowImplList();
	};

		
	class RowsDataImplWithList : public Aspose::Cells::CellsSs::AbstractCellsDataListImpl
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetListBuffer();
			 virtual void SetListBuffer(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> value);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> CreateBuffer(Aspose::Cells::System::Int32 capacity);
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowCollectionImplList::RowDataImplWithList*>> RowsData;
			 RowsDataImplWithList(Aspose::Cells::System::Int32 capacity);
			 virtual Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			 RowsDataImplWithList();
		public:
			virtual ~RowsDataImplWithList();
	};

		
	class RowDataImplWithList : public Aspose::Cells::CellsSs::AbstractCellsDataListImpl
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetListBuffer();
			 virtual void SetListBuffer(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> value);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> CreateBuffer(Aspose::Cells::System::Int32 capacity);
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> _RowProperties;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::CellData*>> CellsData;
			 RowDataImplWithList(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> props , Aspose::Cells::System::Int32 capacity);
			 virtual Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			 RowDataImplWithList();
		public:
			virtual ~RowDataImplWithList();
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 InitCellCapacity;
			intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList::RowsDataImplWithList> m_RowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList::RowDataImplWithList> BuildRowData(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool clone);
	public:

			Aspose::Cells::CellsSs::IStringPool* StringPool;
			Aspose::Cells::FormulaPool* FormulaPool;
			 RowCollectionImplList(Aspose::Cells::System::Int32 initRowCapacity , Aspose::Cells::System::Int32 initCellCapacity , intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> stringPool , intrusive_ptr<Aspose::Cells::FormulaPool> formulaPool);
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
			 virtual void Clear(Aspose::Cells::System::Int32 initCapacity);
			 virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandSize);
			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position);
			 virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual void ResetExpand(Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 expandCellCount);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowProperties*>> rowsProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool clone);
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
			 virtual bool GetCachePreferred();
			 RowCollectionImplList();
		public:
			virtual ~RowCollectionImplList();
	};

}

}

}
