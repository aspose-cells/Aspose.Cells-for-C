#pragma once
//#include "System/Int64.h"
//#include "System/Boxing.h"
#include "CellData.h"
//#include "System/Int16.h"
#include "RawCellValueType.h"
//#include "System/Math.h"
//#include "System/BitConverter.h"
#include "System/Double.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "RowProperties.h"
#include "System/Byte.h"
#include "AbstractRow.h"
//#include "System/String.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_ROWIMPLWITHVARCELLLENGTH() 

namespace Aspose {
namespace Cells {
class FormulaPool;
}
}
namespace Aspose {
namespace Cells {
namespace Collections {
class IntArrayList;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IStringPool;
class IPositionEnumerator;
class RowCollectionImplBin;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowImplWithVarCellLength : public Aspose::Cells::CellsSs::AbstractRow
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_NULL;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_DOUBLE;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_RK;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_STRING_1;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_STRING_2;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_STRING_3;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_STRING_4;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_STRING_PH_1;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_STRING_PH_2;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_STRING_PH_3;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_STRING_PH_4;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_FORMULA_1;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_FORMULA_2;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_FORMULA_3;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_FORMULA_4;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_INT_POSITIVE_1;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_INT_POSITIVE_2;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_INT_NEGATIVE_1;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_INT_NEGATIVE_2;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_BOOL_TRUE;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_BOOL_FALSE;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_DIV;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_NULL;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_VALUE;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_REF;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_NAME;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_NUM;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_NA;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_RECURSIVE;
			 static const Aspose::Cells::System::Int32 VALUE_TYPE_ERROR_INVALID;
			 static const Aspose::Cells::System::Int32 MASK_VALUE_TYPE;
			 static const Aspose::Cells::System::Int32 MASK_CELL_XF;
			 static const Aspose::Cells::System::Int32 MASK_CELL_INDEX;
			 static const Aspose::Cells::System::Int32 CLEAR_VALUE_TYPE;
			 static const Aspose::Cells::System::Int32 CLEAR_CELL_XF;
			 static const Aspose::Cells::System::Int32 CLEAR_CELL_INDEX;
			 static const Aspose::Cells::System::Int32 CELL_MIN_SIZE;
			 static const Aspose::Cells::System::Int32 CELL_RAW_SIZE;
			 static const Aspose::Cells::System::Int32 CELL_MAX_SIZE;
			 static const Aspose::Cells::System::Int32 ROW_OPTION_OFFSET;
			 static const Aspose::Cells::System::Int32 ROW_SYN_OFFSET;
			 static const Aspose::Cells::System::Int32 ROW_DATASIZE_OFFSET;
			 static const Aspose::Cells::System::Int32 ROW_TYPE_OFFSET;
			 static const Aspose::Cells::System::Int32 ROW_DATA_OFFSET;
			 static const Aspose::Cells::System::Int32 MASK_ROW_INDEX;
			 static const Aspose::Cells::System::Int32 MASK_ROW_HEIGHT;
			 static const Aspose::Cells::System::Int32 MASK_ROW_XF;
			 static const Aspose::Cells::System::Int32 CLEAR_ROW_INDEX;
			 static const Aspose::Cells::System::Int32 CLEAR_ROW_HEIGHT;
			 static const Aspose::Cells::System::Int32 CLEAR_ROW_XF;
			 static const Aspose::Cells::System::Int32 ROW_DATASIZE_BASE;
			 static const Aspose::Cells::System::Double RK_MAX;
			 static const Aspose::Cells::System::Double RK_MIN;
			Aspose::Cells::CellsSs::IStringPool* m_StringPool;
			Aspose::Cells::FormulaPool* m_FormulaPool;
			Aspose::Cells::CellsSs::RowCollectionImplBin* m_Rows;
			Aspose::Cells::System::Int32 m_RowIndex;
			Aspose::Cells::System::Int32 m_RowDataPos;
			Aspose::Cells::System::Int32 m_RowStartPos;
			Aspose::Cells::System::Int32 m_RowEndPos;
			Aspose::Cells::System::Int32 m_CellEndPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_Data;
			intrusive_ptr<Aspose::Cells::Collections::IntArrayList> m_CellPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_CellDataBuffer;
			Aspose::Cells::System::Byte m_SyncValue;
			Aspose::Cells::System::Byte m_Size;
			void InitRowInfo();
			Aspose::Cells::System::Int32 GetRowHeaderSize();
			void InitCellAccess();
			Aspose::Cells::System::Int32 GetCellSize(Aspose::Cells::System::Int32 cellPos);
			Aspose::Cells::System::Int32 GetValuePosition(Aspose::Cells::System::Int32 cellPos);
			static Aspose::Cells::System::Int32 GetValueSize(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 GetIntValueSize(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 ToDataBuffer(intrusive_ptr<Aspose::Cells::CellsSs::CellData> data , Aspose::Cells::System::Int32 cellPos , Aspose::Cells::System::Int32 fields);
			Aspose::Cells::System::Int32 ToDataBufferWithoutValue(intrusive_ptr<Aspose::Cells::CellsSs::CellData> data , Aspose::Cells::System::Int32 cellPos0 , Aspose::Cells::System::Int32 fields);
			Aspose::Cells::System::Int32 ValueToDataBuffer(intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 GetIntValue(Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 count);
			void SetIntValue(Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value , Aspose::Cells::System::Int32 newCount);
			void SetIntValue2(Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			void SetIntValue3(Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			void SetIntValue4(Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			void SetBufferIntValue2(Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			void SetBufferIntValue3(Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			void SetBufferIntValue4(Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			void MarkSync();
			void OnDataEndChanged();
			Aspose::Cells::System::Int32 EnsureBinCapacity(Aspose::Cells::System::Int32 size0);
			Aspose::Cells::System::Int32 OnBufferChanged();
			Aspose::Cells::System::Int32 ShiftBinData(Aspose::Cells::System::Int32 cellPos , Aspose::Cells::System::Int32 dataPos0 , Aspose::Cells::System::Int32 shiftSize);
			bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount , bool sequential);
			void AppendBinData(Aspose::Cells::System::Int32 count);
			Aspose::Cells::System::Int32 AppendCells(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::CellData*>> cellsdata , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			Aspose::Cells::System::Int32 InsertBinData(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
			Aspose::Cells::System::Int32 ToInt(Aspose::Cells::System::Int32 lv , Aspose::Cells::System::Int32 offset);
			static void SetIntValue2(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			static void SetIntValue3(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			static void SetIntValue4(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int32 GetIntValue(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 dataPos , Aspose::Cells::System::Int32 count);
	public:

			 RowImplWithVarCellLength(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplBin> rows , Aspose::Cells::System::Int32 rowDataPos , intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> stringPool , intrusive_ptr<Aspose::Cells::FormulaPool> formulaPool);
			 RowImplWithVarCellLength(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplBin> rows , intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> stringPool , intrusive_ptr<Aspose::Cells::FormulaPool> formulaPool , intrusive_ptr<Aspose::Cells::System::Object> cachedData);
			intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplBin> GetRows();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetData();
			Aspose::Cells::System::Int32 GetRowDataPos();
			Aspose::Cells::System::Int32 GetCellEndPos();
			Aspose::Cells::System::Int32 GetRowDataStartPos();
			Aspose::Cells::System::Int32 GetRowDataEndPos();
			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual Aspose::Cells::System::Int32 Sync();
			 virtual void SyncData();
			 virtual void SyncData(Aspose::Cells::System::Int32 rowDataPos);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 column);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 rawPos0);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 lowPos0 , Aspose::Cells::System::Int32 highPos0);
			 virtual Aspose::Cells::System::Int32 SyncPosition(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 position);
			 virtual Aspose::Cells::System::Int32 GetAdjacentPosition(Aspose::Cells::System::Int32 position0 , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumerator();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenPosition(Aspose::Cells::System::Int32 startPosition0 , Aspose::Cells::System::Int32 endPosition0 , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetween(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endId , Aspose::Cells::System::Int32 endPosition , bool reversed);
			 virtual Aspose::Cells::System::Int32 GetSequencePosition(Aspose::Cells::System::Int32 index);
			 virtual Aspose::Cells::System::Int32 GetPositionSequence(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetCapacity();
			 virtual void EnsureCapacity(Aspose::Cells::System::Int32 cellCount);
			 virtual void Remove(Aspose::Cells::System::Int32 position0 , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 RemoveBetweenPosition(Aspose::Cells::System::Int32 startPosition0 , Aspose::Cells::System::Int32 endPosition0);
			 virtual Aspose::Cells::System::Int32 GetCountBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual void Clear(Aspose::Cells::System::Int32 initCellCapacity);
			 virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount);
			 virtual bool TrimSequentially(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetCacheData();
			 virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position0 , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 AppendCell(intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual Aspose::Cells::System::Int32 InsertCell(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::CellData*>> cellsdata , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 InsertCells(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 srcPosition , Aspose::Cells::System::Int32 count , bool clone);
			 virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position0);
			 virtual Aspose::Cells::System::Int32 GetXfIndexByPosition(Aspose::Cells::System::Int32 position0);
			 virtual void UpdateXfIndexByPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 xf);
			 virtual Aspose::Cells::CellsSs::RawCellValueType GetTypeByPosition(Aspose::Cells::System::Int32 position);
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValueByPosition(Aspose::Cells::System::Int32 position0);
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
			static Aspose::Cells::System::Int32 GetRowHeaderCapacityMax(Aspose::Cells::System::Int32 rowIndex);
			static Aspose::Cells::System::Int32 GetRowHeaderCapacityMin(Aspose::Cells::System::Int32 rowIndex);
			static Aspose::Cells::System::Int32 GetRowHeaderCapacityAverage(Aspose::Cells::System::Int32 rowIndex);
			static Aspose::Cells::System::Int32 GetCellCapacityMax(Aspose::Cells::System::Int32 cellCount);
			static Aspose::Cells::System::Int32 GetCellCapacityMin(Aspose::Cells::System::Int32 cellCount);
			static Aspose::Cells::System::Int32 GetCellCapacityAverage(Aspose::Cells::System::Int32 cellCount);
			static Aspose::Cells::System::Int32 GetRowIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos);
			static void ToRowProperties(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 rowStartPos , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			static Aspose::Cells::System::Int32 GetRowXfIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 rowStartPos);
			static Aspose::Cells::System::Byte GetRowOption(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 rowStartPos , Aspose::Cells::System::Int32 optionIndex);
			static void SetRowOption(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 rowStartPos , Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte value);
			static Aspose::Cells::System::Int32 GetRowRawHeight(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 rowStartPos);
			static Aspose::Cells::System::Int32 InitRowData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps);
			static Aspose::Cells::System::Int32 ShiftRowIndexSameSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 offset);
			static void ShiftRowIndexVarSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 dataEndPos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 varSize);
			static void MarkCellEnd(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 dataEndPos , Aspose::Cells::System::Int32 rowEndPos);
			static Aspose::Cells::System::Int32 GetCellEndPos(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> DebugData();
			 RowImplWithVarCellLength();
		public:
			virtual ~RowImplWithVarCellLength();
	};

}

}

}
