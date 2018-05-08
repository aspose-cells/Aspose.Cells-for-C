#ifndef _SYSTEM_DRAWING_BRUSHES_H_
#define _SYSTEM_DRAWING_BRUSHES_H_
#include "System/Object.h"
namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing {
				class Brush;
				class SolidBrush;
				class ASPOSE_CELLS_API Brushes : public Object
				{
					private:
						static intrusive_ptr<SolidBrush> black;
					public:
						static intrusive_ptr<Brush> GetBlack();
				};
			}
		}
	}
}
#endif