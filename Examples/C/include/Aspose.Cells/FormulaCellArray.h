#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "FormulaCell.h"
#include "System/Int32.h"
#define STATIC_FORMULACELLARRAY() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Cells;
class ArrayFormula;
class CopyOptions;
}
}

namespace Aspose {
namespace Cells {
	class FormulaCellArray : public Aspose::Cells::FormulaCell
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::ArrayFormula> m_ArrayFormula;
	public:

			 FormulaCellArray(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::ArrayFormula> arrayFormula);
			 virtual intrusive_ptr<Aspose::Cells::ArrayFormula> GetArrayFormula();
			 virtual bool IsArrayHeader();
			 virtual bool IsSharedFormulaHeader();
			 virtual bool IsInSharedFormula(intrusive_ptr<Aspose::Cells::Cells> cells);
			 virtual bool IsInTable(intrusive_ptr<Aspose::Cells::Cells> cells);
			 virtual bool HasHasExternRef(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> extSheetRefs , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> NamesContainsExtSheetRefs);
			 virtual intrusive_ptr<Aspose::Cells::FormulaCell> Clone(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::WorksheetCollection> sourceSheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> destSheets , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			 FormulaCellArray();
		public:
			virtual ~FormulaCellArray();
	};

}

}
