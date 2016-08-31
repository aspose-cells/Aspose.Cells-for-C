#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_FORMULAHELPER2() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class FormulaHelper2 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool IsString(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 pos);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateNonContiguousData(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> values , bool hasParen , bool validName , bool& isValid);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ParseCell(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::String> refString , bool externRef , bool validName , bool convertName , bool& isValid);
			 FormulaHelper2();
		public:
			virtual ~FormulaHelper2();
	};

}

}
