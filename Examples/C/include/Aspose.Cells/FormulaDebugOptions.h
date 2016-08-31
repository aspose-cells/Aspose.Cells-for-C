#pragma once
#include "System/Text/StringBuilder.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "CalculationValidatorDefault.h"
#include "System/String.h"
#include "PalDebugUtil.h"
#define STATIC_FORMULADEBUGOPTIONS() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class ICalculationValidator;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
#ifdef WIN32

	class ASPOSE_CELLS_API FormulaDebugOptions : public Aspose::Cells::System::Object
#else	class FormulaDebugOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			bool Debug;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> TraceInfoHeader;
			intrusive_ptr<Aspose::Cells::FormulaModel::ICalculationValidator> TraceChecker;
			bool TraceSpec;
			bool Trace;
			void TraceCalculation();
			void TraceCalculation(Aspose::Cells::System::Int32 sheet , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void TraceCalculation(Aspose::Cells::System::Int32 sheet , intrusive_ptr<Aspose::Cells::System::String> cell);
			Aspose::Cells::System::Int32 TraceSheet;
			Aspose::Cells::System::Int32 TraceRow;
			Aspose::Cells::System::Int32 TraceColumn;
			 FormulaDebugOptions();
		public:
			virtual ~FormulaDebugOptions();
	};

}

}

}
