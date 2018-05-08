#ifndef _SYSTEM_DRAWING_KNOWNCOLORTABLE_H_
#define _SYSTEM_DRAWING_KNOWNCOLORTABLE_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Drawing/KnownColor.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				class Color;

				class ASPOSE_CELLS_API KnownColorTable : public Object
				{
				private:
					static const int AlphaShift = 24;
					static const int RedShift = 16;
					static const int GreenShift = 8;
					static const int BlueShift = 0;
					static const int Win32RedShift = 0;
					static const int Win32GreenShift = 8;
					static const int Win32BlueShift = 16;
					static intrusive_ptr<Array1D<int>> colorTable;
					static int colorTableLen;
					static intrusive_ptr<Array1D<String*>> colorNameTable;
					static int colorNameTableLen;

					static void EnsureColorTable();
					static void InitColorTable();
					static void EnsureColorNameTable();
					static void InitColorNameTable();
					static int SystemColorToArgb(int index);
					static int Encode(int alpha, int red, int green, int blue);
					static int FromWin32Value(int value);
					static void UpdateSystemColors(intrusive_ptr<Array1D<int>> colorTable);
				public:
					static intrusive_ptr<Color> ArgbToKnownColor(int targetARGB);
					static int KnownColorToArgb(KnownColor color);
					static StringPtr KnownColorToName(KnownColor color);


				};
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_KNOWNCOLORTABLE_H_