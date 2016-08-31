#pragma once
//#include "System/Byte.h"
#include "ShiftType.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Boolean.h"
#include "FormatConditionCollection.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "System/Collections/CollectionBase.h"
#include "System/Collections/ArrayList.h"
#define STATIC_CONDITIONALFORMATTINGCOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class CopyOptions;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ConditionalFormattingCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ConditionalFormattingCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	protected:

			static bool CheckCellArea(intrusive_ptr<Aspose::Cells::CellArea> ca);
	private:

			void Init_Vars();
			void CopyRows(intrusive_ptr<Aspose::Cells::FormatConditionCollection> source , Aspose::Cells::System::Int32 sourceRow , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 rowNumber , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyRows(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areaList , Aspose::Cells::System::Int32 sourceRow , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 rowNumber , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void ShiftFormulas(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumbers , Aspose::Cells::ShiftType shiftType , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 oldColumn , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			void ShiftRight(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumbers , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void ShiftDown(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumbers , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , intrusive_ptr<Aspose::Cells::CopyOptions> options);
	public:

			Aspose::Cells::Worksheet* _sheet;
			 ConditionalFormattingCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void RemoveArea(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			void Copy(intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> cfs);
			void Copy(intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> cfs , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> RemoveInRanage(intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> source , bool sameSheet , intrusive_ptr<Aspose::Cells::CellArea> sourceArea , intrusive_ptr<Aspose::Cells::CellArea> destArea);
			void CopyInColumns(intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> source , Aspose::Cells::System::Int32 sourceColumn , Aspose::Cells::System::Int32 destColumn , Aspose::Cells::System::Int32 columnNumber , intrusive_ptr<Aspose::Cells::CopyOptions> options , bool transpose);
			void CopyInRange(intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> source , intrusive_ptr<Aspose::Cells::CellArea> sourceArea , intrusive_ptr<Aspose::Cells::CellArea> destArea , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption , bool transpose);
			intrusive_ptr<Aspose::Cells::FormatConditionCollection> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs);
			void CopyConditionalFormat(Aspose::Cells::System::Int32 sourceRow , Aspose::Cells::System::Int32 sourceColumn , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn);
			void CopyRows(intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> source , Aspose::Cells::System::Int32 sourceRow , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 rowNumber , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void SplitFormatCondtions(intrusive_ptr<Aspose::Cells::FormatConditionCollection> source , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ranges);
			void SpitFormatConditions(intrusive_ptr<Aspose::Cells::FormatConditionCollection> source);
			void Shift(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 shiftNumbers , Aspose::Cells::ShiftType shiftType , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber);
			void InsertColumns(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 number);
			bool PrepareSave();
			bool HasX14ConditionalFormatting();
			 ConditionalFormattingCollection();
		public:
			virtual ~ConditionalFormattingCollection();
	};

}

}
