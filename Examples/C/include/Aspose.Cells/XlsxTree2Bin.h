#pragma once
//#include "System/Globalization/CultureInfo.h"
//#include "System/Exception.h"
#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
#include "RefMode.h"
#include "AbstractFormulaTree2Bin.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Array2D.h"
#include "NodeType.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "FormulaOType.h"
#include "Constants.h"
#define STATIC_XLSXTREE2BIN() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class FunctionInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxTree2Bin : public Aspose::Cells::FormulaUtility::AbstractFormulaTree2Bin
	{
	private:

			void Init_Vars();
			void CreateArrayChild(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree);
			void CreateOperandToken(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::FormulaUtility::RefMode refMode);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ParseCellArea(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::FormulaUtility::RefMode refMode);
			static intrusive_ptr<Aspose::Cells::System::String> RegularSheetName(intrusive_ptr<Aspose::Cells::System::String> sheetName0);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Create3DArea(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> sheet3d , intrusive_ptr<Aspose::Cells::System::String> firstCell , intrusive_ptr<Aspose::Cells::System::String> secondCell , Aspose::Cells::FormulaUtility::RefMode refMode);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Create3DArea(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> firstCell , intrusive_ptr<Aspose::Cells::System::String> secondCell , Aspose::Cells::System::Int32 excalmPos , Aspose::Cells::FormulaUtility::RefMode refMode);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> CreateSUMFunc(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::FormulaUtility::RefMode refMode);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> CreateVarFunc(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::System::UInt16 funcIndex , Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::FormulaUtility::FormulaOType formulaType);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> CreateFixFunc(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::System::UInt16 funcIndex , Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::FormulaUtility::FormulaOType formulaType);
			void CreateAddInFunction(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::FormulaUtility::RefMode refMode);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> CreateFunction(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::FormulaUtility::RefMode expectRefMode , Aspose::Cells::FormulaUtility::FormulaOType formulaType);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateName(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> nodeText , Aspose::Cells::FormulaUtility::RefMode refMode);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateNamedFunction(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> nodeText , Aspose::Cells::FormulaUtility::RefMode refMode);
			bool IsTableColumn(intrusive_ptr<Aspose::Cells::System::String> formula);
			bool IsDDE(intrusive_ptr<Aspose::Cells::System::String> formula);
			bool CheckCell(intrusive_ptr<Aspose::Cells::System::String> formula);
	public:

			 XlsxTree2Bin(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 virtual bool IsXlsx();
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> CreateToken(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::FormulaUtility::RefMode expectRefMode , Aspose::Cells::FormulaUtility::FormulaOType formulaType);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ParseSheet(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			 virtual void SetRefIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 refIndex);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ParseRefCell(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> cellNode , Aspose::Cells::FormulaUtility::RefMode refMode);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Create2DArea(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> firstCell , intrusive_ptr<Aspose::Cells::System::String> secondCell , Aspose::Cells::FormulaUtility::RefMode refMode);
			 virtual intrusive_ptr<Aspose::Cells::FormulaUtility::FunctionInfo> GetFunction(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> node , Aspose::Cells::FormulaUtility::FormulaOType formulaType);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ParseName(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> upperNodeText);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateExternNameFunction(intrusive_ptr<Aspose::Cells::FormulaTree> node , intrusive_ptr<Aspose::Cells::System::String> cellNode , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 refIndex , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> nameText , Aspose::Cells::NodeType type , Aspose::Cells::FormulaUtility::RefMode refMode);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateExternNameFunction(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 refIndex , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> nameText , Aspose::Cells::NodeType type , Aspose::Cells::FormulaUtility::RefMode refMode);
			static bool CellNameToIndex(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column , bool isInArea , bool& isRowAbsolute , bool& isColumnAbsolute , bool& isRowOnly , bool& isColumnOnly);
			 XlsxTree2Bin();
		public:
			virtual ~XlsxTree2Bin();
	};

}

}

}

}
