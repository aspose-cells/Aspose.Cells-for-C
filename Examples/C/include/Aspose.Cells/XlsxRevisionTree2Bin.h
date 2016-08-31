#pragma once
#include "System/Collections/ArrayList.h"
#include "XlsxTree2Bin.h"
#include "RefMode.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "NodeType.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XLSXREVISIONTREE2BIN() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxRevisionTree2Bin : public Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Bin
	{
	private:

			void Init_Vars();
			bool isName;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _currentBook;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _missSheet;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _sameSheet;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> RevData;
			void WriteRevLblName(intrusive_ptr<Aspose::Cells::System::String> nameText , intrusive_ptr<Aspose::Cells::System::String> oText);
			void ParseSheetName(intrusive_ptr<Aspose::Cells::System::String> name);
			void ParseExternReference(intrusive_ptr<Aspose::Cells::System::String> externFileName , intrusive_ptr<Aspose::Cells::System::String> externSheetName);
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> tabMaps;
			 XlsxRevisionTree2Bin(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ParseName(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> nameText);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ParseSheet(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateExternNameFunction(intrusive_ptr<Aspose::Cells::FormulaTree> node , intrusive_ptr<Aspose::Cells::System::String> cellNode , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 refIndex , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> nameText , Aspose::Cells::NodeType type , Aspose::Cells::FormulaUtility::RefMode refMode);
			 virtual void SetRefIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 refIndex);
			 XlsxRevisionTree2Bin();
		public:
			virtual ~XlsxRevisionTree2Bin();
	};

}

}

}

}
