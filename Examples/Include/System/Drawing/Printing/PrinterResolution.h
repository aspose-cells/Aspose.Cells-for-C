#ifndef _SYSTEM_DRAWING_PRINTING_PRINTERRES_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTERRES_H_
#include "System/Object.h"
using namespace Aspose::Cells::System;
enum PrinterResolutionKind {
	Custom = 0,
	Draft = -1,
	High = -4,
	Low = -2,
	Medium = -3
};
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class ASPOSE_CELLS_API PrinterResolution : public Object
					{
					private:
						PrinterResolutionKind kind = PrinterResolutionKind::Custom;
						int x;
						int y;
					public:
						PrinterResolution(int x, int y, PrinterResolutionKind kind)
						{
							this->x = x;
							this->y = y;
							this->kind = kind;
						}
						int GetX()
						{
							return x;
						}
						void SetX(int value)
						{
							x = value;
						}

						int GetY()
						{
							return y;
						}

						void SetY(int value)
						{
							y = value;
						}

						PrinterResolutionKind GetKind()
						{
							return kind;
						}
						void SetKind(PrinterResolutionKind value)
						{
							kind = value;
						}
						
					};
				}
			}
		}
	}
}
#endif