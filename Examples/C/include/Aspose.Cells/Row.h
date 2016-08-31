#pragma once
//#include "System/Int32Helper.h"
#include "System/Collections/IEnumerator.h"
//#include "System/Boxing.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Int16.h"
#include "System/Double.h"
#include "System/Collections/IEnumerable.h"
//#include "System/StringHelperPal.h"
#include "System/UInt16.h"
#include "System/Object.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#include "Cell.h"
#define STATIC_ROW() 

namespace Aspose {
namespace Cells {
class Worksheet;
class RowCollection;
class StyleFlag;
class CopyOptions;
class Cells;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractCellCache;
class AbstractRowCollection;
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Row : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
#else	class Row : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> RowData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractCellCache> CellCache;
			 Row(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool cacheCell);
			void EnsureCapacity(Aspose::Cells::System::Int32 cellCount);
			void Trim();
			Aspose::Cells::System::Int32 GetCellCount();
			bool HasCells();
			intrusive_ptr<Aspose::Cells::Cell> GetCellByPosition(Aspose::Cells::System::Int32 pos);
			void Sync();
			void RemoveRange(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 count);
			void RemoveRangeByPosition(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 count);
			void Clear();
			intrusive_ptr<Aspose::Cells::Cell> GetCellByIndex(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Cell> GetAppendCell(Aspose::Cells::System::Int32 column);
			bool IsBlank();
			intrusive_ptr<Aspose::Cells::Cell> GetIndexObject(Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetCellPosition(Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 column , bool isNull , bool updateCellCount);
			intrusive_ptr<Aspose::Cells::Cell> CreateCell(intrusive_ptr<Aspose::Cells::RowCollection> rows , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 pos , bool initCellXf , bool updateGlobalIndex);
			intrusive_ptr<Aspose::Cells::Cell> GetCell(intrusive_ptr<Aspose::Cells::RowCollection> rows , Aspose::Cells::System::Int32 column , bool isNull , bool initCellXf , bool updateGlobalIndex);
			intrusive_ptr<Aspose::Cells::Cell> GetCellOrNull(Aspose::Cells::System::Int32 column);
			 virtual Aspose::Cells::System::Int32 GetXFIndex();
			 virtual void SetXFIndex(Aspose::Cells::System::Int32 value);
			void SetInternalRawHeight(Aspose::Cells::System::UInt16 value);
			Aspose::Cells::System::UInt16 GetRawHeight();
			void SetRawHeight(Aspose::Cells::System::UInt16 value);
			bool IsCollapsed();
			void SetIsCollapsed(bool value);
			Aspose::Cells::System::Double GetHeight();
			void SetHeight(Aspose::Cells::System::Double value);
			bool IsHidden();
			void SetIsHidden(bool value);
			bool GetEndHere();
			void SetEndHere(bool value);
			Aspose::Cells::System::Double GetInnerHeight();
			bool GetExplicit();
			void SetExplicit(bool value);
			Aspose::Cells::RowCollection* Rows;
			Aspose::Cells::Cells* Cells;
			Aspose::Cells::System::Int32 GetIndex();
			Aspose::Cells::System::Byte GetOutlineLevel();
			void SetOutlineLevel(Aspose::Cells::System::Byte value);
			Aspose::Cells::System::Byte GetGroupLevel();
			bool IsHeightMatched();
			void SetIsHeightMatched(bool value);
			intrusive_ptr<Aspose::Cells::Style> GetStyle();
			void SetStyle(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetRefStyle();
			bool HasStyle();
			void CopyData(intrusive_ptr<Aspose::Cells::Row> source);
			intrusive_ptr<Aspose::Cells::Worksheet> GetSheet();
			void CopyData(intrusive_ptr<Aspose::Cells::Row> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			Aspose::Cells::System::Int32 GetStartColumn();
			Aspose::Cells::System::Int32 GetEndColumn();
			intrusive_ptr<Aspose::Cells::Cell> GetFirstCell();
			intrusive_ptr<Aspose::Cells::Cell> GetLastCell();
			intrusive_ptr<Aspose::Cells::Cell> GetLastDataCell();
			void ApplyStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			bool IsSameStyle(intrusive_ptr<Aspose::Cells::Row> row);
			 virtual bool Equals(intrusive_ptr<Aspose::Cells::System::Object> obj);
			bool Equals(intrusive_ptr<Aspose::Cells::Row> row);
			static bool IsRowHidden(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static void SetRowHidden(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool flag);
			static bool IsRowHidden(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData , Aspose::Cells::System::Int32 rowPos);
			static void SetRowHeightMatched(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool flag);
			static bool IsRowExplicit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static void SetRowExplicit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool flag);
			static bool IsRowExplicit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData , Aspose::Cells::System::Int32 rowPos);
			static Aspose::Cells::System::Byte GetRowOutlineLevel(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static void SetRowOutlineLevel(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Byte value);
			static Aspose::Cells::System::Byte GetRowOutlineLevel(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData , Aspose::Cells::System::Int32 rowPos);
			static bool RowHasStyle(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static Aspose::Cells::System::Int32 GetRowXfIndex(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static void SetRowXfIndex(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 value);
			static void SetRowHidden(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool flag);
			static intrusive_ptr<Aspose::Cells::Style> GetRowStyle(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static intrusive_ptr<Aspose::Cells::Style> GetRowRefStyle(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static void SetRowRawHeight(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Double GetRowInnerHeight(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static Aspose::Cells::System::Double GetRowInnerHeight(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData , Aspose::Cells::System::Int32 rowPos);
			static Aspose::Cells::System::Double GetRowHeight(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static Aspose::Cells::System::Double GetRowHeight(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData , Aspose::Cells::System::Int32 rowPos);
			static Aspose::Cells::System::Int32 GetRowRawHeight(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			static Aspose::Cells::System::Int32 GetRowRawHeight(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData , Aspose::Cells::System::Int32 rowPos);
			static void SetRowHeight(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Double value);
			 Row();
		public:
			virtual ~Row();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
