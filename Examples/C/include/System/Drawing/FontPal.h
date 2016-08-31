#ifndef _SYSTEM_DRAWING_FONT_H_
#define _SYSTEM_DRAWING_FONT_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Single.h"
#include "System/Byte.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
//#include "System/Runtime/Serialization/ISerializable.h"
#include "System/Drawing/FontStyle.h"
#include "System/Drawing/FontFamily.h"
#include "System/Drawing/GraphicsUnit.h"

using namespace Aspose::Cells::System ;
//using namespace Aspose::Cells::System::Runtime::Serialization ;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Drawing {
				//class Graphics;
				class ASPOSE_CELLS_API FontPal : public Object, public ICloneable, public IDisposable //ISerializable
				{
				private:
					//private IntPtr nativeFont;
					float fontSize;
					FontStyle fontStyle;
					FontFamilyPtr fontFamily;
					GraphicsUnit fontUnit;
					Byte gdiCharSet;
					bool gdiVerticalFont;
					StringPtr systemFontName;
					StringPtr originalFontName;
					static const int LogFontCharSetOffset = 23;
					static const int LogFontNameOffset = 28;

					void InitVars();
					void Initialize(FontFamilyPtr family, float emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet, bool gdiVerticalFont);
					void Initialize(StringPtr familyName, float emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet, bool gdiVerticalFont);
					void SetFontFamily(FontFamilyPtr family);
					static bool IsVerticalName(StringPtr familyName);
					static StringPtr StripVerticalName(StringPtr familyName);
					void SetSystemFontName(StringPtr systemFontName);

				public:
					FontPal(intrusive_ptr<FontPal> prototype, FontStyle newStyle);
					FontPal(FontFamilyPtr family, Single emSize);
					FontPal(StringPtr familyName, Single emSize);
					FontPal(FontFamilyPtr family, Single emSize, FontStyle style);
					FontPal(FontFamilyPtr family, Single emSize, GraphicsUnit unit);
					FontPal(StringPtr familyName, Single emSize, FontStyle style);
					FontPal(StringPtr familyName, Single emSize, GraphicsUnit unit);
					FontPal(FontFamilyPtr family, Single emSize, FontStyle style, GraphicsUnit unit);
					FontPal(StringPtr familyName, Single emSize, FontStyle style, GraphicsUnit unit);
					FontPal(FontFamilyPtr family, Single emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet);
					FontPal(StringPtr familyName, Single emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet);
					FontPal(FontFamilyPtr family, Single emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet, bool gdiVerticalFont);
					FontPal(StringPtr familyName, Single emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet, bool gdiVerticalFont);
					~FontPal() {}
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

				public:
					StringPtr GetOriginalFontName();
					FontFamilyPtr GetFontFamily();
					bool GetBold();
					FontStyle GetStyle();
					Byte GetGdiCharSet();
					bool GetGdiVerticalFont();
					bool GetItalic();
					StringPtr GetName();
					bool GetStrikeout();
					bool GetUnderline();
					float GetSize();
					GraphicsUnit GetUnit();
					//float GetSizeInPoints();
					//Int32 Height();
					//float GetHeight();
					//float GetHeight(float dpi);
					//float GetHeight(Graphics* graphics);

				public:
					void Dispose();
					ObjectPtr Clone();
					bool Equals(ObjectPtr obj);
					StringPtr ToString();

				};
				typedef intrusive_ptr<FontPal> FontPalPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_FONT_H_