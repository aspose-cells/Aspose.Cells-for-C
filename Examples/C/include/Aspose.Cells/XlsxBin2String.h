#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Exception.h"
//#include "System/Math.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/Array2D.h"
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
#define STATIC_XLSXBIN2STRING() 

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
namespace Formula2007 {
	class XlsxBin2String : public Aspose::Cells::System::Object
	{
	protected:

			Aspose::Cells::System::Int32 m_ArrayPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data;
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExportedSupbooks;
			bool IsSavingXlsx();
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> m_Node;
			intrusive_ptr<Aspose::Cells::Cell> cell;
			Aspose::Cells::System::Int32 m_Length;
			intrusive_ptr<Aspose::Cells::System::String> GetExtend(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn , bool isPivotSource);
			void GetArrayData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			Aspose::Cells::System::Int32 GetAttr(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetCellArea(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			void GetRefCellArea(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			void GetRefCell(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> result , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 currentRow , Aspose::Cells::System::Int32 currentColumn);
			void GetCell(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			void GetUserFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetFunction(intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::System::Int32 paramCount , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetVarFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
			void GetFixFunction(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> posList);
	public:

			void Dispose();
			Aspose::Cells::System::Int32 ProcessStation;
			static bool IsRelativeRow(Aspose::Cells::System::Byte option);
			static bool IsRelativeColumn(Aspose::Cells::System::Byte option);
			void InitExported2007();
			void ClearExported2007();
			Aspose::Cells::WorksheetCollection* m_Sheets;
			 XlsxBin2String(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 virtual void GetExName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			 virtual void GetName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(intrusive_ptr<Aspose::Cells::Cell> cell);
			void ConvertFormulaDataToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> formula , intrusive_ptr<Aspose::Cells::FormulaTree> notation , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos0 , Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data0 , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent , bool isPivotSource);
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetSheetName(Aspose::Cells::System::Int32 pos);
			 XlsxBin2String();
		public:
			virtual ~XlsxBin2String();
	};

}

}

}

}
