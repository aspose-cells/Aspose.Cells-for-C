#pragma once
#include "System/Byte.h"
#include "ShiftType.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_ARRAYFORMULA() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class CopyOptions;
}
}

namespace Aspose {
namespace Cells {
	class ArrayFormula : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellArea> m_CellArea;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_formula;
			Aspose::Cells::System::Byte flag;
	public:

			 ArrayFormula(intrusive_ptr<Aspose::Cells::CellArea> ca , bool isArray , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula);
			 ArrayFormula();
			void Copy(intrusive_ptr<Aspose::Cells::ArrayFormula> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			intrusive_ptr<Aspose::Cells::CellArea> GetCellArea();
			void SetCellArea(intrusive_ptr<Aspose::Cells::CellArea> value);
			bool IsArray();
			void SetIsArray(bool value);
			Aspose::Cells::System::Byte GetCalculationFlag();
			void SetCalculationFlag(Aspose::Cells::System::Byte value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormula();
			void SetFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			void InsertRows(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 shiftRows , Aspose::Cells::System::Int32 startRow);
			void Shift(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 shiftNumbers , Aspose::Cells::ShiftType shiftType , Aspose::Cells::System::Int32 oldRow , Aspose::Cells::System::Int32 oldColumn , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			void InsertColumns(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , Aspose::Cells::System::Int32 oldColumn , Aspose::Cells::System::Int32 currentColumn , Aspose::Cells::System::Int32 shiftColumns , Aspose::Cells::System::Int32 startColumn);
			void CopyRowColumn(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , intrusive_ptr<Aspose::Cells::CellArea> oldArea , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
		public:
			virtual ~ArrayFormula();
	};

}

}
