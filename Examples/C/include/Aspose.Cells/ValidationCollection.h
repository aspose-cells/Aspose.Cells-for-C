#pragma once
#include "System/Byte.h"
#include "ShiftType.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#include "System/Array1D.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "Validation.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_VALIDATIONCOLLECTION() 

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

	class ASPOSE_CELLS_API ValidationCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ValidationCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			void InitFormulas();
			void ShiftFormulas(bool move , intrusive_ptr<Aspose::Cells::Validation> dv , intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumbers , Aspose::Cells::ShiftType shiftType , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			Aspose::Cells::System::Int32 m_DropDownIndex;
	public:

			Aspose::Cells::Worksheet* m_sheet;
			intrusive_ptr<Aspose::Cells::Worksheet> GetWorksheet();
			 ValidationCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			Aspose::Cells::System::Int32 AddInner(intrusive_ptr<Aspose::Cells::Validation> dv);
			Aspose::Cells::System::Int32 Add();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::CellArea> ca);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Validation> validation);
			intrusive_ptr<Aspose::Cells::Validation> GetIndexObject(Aspose::Cells::System::Int32 index);
			void RemoveACell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void RemoveArea(intrusive_ptr<Aspose::Cells::CellArea> ca);
			void RemoveArea(intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::Validation> validation);
			intrusive_ptr<Aspose::Cells::Validation> GetValidationInCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void Copy(intrusive_ptr<Aspose::Cells::ValidationCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyInRows(intrusive_ptr<Aspose::Cells::ValidationCollection> source , Aspose::Cells::System::Int32 sourceRow , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			void CopyInColumns(intrusive_ptr<Aspose::Cells::ValidationCollection> source , Aspose::Cells::System::Int32 sourceColumn , Aspose::Cells::System::Int32 destColumn , Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			void CopyInRange(intrusive_ptr<Aspose::Cells::ValidationCollection> source , intrusive_ptr<Aspose::Cells::CellArea> sourceArea , intrusive_ptr<Aspose::Cells::CellArea> destArea , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption , bool transpose);
			void Shift(intrusive_ptr<Aspose::Cells::CellArea> shiftArea , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			void InsertColumns(Aspose::Cells::System::Int32 colIndex , Aspose::Cells::System::Int32 number);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 number);
			Aspose::Cells::System::Int32 GetDropDownIndex();
			void SetDropDownIndex(Aspose::Cells::System::Int32 value);
			bool HasDropDown();
			void GetData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			bool ReferToOtherWorksheets();
			 ValidationCollection();
		public:
			virtual ~ValidationCollection();
	};

}

}
