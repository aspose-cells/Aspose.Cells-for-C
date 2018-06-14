#ifndef _SYSTEM_DRAWING_IMAGING_COLOR_PALETTE_H_
#define _SYSTEM_DRAWING_IMAGING_COLOR_PALETTE_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Drawing/Color.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					struct GdiColorPalette
					{
						Int32 Flags;             // Palette flags
						Int32 Count;             // Number of color entries    				
					};

					class ASPOSE_CELLS_API ColorPalette : public Object
					{
						// 0x1: the color values in the array contain alpha information
						// 0x2: the color values are grayscale values.
						// 0x4: the colors in the array are halftone values.
					private:
						Int32 flags;
						intrusive_ptr<Array1D<Color*>> entries;

					public:
						ColorPalette();
						ColorPalette(Int32 flags, intrusive_ptr<Array1D<Color*>> colors);
						virtual ~ColorPalette();

						intrusive_ptr<Array1D<Color*>> GetEntries();
						Int32 GetFlags();

						void* getGDIPalette();
						void setFromGDIPalette(void* palette);
					};
				}
			}
		}
	}
}
#endif