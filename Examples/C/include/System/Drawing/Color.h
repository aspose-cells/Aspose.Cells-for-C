#ifndef _SYSTEM_DRAWING_COLOR_H_
#define _SYSTEM_DRAWING_COLOR_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Byte.h"
#include "System/Int64.h"
#include "System/Drawing/KnownColor.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Drawing {

				class ASPOSE_CELLS_API Color : public Object
				{
					private:
						static short StateKnownColorValid;
						static short StateARGBValueValid;
						static short StateValueMask;
						static short StateNameValid;
						static Int64 NotDefinedValue;
						
						StringPtr name;
						Int64 value;
						short knownColor;
						short state;
						static const int ARGBAlphaShift = 24;
						static const int ARGBRedShift = 16;
						static const int ARGBGreenShift = 8;
						static const int ARGBBlueShift = 0;

						Int64 GetValue();
					private:
						
						Color(Int64 value, short state, StringPtr name, KnownColor knownColor);

						static void CheckByte(int value, StringPtr name);
						static Int64 MakeArgb(Byte alpha, Byte red, Byte green, Byte blue);
					public:
						Color();
						static intrusive_ptr<Color> Empty;

						Color(KnownColor knownColor);
						static StringPtr KnownColorToString(KnownColor val);
						static intrusive_ptr<Color> FromKnownColor(KnownColor color);
						static intrusive_ptr<Color> FromName(StringPtr name);

						bool Equals(ObjectPtr obj);
						StringPtr ToString();
						StringPtr GetName();
						bool IsKnownColor();
						bool IsSystemColor();
						bool IsEmpty();
						Byte GetA();
						Byte GetB();
						Byte GetG();
						Byte GetR();
						Int32 ToArgb();

						static intrusive_ptr<Color> GetAliceBlue();
						static intrusive_ptr<Color> GetBlack();
						static intrusive_ptr<Color> GetRed();
						static intrusive_ptr<Color> GetYellow();
						static intrusive_ptr<Color> GetBlue();
						static intrusive_ptr<Color> GetWhite();
						static intrusive_ptr<Color> GetGreen();
						static intrusive_ptr<Color> GetCyan();
						static intrusive_ptr<Color> GetMagenta();
						static intrusive_ptr<Color> GetLightGreen();
						static intrusive_ptr<Color> GetLightGray();
						static intrusive_ptr<Color> GetOrange();
						static intrusive_ptr<Color> GetPlum();
						static intrusive_ptr<Color> GetGold();
						static intrusive_ptr<Color> GetTransparent();
						static intrusive_ptr<Color> GetBisque();
						static intrusive_ptr<Color> GetLightBlue();
						static intrusive_ptr<Color> GetPink();
						static intrusive_ptr<Color> GetLightCoral();
						static intrusive_ptr<Color> GetIndigo();
						static intrusive_ptr<Color> GetGray();
						
						static intrusive_ptr<Color> FromArgb(Int32 argb);
						static intrusive_ptr<Color> FromArgb(Int32 alpha, intrusive_ptr<Color> baseColor);
						static intrusive_ptr<Color> FromArgb(Int32 red, Int32 green, Int32 blue);
						static intrusive_ptr<Color> FromArgb(Int32 alpha, Int32 red, Int32 green, Int32 blue);

				};
				typedef intrusive_ptr<Color> ColorPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_COLOR_H_