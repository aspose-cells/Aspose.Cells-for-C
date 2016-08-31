#pragma once
#include "System/Array2D.h"
//#include "System/Boxing.h"
//#include "System/Text/RegularExpressions/Regex.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
//#include "System/StringHelperPal.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Text/RegularExpressions/Match.h"
#include "System/Array1D.h"
#define STATIC_TEXTFUNCTIONS() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class TextFunctions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> Proper(intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::String> Trim(intrusive_ptr<Aspose::Cells::System::String> str);
			static Aspose::Cells::System::Int32 GetByteCount(Aspose::Cells::System::Char ch);
			static Aspose::Cells::System::Int32 LENB(intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::Object> MIDB(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 num);
			static intrusive_ptr<Aspose::Cells::System::Object> LEFTB(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 num);
			static intrusive_ptr<Aspose::Cells::System::Object> LEFTB(intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::Object> ArrayRight(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 num , bool isRight , bool isB);
			static intrusive_ptr<Aspose::Cells::System::Object> Left(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 num , bool isB);
			static intrusive_ptr<Aspose::Cells::System::Object> Right(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 num , bool isB);
			static intrusive_ptr<Aspose::Cells::System::Object> RIGHTB(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 num);
			static intrusive_ptr<Aspose::Cells::System::Object> RIGHTB(intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::Object> Search(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> child1 , intrusive_ptr<Aspose::Cells::System::String> child2 , intrusive_ptr<Aspose::Cells::System::Object> childResult3 , bool isB , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static intrusive_ptr<Aspose::Cells::System::Object> Search(intrusive_ptr<Aspose::Cells::System::String> child1 , intrusive_ptr<Aspose::Cells::System::String> child2 , intrusive_ptr<Aspose::Cells::System::Object> childResult3 , bool isB , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static intrusive_ptr<Aspose::Cells::System::Object> SEARCHB(intrusive_ptr<Aspose::Cells::System::String> find , intrusive_ptr<Aspose::Cells::System::String> source);
			static intrusive_ptr<Aspose::Cells::System::Object> SEARCHB(intrusive_ptr<Aspose::Cells::System::String> find , intrusive_ptr<Aspose::Cells::System::String> source , Aspose::Cells::System::Int32 start);
			static intrusive_ptr<Aspose::Cells::System::Object> FINDB(intrusive_ptr<Aspose::Cells::System::String> find , intrusive_ptr<Aspose::Cells::System::String> source);
			static intrusive_ptr<Aspose::Cells::System::Object> FINDB(intrusive_ptr<Aspose::Cells::System::String> find , intrusive_ptr<Aspose::Cells::System::String> source , Aspose::Cells::System::Int32 start);
			static intrusive_ptr<Aspose::Cells::System::Object> REPLACEB(intrusive_ptr<Aspose::Cells::System::String> oldText , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 num , intrusive_ptr<Aspose::Cells::System::String> newText);
			 TextFunctions();
		public:
			virtual ~TextFunctions();
	};

}

}

}
