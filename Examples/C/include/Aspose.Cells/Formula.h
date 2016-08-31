#pragma once
//#include "System/Exception.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "RefMode.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "FormulaOType.h"
#define STATIC_FORMULA() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class Name;
class WorksheetCollection;
class Cell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class FormulaTree2Bin;
class FormulaParse;
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
class XlsBin2Tree;
}
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
class XlsxBin2Tree;
}
}
}
}

namespace Aspose {
namespace Cells {
	class Formula : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::FormulaUtility::FormulaTree2Bin> tree2Bin;
			intrusive_ptr<Aspose::Cells::FormulaUtility::FormulaParse> formulaParse;
	public:

			 static const Aspose::Cells::System::Byte TExpToken;
			 static const Aspose::Cells::System::Byte TTableToken;
			intrusive_ptr<Aspose::Cells::FormulaUtility::FormulaTree2Bin> GetFormulaTree2Bin();
			 Formula(intrusive_ptr<Aspose::Cells::WorksheetCollection> excelSheets);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ParseAddIn(intrusive_ptr<Aspose::Cells::System::String> addInFormula , intrusive_ptr<Aspose::Cells::System::String>& functionName , intrusive_ptr<Aspose::Cells::Cell> cell);
			bool ContainsInvalidTable();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Parse(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::FormulaUtility::FormulaOType type , Aspose::Cells::FormulaUtility::RefMode mode , bool isRef , bool hasHeader , bool force3D);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Parse(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::FormulaUtility::FormulaOType type , Aspose::Cells::FormulaUtility::RefMode mode , bool hasHeader , Aspose::Cells::System::Int32 option);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Parse03(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::String> formula0 , Aspose::Cells::System::Byte option);
			void Parse(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::String> formula0 , Aspose::Cells::System::Byte option , bool keepFormula);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Parse0(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> formula0 , Aspose::Cells::System::Byte option);
			void ParseArrayFormula(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::String> formula0 , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber);
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseTree(intrusive_ptr<Aspose::Cells::System::String> formula);
			void ParseSharedFormula(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::String> formula0 , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber);
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseBeforeCalculation(intrusive_ptr<Aspose::Cells::Name> name , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseBeforeCalculation1(intrusive_ptr<Aspose::Cells::Name> name , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseBeforeCalculation(intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsBin2Tree> bin2Tree2003;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxBin2Tree> bin2Tree2007;
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseStaticFormula(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			bool ContainsCubeFunction();
			bool IsSharedFormula(Aspose::Cells::System::Byte token , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			void GetSharedHeader(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column);
			static void SetArrayResult(intrusive_ptr<Aspose::Cells::System::Object> result , intrusive_ptr<Aspose::Cells::Cell> firstCell);
			 Formula();
		public:
			virtual ~Formula();
	};

}

}
