#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "SortOrder.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Double.h"
//#include "System/Math.h"
//#include "System/Int16.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/SortedList.h"
#define STATIC_DATASORTER() 

namespace Aspose {
namespace Cells {
class SortedValue;
class CellArea;
class Row;
class Cells;
class Cell;
class DataSorterKey;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API DataSorter : public Aspose::Cells::System::Object
#else	class DataSorter : public Aspose::Cells::System::Object
#endif


	{
	private:


		class CellDataWithRowInfo;

		 friend class DataSorter::CellDataWithRowInfo;

		
	class CellDataWithRowInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 RowIndex;
			Aspose::Cells::System::Int32 RowPos;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> Data;
			 CellDataWithRowInfo(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowPos , intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			 CellDataWithRowInfo();
		public:
			virtual ~CellDataWithRowInfo();
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Object* m_parent;
			Aspose::Cells::Cells* cells;
			intrusive_ptr<Aspose::Cells::CellArea> area;
			bool IsAreaSet;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_keys;
			bool m_HasHeaders;
			bool m_IsLeftToRight;
			bool m_CaseSensitive;
			void SetRow(intrusive_ptr<Aspose::Cells::Row> backRowInfo , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn , bool isGroup , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellArea*>> linkAreas);
			Aspose::Cells::System::Int32 GetIndexInColumns(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> columns , Aspose::Cells::System::Int32 column);
			void SetCell(intrusive_ptr<Aspose::Cells::Cell> replaceCell , intrusive_ptr<Aspose::Cells::Cell> destCell);
			Aspose::Cells::System::Int32 GetLevel();
			void ConvertSorterList(intrusive_ptr<Aspose::Cells::System::Collections::SortedList> sLists , Aspose::Cells::System::Int32 level , intrusive_ptr<Aspose::Cells::DataSorterKey> sorterKey , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rows);
			void AddCellForColumn(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> replaceList);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SetColumn(Aspose::Cells::System::Int32 column0 , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> repalceList , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			void SetCellInColumns(intrusive_ptr<Aspose::Cells::DataSorter::CellDataWithRowInfo> data , Aspose::Cells::System::Int32 column0);
			intrusive_ptr<Aspose::Cells::SortedValue> ConvertSortedValue(intrusive_ptr<Aspose::Cells::DataSorterKey> sorterKey , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
	public:

			Aspose::Cells::Workbook* m_book;
			intrusive_ptr<Aspose::Cells::System::String> m_sortMethod;
			 DataSorter(intrusive_ptr<Aspose::Cells::System::Object> parent);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetKeys();
			intrusive_ptr<Aspose::Cells::CellArea> GetArea();
			void SetArea(intrusive_ptr<Aspose::Cells::CellArea> value);
			intrusive_ptr<Aspose::Cells::System::Object> GetParent();
			void SetParent(intrusive_ptr<Aspose::Cells::System::Object> value);
			void Clear();
			bool HasHeaders();
			void SetHasHeaders(bool value);
			void AddKey(Aspose::Cells::System::Int32 key , Aspose::Cells::SortOrder order);
			void AddKey(Aspose::Cells::System::Int32 key , Aspose::Cells::SortOrder order , intrusive_ptr<Aspose::Cells::System::String> customList);
			void AddKey(intrusive_ptr<Aspose::Cells::DataSorterKey> sorterKey);
			Aspose::Cells::System::Int32 GetKey1();
			void SetKey1(Aspose::Cells::System::Int32 value);
			Aspose::Cells::SortOrder GetOrder1();
			void SetOrder1(Aspose::Cells::SortOrder value);
			Aspose::Cells::System::Int32 GetKey2();
			void SetKey2(Aspose::Cells::System::Int32 value);
			Aspose::Cells::SortOrder GetOrder2();
			void SetOrder2(Aspose::Cells::SortOrder value);
			Aspose::Cells::System::Int32 GetKey3();
			void SetKey3(Aspose::Cells::System::Int32 value);
			Aspose::Cells::SortOrder GetOrder3();
			void SetOrder3(Aspose::Cells::SortOrder value);
			bool GetSortLeftToRight();
			void SetSortLeftToRight(bool value);
			bool GetCaseSensitive();
			void SetCaseSensitive(bool value);
			void Sort(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			void Sort(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellArea> area);
			void Sort();
			void SortInColumns();
			void SortList(Aspose::Cells::System::Int32 level , intrusive_ptr<Aspose::Cells::DataSorterKey> sorterKey , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rows);
			void Gather(intrusive_ptr<Aspose::Cells::DataSorterKey> sorterKey , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> indexes , intrusive_ptr<Aspose::Cells::System::Collections::SortedList> lists , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> nullLists);
			 DataSorter();
		public:
			virtual ~DataSorter();
	};

}

}
