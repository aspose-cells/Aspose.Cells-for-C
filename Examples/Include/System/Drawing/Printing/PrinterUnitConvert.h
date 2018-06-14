#ifndef _SYSTEM_DRAWING_PRINTING_UNITCONVERT_H_
#define _SYSTEM_DRAWING_PRINTING_UNITCONVERT_H_
#include "System/Object.h"
#include "System/Math.h"
#include "System/Exception.h"
using namespace Aspose::Cells::System;

enum PrinterUnit {
	Display = 0,
	HundredthsOfAMillimeter = 2,
	TenthsOfAMillimeter = 3,
	ThousandthsOfAnInch = 1
};

namespace Aspose {
	namespace Cells {
		namespace System {
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