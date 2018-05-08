#ifndef _SYSTEM_DRAWING_FONT_H_
#define _SYSTEM_DRAWING_FONT_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Single.h"
#include "System/Byte.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/IntPtr.h"
#include "System/Drawing/FontStyle.h"
#include "System/Drawing/GraphicsUnit.h"
#include "System/Drawing/FontFamily.h"

using namespace Aspose::Cells::System;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Drawing {
				class Graphics;
				class ASPOSE_CELLS_API FontPal : public Object, public ICloneable, public IDisposable 
				{
				private:
					intrusive_ptr<IntPtr> fontObject;
					StringPtr systemFontName;
					StringPtr originalFontName;
					Single _size;
					ObjectPtr olf;
					
					static const Byte DefaultCharSet;
					static int CharSetOffset;

					StringPtr _name;
					FontFamilyPtr _fontFamily;
					GraphicsUnit _unit;
					FontStyle _style;
					Byte _gdiCharSet;
					bool _gdiVerticalFont;
					Single _sizeInPoints;
					bool _bold;
					bool _italic;
					bool _strikeout;
					bool _underline;
					int _hashCode;

					void InitVars();
					void CreateFontPal(StringPtr familyName, Single emSize, FontStyle style, GraphicsUnit unit, Byte charSet, bool isVertical);
					void setProperties(intrusive_ptr<FontFamily> family, Single emSize, FontStyle style, GraphicsUnit unit, Byte charSet, bool isVertical);
					void unitConversion(GraphicsUnit fromUnit, GraphicsUnit toUnit, Single nSrc, Single &nTrg);
					
				public:
					FontPal(intrusive_ptr<FontPal> prototype, FontStyle newStyle);
					FontPal(FontFamilyPtr family, Single emSize, GraphicsUnit unit);
					FontPal(StringPtr familyName, Single emSize, GraphicsUnit unit);
					FontPal(FontFamilyPtr family, Single emSize);
					FontPal(FontFamilyPtr family, Single emSize, FontStyle style);
					FontPal(FontFamilyPtr family, Single emSize, FontStyle style, GraphicsUnit unit);
					FontPal(FontFamilyPtr family, Single emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet);
					FontPal(FontFamilyPtr family, Single emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet, bool gdiVerticalFont);
					
					FontPal(StringPtr familyName, Single emSize);
					FontPal(StringPtr familyName, Single emSize, FontStyle style);
					FontPal(StringPtr familyName, Single emSize, FontStyle style, GraphicsUnit unit);
					FontPal(StringPtr familyName, Single emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet);
					FontPal(StringPtr familyName, Single emSize, FontStyle style, GraphicsUnit unit, Byte gdiCharSet, bool gdiVerticalFont);

					FontPal(intrusive_ptr<IntPtr> newFontObject, StringPtr familyName, FontStyle style, Single size);
					FontPal(StringPtr familyName, Single emSize, StringPtr systemName);
					
					~FontPal();
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

				public:
					FontFamilyPtr GetFontFamily();
					bool GetBold();
					Byte GetGdiCharSet();
					bool GetGdiVerticalFont();
					bool GetItalic();
					StringPtr GetName();
					Single GetSize();
					Single GetSizeInPoints();
					bool GetStrikeout();
					FontStyle GetStyle();
					StringPtr GetSystemFontName();
					StringPtr GetOriginalFontName();
					bool GetUnderline();
					GraphicsUnit GetUnit();

					int Height();
					Single GetHeight();
					Single GetHeight(Single dpi);
					Single GetHeight(intrusive_ptr<Graphics> graphics);
					static intrusive_ptr<FontPal> FromHfont(intrusive_ptr<IntPtr> hfont);
					intrusive_ptr<IntPtr> ToHfont();
					intrusive_ptr<IntPtr> GetNativeObject();


				public:
					virtual void Dispose();
					virtual ObjectPtr Clone();
					virtual bool Equals(ObjectPtr obj);
					virtual StringPtr ToString();
					virtual Int32 GetHashCode();

				};
				typedef intrusive_ptr<FontPal> FontPalPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_FONT_H_