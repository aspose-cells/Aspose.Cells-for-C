#pragma once
#include "System/Array2D.h"
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "System/Char.h"
#include "System/Collections/ArrayList.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
//#include "System/Collections/CollectionBase.h"
#include "System/Array1D.h"
#define STATIC_FORMULAPARSE() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class FormulaTreeCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FormulaParse : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* sheets;
			static intrusive_ptr<Aspose::Cells::System::String> errMsg;
			static bool IsScientific(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 i);
			Aspose::Cells::System::Int32 SearchRightSquareBrackets(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 i);
			Aspose::Cells::System::Int32 SearchError(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 i);
			Aspose::Cells::System::Int32 GetArrayParameters(intrusive_ptr<Aspose::Cells::FormulaTree> arrayNode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 i);
			Aspose::Cells::System::Int32 ParseArrayParameters(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 i);
			Aspose::Cells::System::Int32 GetFunction(intrusive_ptr<Aspose::Cells::FormulaTree> funcNode , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 i);
	public:

			 FormulaParse(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::FormulaTree> Parse(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 i);
			void CheckBeforeLeftSquareBrackets(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaUtility::FormulaTreeCollection> list);
			bool IsRangeOperator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 i , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			Aspose::Cells::System::Int32 SearchQuote(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 cI);
			Aspose::Cells::System::Int32 SearchDoubleQuote(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 cI);
			void ToRangeList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			intrusive_ptr<Aspose::Cells::FormulaTree> ToTree(intrusive_ptr<Aspose::Cells::FormulaUtility::FormulaTreeCollection> list);
			intrusive_ptr<Aspose::Cells::FormulaTree> ToTree(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaTree*>> nodes , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Int32 operatorLevel);
			 FormulaParse();
		public:
			virtual ~FormulaParse();
	};

}

}

}
