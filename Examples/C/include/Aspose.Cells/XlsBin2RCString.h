#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/Math.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
#define STATIC_XLSBIN2RCSTRING() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
	class XlsBin2RCString : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> m_Node;
			Aspose::Cells::WorksheetCollection* m_Sheets;
			void GetName(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			Aspose::Cells::System::Int32 m_Length;
			Aspose::Cells::System::Int32 m_ArrayPos;
			void GetArrayData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetAttr(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void CreateColumnName(Aspose::Cells::System::Byte column , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> cellArea);
			intrusive_ptr<Aspose::Cells::System::String> GetCellArea(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> GetRefCell(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 rowPos , Aspose::Cells::System::Int32 columnPos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			intrusive_ptr<Aspose::Cells::System::String> GetRefCellArea(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			intrusive_ptr<Aspose::Cells::System::String> GetCell(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			void GetUserFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetVarFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetFixFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
	public:

			 XlsBin2RCString(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			 XlsBin2RCString();
		public:
			virtual ~XlsBin2RCString();
	};

}

}

}

}
