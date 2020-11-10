#ifndef _SYSTEM_DRAWING_IMAGING_COLORMAP_H_
#define _SYSTEM_DRAWING_IMAGING_COLORMAP_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Imaging {
					struct  GdiColorMap
					{
						Int32 from;
						Int32 to;
					};

					class ASPOSE_CELLS_API ColorMap : public Object
					{
					private:
						intrusive_ptr<Color> newColor;
						intrusive_ptr<Color> oldColor;

					public:
						ColorMap() {
						}

						virtual ~ColorMap() {
						}

						intrusive_ptr<Color> GetNewColor() {
							return newColor;
						}

						void SetNewColor(intrusive_ptr<Color> color) {
							newColor = color;
						}

						intrusive_ptr<Color> GetOldColor() {
							return oldColor;
						}

						void SetOldColor(intrusive_ptr<Color> color) {
							oldColor = color;
						}
					};

				}
			}
		}

	}
}
#endif
