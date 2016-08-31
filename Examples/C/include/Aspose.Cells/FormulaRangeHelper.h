#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "FormulaOwnerType.h"
#include "System/Array1D.h"
#define STATIC_FORMULARANGEHELPER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class CellArea;
class Worksheet;
class Range;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FormulaRangeHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> ToRange(intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::FormulaModel::FormulaOwnerType ownerType , intrusive_ptr<Aspose::Cells::System::Object> owner , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 endPos , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool convert);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetRange(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 pos , bool methodB , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::Range> ConvertFormulaToCellArea(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> SetRange(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::CellArea> ca);
			 FormulaRangeHelper();
		public:
			virtual ~FormulaRangeHelper();
	};

}

}

}
