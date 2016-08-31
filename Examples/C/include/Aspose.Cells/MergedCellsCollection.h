#pragma once
#include "System/Object.h"
//#include "System/String.h"
#include "CellArea.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/ArgumentException.h"
#include "System/Collections/CollectionBase.h"
#include "System/Collections/ArrayList.h"
#define STATIC_MERGEDCELLSCOLLECTION() 

namespace Aspose {
namespace Cells {
class Cells;
class Range;
}
}

namespace Aspose {
namespace Cells {
	class MergedCellsCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::CellArea> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::CellArea> ca);
			void Set(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::CellArea> ca);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns);
			bool IsMergedCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Range> GetMergedRange(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void UnMerge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			void Merge(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			void Merge(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool checkConflict , bool mergeConflict);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ToArrayList();
			void Cleare2007();
			void ShiftLeft(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber);
			void ShiftUp(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber);
			void ShiftRight(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber);
			void ShiftDown(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber);
			void CopyColumns(intrusive_ptr<Aspose::Cells::MergedCellsCollection> source , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 destinationColumnIndex , Aspose::Cells::System::Int32 columnNumber);
			void Copy(intrusive_ptr<Aspose::Cells::MergedCellsCollection> source);
			void CopyRows(intrusive_ptr<Aspose::Cells::MergedCellsCollection> source , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex , Aspose::Cells::System::Int32 rowNumber);
			void MoveRangeTo(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 columnCount , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn);
			 MergedCellsCollection();
		public:
			virtual ~MergedCellsCollection();
	};

}

}
