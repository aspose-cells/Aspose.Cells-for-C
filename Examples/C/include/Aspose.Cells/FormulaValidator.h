#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/RegularExpressions/Regex.h"
#include "System/String.h"
//#include "System/UInt32.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/Text/RegularExpressions/Match.h"
//#include "System/Byte.h"
#include "NodeType.h"
//#include "System/CharHelper.h"
//#include "System/Text/RegularExpressions/RegexOptions.h"
#include "System/Int32.h"
//#include "System/Exception.h"
#include "System/Collections/ArrayList.h"
#define STATIC_FORMULAVALIDATOR() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class FormulaValidator : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* m_Worksheets;
			Aspose::Cells::NodeType m_Type;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_Children;
			intrusive_ptr<Aspose::Cells::System::String> m_Node;
			void AddChild(intrusive_ptr<Aspose::Cells::FormulaValidator> child);
			Aspose::Cells::System::Int32 GetSplitIndex(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 endIndex);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetParameters(intrusive_ptr<Aspose::Cells::System::String> formula);
			void SplitFormula(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 splitIndex);
			void ValidateNode();
			void ValidateOperand();
			void ValidateCellArea();
			void ValidateCell(intrusive_ptr<Aspose::Cells::System::String> cell);
			void ValidateNumberOrCellName(intrusive_ptr<Aspose::Cells::System::String> cell);
			void ValidateCellName(intrusive_ptr<Aspose::Cells::System::String> cellName);
	public:

			bool Flag;
			 FormulaValidator(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void ParseString(intrusive_ptr<Aspose::Cells::System::String> formula);
			void Validate();
			 FormulaValidator();
		public:
			virtual ~FormulaValidator();
	};

}

}
