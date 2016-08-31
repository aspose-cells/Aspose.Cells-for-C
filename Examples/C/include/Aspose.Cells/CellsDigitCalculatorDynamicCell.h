#pragma once
#include "System/Object.h"
#include "System/String.h"
//#include "System/Drawing/FontStyle.h"
#include "CellsDigitCalculatorDynamic.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_CELLSDIGITCALCULATORDYNAMICCELL() 

namespace Aspose {
namespace Cells {
class Cells;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsDigitCalculatorDynamicCell : public Aspose::Cells::Internal::Format::CellsDigitCalculatorDynamic
	{
	protected:

			 virtual Aspose::Cells::System::Int32 GetMaxDigits(intrusive_ptr<Aspose::Cells::System::String> append);
			 virtual bool IsDefaultFont();
			 virtual void InitDefaultFont();
			 virtual void InitCurrentFont();
	private:

			void Init_Vars();
			Aspose::Cells::Cells* m_Cells;
			Aspose::Cells::System::Int32 m_Row;
			Aspose::Cells::System::Int32 m_Column;
			intrusive_ptr<Aspose::Cells::Style> m_Style;
			bool m_IsDefaultStyle;
			Aspose::Cells::System::Double m_Width;
	public:

			 CellsDigitCalculatorDynamicCell(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::Style> style , bool isDefaultStyle);
			 virtual Aspose::Cells::System::Double GetWidth();
			 CellsDigitCalculatorDynamicCell();
		public:
			virtual ~CellsDigitCalculatorDynamicCell();
	};

}

}

}

}
