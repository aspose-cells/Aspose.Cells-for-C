#ifndef _SYSTEM_DRAWING_KNOWN_COLORS_H_
#define _SYSTEM_DRAWING_KNOWN_COLORS_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Drawing/KnownColor.h"
namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {

				class ASPOSE_CELLS_API KnownColors : public Object
				{
				public:
					static uint32_t ArgbValues[];
					static intrusive_ptr<Color> FromKnownColor(KnownColor kc);
				};
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_KNOWN_COLORS_H_