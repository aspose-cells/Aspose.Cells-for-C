#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_FORMULATABLE() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
	class FormulaTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_option;
	public:

			intrusive_ptr<Aspose::Cells::CellArea> Table;
			Aspose::Cells::System::Int32 RowOfRow;
			Aspose::Cells::System::Int32 ColumnOfRow;
			Aspose::Cells::System::Int32 RowOfColumn;
			Aspose::Cells::System::Int32 ColumnOfColumn;
			void Copy(intrusive_ptr<Aspose::Cells::FormulaTable> source);
			Aspose::Cells::System::Byte GetOption();
			void SetOption(Aspose::Cells::System::Byte value);
			bool GetAlwaysCalc();
			void SetAlwaysCalc(bool value);
			bool IsInput1Deleted();
			void SetIsInput1Deleted(bool value);
			bool IsInput2Deleted();
			void SetIsInput2Deleted(bool value);
			bool GetTwoInput();
			void SetTwoInput(bool value);
			bool IsRowInputed();
			void SetIsRowInputed(bool value);
			bool IsColumnInputed();
			intrusive_ptr<Aspose::Cells::System::String> GetRowInputCell();
			void SetRowInputCell(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetColumnInputCell();
			void SetColumnInputCell(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormula();
			void SetFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> f);
			 FormulaTable();
		public:
			virtual ~FormulaTable();
	};

}

}
