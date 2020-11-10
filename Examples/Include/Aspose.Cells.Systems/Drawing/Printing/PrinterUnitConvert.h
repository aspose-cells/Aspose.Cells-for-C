#ifndef _SYSTEM_DRAWING_PRINTING_UNITCONVERT_H_
#define _SYSTEM_DRAWING_PRINTING_UNITCONVERT_H_
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Math.h"
#include "Aspose.Cells.Systems/Exception.h"
using namespace Aspose::Cells::Systems;

enum PrinterUnit {
	Display = 0,
	HundredthsOfAMillimeter = 2,
	TenthsOfAMillimeter = 3,
	ThousandthsOfAnInch = 1
};

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class ASPOSE_CELLS_API PrinterUnitConvert : public Object
					{
					private:
						PrinterUnitConvert()
						{}
					public:
						static int Convert(int value,PrinterUnit fromUnit,PrinterUnit toUnit);
						static double Convert(double value,PrinterUnit fromUnit,PrinterUnit toUnit);
					};
				}
			}
		}
	}
}
#endif