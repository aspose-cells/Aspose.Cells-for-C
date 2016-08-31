#pragma once
#include "System/Array2D.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
//#include "System/Text/Encoding.h"
#define STATIC_XLSBIN2TREE() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class WorksheetCollection;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
	class XlsBin2Tree : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseAttr(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> treeList , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::FormulaTree> GetAddInFuncTree(intrusive_ptr<Aspose::Cells::System::String> functionName , Aspose::Cells::System::Int32 paramCount , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> treeList , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::FormulaTree> GetFuncTree(intrusive_ptr<Aspose::Cells::System::String> functionName , Aspose::Cells::System::Int32 paramCount , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> treeList , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseFixFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> treeList , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseVarFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> treeList , intrusive_ptr<Aspose::Cells::Cell> cell);
			void AddFixFunctionChildren(intrusive_ptr<Aspose::Cells::FormulaTree> resultNotation , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> treeList);
			void AddOperatorChildren(intrusive_ptr<Aspose::Cells::FormulaTree> resultNotation , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> treeList);
			void AddArrayChildren(intrusive_ptr<Aspose::Cells::FormulaTree> resultNotation , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32& arrayPos);
	public:

			Aspose::Cells::WorksheetCollection* sheets;
			 XlsBin2Tree(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			bool ContainsCubeFunction;
			intrusive_ptr<Aspose::Cells::FormulaTree> ParseStaticFormula(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data0 , Aspose::Cells::System::Int32 pos0);
			 XlsBin2Tree();
		public:
			virtual ~XlsBin2Tree();
	};

}

}

}

}
