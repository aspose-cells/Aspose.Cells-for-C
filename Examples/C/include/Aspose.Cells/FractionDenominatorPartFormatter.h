#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
//#include "System/StringHelperPal.h"
#include "AbstractCombinedNumberFormatter.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_FRACTIONDENOMINATORPARTFORMATTER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class CellsFormatterParams;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class FractionDenominatorPartFormatter : public Aspose::Cells::Internal::Format::AbstractCombinedNumberFormatter
	{
	protected:

			 virtual Aspose::Cells::System::Double GetDisplayValue(Aspose::Cells::System::Double dv);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> SplitFormattedValue(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> formattedNumber , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> splitPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> splitSepCount);
	private:

			void Init_Vars();
			void Init(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
	public:

			 FractionDenominatorPartFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::System::String> filteredPattern);
			 FractionDenominatorPartFormatter();
		public:
			virtual ~FractionDenominatorPartFormatter();
	};

}

}

}

}
