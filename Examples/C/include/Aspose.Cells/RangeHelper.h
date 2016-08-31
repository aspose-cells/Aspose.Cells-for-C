#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#define STATIC_RANGEHELPER() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace Helper {
	class RangeHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void MergeAreas(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas);
			static void MergeAreaStep(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas);
			static intrusive_ptr<Aspose::Cells::CellArea> MergeArea(intrusive_ptr<Aspose::Cells::CellArea> sArea , intrusive_ptr<Aspose::Cells::CellArea> sourceArea , bool& merged);
			static bool MergeAreas(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas , intrusive_ptr<Aspose::Cells::CellArea> ca);
			static intrusive_ptr<Aspose::Cells::System::Object> CopyInRows(intrusive_ptr<Aspose::Cells::CellArea> sourceCa , Aspose::Cells::System::Int32 sourceRow , Aspose::Cells::System::Int32 number , Aspose::Cells::System::Int32 destRow);
			static intrusive_ptr<Aspose::Cells::CellArea> InsertRows(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber , bool& b);
			static intrusive_ptr<Aspose::Cells::CellArea> InsertColumns(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columns , bool& b);
			static bool IsSame(intrusive_ptr<Aspose::Cells::CellArea> ca1 , intrusive_ptr<Aspose::Cells::CellArea> ca2);
			static bool IsDeletedActive(intrusive_ptr<Aspose::Cells::CellArea> deletedRange , intrusive_ptr<Aspose::Cells::CellArea> ca2);
			static intrusive_ptr<Aspose::Cells::CellArea> UnionBound(intrusive_ptr<Aspose::Cells::CellArea> ca1 , intrusive_ptr<Aspose::Cells::CellArea> ca2);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetUnIntersectParts(intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::CellArea> intersect);
			static intrusive_ptr<Aspose::Cells::System::Object> Intersect(intrusive_ptr<Aspose::Cells::CellArea> ca1 , intrusive_ptr<Aspose::Cells::CellArea> ca2);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> NotIntersectInRow(intrusive_ptr<Aspose::Cells::CellArea> ca1 , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 rowNumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IntersectInRow(intrusive_ptr<Aspose::Cells::CellArea> ca1 , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 rowNumber);
			static intrusive_ptr<Aspose::Cells::System::Object> IntersectInColumn(intrusive_ptr<Aspose::Cells::CellArea> ca1 , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 columnNumber);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ShiftDown(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , bool& flag);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ShiftDownAsMS(bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , bool& flag);
			static void ShiftDownAsMS(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas , bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static void ShiftUp(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas , bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static void ShiftDownAsMS(bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static void DeleteRows(bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static intrusive_ptr<Aspose::Cells::System::Object> DeleteRows(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca);
			static void ShiftUp(bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SplitShiftRightArea(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , intrusive_ptr<Aspose::Cells::CellArea> ca , bool& flag);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SplitShiftDownArea(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , intrusive_ptr<Aspose::Cells::CellArea> ca , bool& flag);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ShiftRight(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , bool& flag);
			static void ShiftLeft(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas , bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static void ShiftRightAsMS(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas , bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static void ShiftRightAsMS(bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static void DeleteColumns(bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			static intrusive_ptr<Aspose::Cells::System::Object> DeleteColumns(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca);
			static void ShiftLeft(bool is2007 , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> notMovedAreas , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> movedAreas);
			 RangeHelper();
		public:
			virtual ~RangeHelper();
	};

}

}

}
