#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "FormulaCell.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_FORMULACELLTABLE() 

namespace Aspose {
namespace Cells {
class Cells;
class WorksheetCollection;
class CopyOptions;
class FormulaTable;
}
}

namespace Aspose {
namespace Cells {
	class FormulaCellTable : public Aspose::Cells::FormulaCell
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaTable> m_FormulaTable;
	public:

			 FormulaCellTable(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::FormulaTable> table);
			 FormulaCellTable(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::FormulaTable> table , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> binary);
			 virtual intrusive_ptr<Aspose::Cells::FormulaTable> GetFormulaTable();
			 virtual bool IsArrayHeader();
			 virtual bool IsSharedFormulaHeader();
			 virtual bool IsInSharedFormula(intrusive_ptr<Aspose::Cells::Cells> cells);
			 virtual bool IsInTable(intrusive_ptr<Aspose::Cells::Cells> cells);
			 virtual bool HasHasExternRef(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> extSheetRefs , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> NamesContainsExtSheetRefs);
			 virtual intrusive_ptr<Aspose::Cells::FormulaCell> Clone(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::WorksheetCollection> sourceSheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> destSheets , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			 FormulaCellTable();
		public:
			virtual ~FormulaCellTable();
	};

}

}
