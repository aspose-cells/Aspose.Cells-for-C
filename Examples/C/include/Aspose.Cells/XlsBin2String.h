#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Exception.h"
//#include "System/Math.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/GC.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
#include "System/Byte.h"
//#include "System/Double.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Array2D.h"
#define STATIC_XLSBIN2STRING() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Cell;
class FormulaTree;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
	class XlsBin2String : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExportedSupbooks;
			bool IsSavingXlsx();
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> m_Node;
			Aspose::Cells::WorksheetCollection* m_Sheets;
			void GetName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			Aspose::Cells::System::Int32 m_Length;
			Aspose::Cells::System::Int32 m_ArrayPos;
			intrusive_ptr<Aspose::Cells::System::String> GetExtend(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , bool isPivotSource);
			void GetArrayData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			Aspose::Cells::System::Int32 GetAttr(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			intrusive_ptr<Aspose::Cells::System::String> GetCellArea(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> GetRefCell(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			intrusive_ptr<Aspose::Cells::System::String> GetCell(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			void GetUserFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetFunction(intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::System::Int32 paramCount , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetVarFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetFixFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
	public:

			void Dispose();
			Aspose::Cells::System::Int32 ProcessStation;
			void InitExported2007();
			void ClearExported2007();
			 XlsBin2String(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::Cell> cell;
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent , bool isPivotSource);
			void ConvertFormulaDataToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> formula , intrusive_ptr<Aspose::Cells::FormulaTree> notation , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			 XlsBin2String();
		public:
			virtual ~XlsBin2String();
	};

}

}

}

}
