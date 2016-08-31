#pragma once
#include "System/Object.h"
#include "RawCellValueType.h"
#define STATIC_ICALCULATIONVALIDATOR() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
#ifdef WIN32

	class ASPOSE_CELLS_API ICalculationValidator : public Aspose::Cells::System::Object
#else	class ICalculationValidator : public Aspose::Cells::System::Object
#endif


	{
	public:

			virtual bool Fail(Aspose::Cells::CellsSs::RawCellValueType tOrig , intrusive_ptr<Aspose::Cells::System::Object> vOrig , Aspose::Cells::CellsSs::RawCellValueType tNew , intrusive_ptr<Aspose::Cells::System::Object> vNew) = 0;
		public:
	};

}

}

}
