#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "System/String.h"
#include "System/Char.h"
#include "NumberPatternType.h"
#include "AbstractCombinedNumberFormatter.h"
#include "System/Double.h"
#include "NumberCategoryType.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_CELLSSCIENTIFICFORMATTER() 

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
	class CellsScientificFormatter : public Aspose::Cells::Internal::Format::AbstractCombinedNumberFormatter
	{
	protected:

			 virtual Aspose::Cells::System::Double GetDisplayValue(Aspose::Cells::System::Double dv);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> SplitFormattedValue(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> formattedNumber , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> splitPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> splitSepCount);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_IntPart;
			Aspose::Cells::System::Int32 m_Precision;
			bool m_HasPlus;
			void Init(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
	public:

			 CellsScientificFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParam , intrusive_ptr<Aspose::Cells::System::String> filteredPattern);
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			 CellsScientificFormatter();
		public:
			virtual ~CellsScientificFormatter();
	};

}

}

}

}
