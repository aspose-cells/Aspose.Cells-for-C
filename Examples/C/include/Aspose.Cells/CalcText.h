#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
//#include "System/Text/RegularExpressions/Regex.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Text/RegularExpressions/Match.h"
#include "System/Array1D.h"
#define STATIC_CALCTEXT() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcText : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static Aspose::Cells::System::Int32 GetByteCount(Aspose::Cells::System::Char ch);
	public:

			static Aspose::Cells::System::Int32 LENB(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs);
			static Aspose::Cells::System::Int32 LENB(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static intrusive_ptr<Aspose::Cells::System::String> MIDB(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 num);
			static intrusive_ptr<Aspose::Cells::System::String> MIDB(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 num);
			static intrusive_ptr<Aspose::Cells::System::String> RIGHTB(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 num);
			static intrusive_ptr<Aspose::Cells::System::String> REPLACEB(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 num , intrusive_ptr<Aspose::Cells::System::String> replace);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> SEARCH(intrusive_ptr<Aspose::Cells::System::String> find , intrusive_ptr<Aspose::Cells::System::String> source , Aspose::Cells::System::Int32 start);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> SEARCHB(intrusive_ptr<Aspose::Cells::System::String> find , intrusive_ptr<Aspose::Cells::System::String> source , Aspose::Cells::System::Int32 start);
			static intrusive_ptr<Aspose::Cells::System::String> Proper(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> Trim(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> Clean(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> Roman(Aspose::Cells::System::Int32 n , Aspose::Cells::System::Int32 form);
			 CalcText();
		public:
			virtual ~CalcText();
	};

}

}

}
