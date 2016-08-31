#pragma once
//#include "System/UInt16.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/BitConverter.h"
#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XLSXFORMULARANGEHELPER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class WorksheetCollection;
class Range;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxFormulaRangeHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetRange(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 pos , bool methodB , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> names);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> ParseRefSheet(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 refIndex , Aspose::Cells::System::Int32& supbookIndex);
			static intrusive_ptr<Aspose::Cells::Range> ConvertFormulaToCellArea(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> SetRange(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::CellArea> ca);
			 XlsxFormulaRangeHelper();
		public:
			virtual ~XlsxFormulaRangeHelper();
	};

}

}

}

}
