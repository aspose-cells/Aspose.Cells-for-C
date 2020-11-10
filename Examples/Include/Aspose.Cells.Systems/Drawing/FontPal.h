#ifndef _SYSTEM_DRAWING_FONT_H_
#define _SYSTEM_DRAWING_FONT_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/FontStyle.h"
#include "Aspose.Cells.Systems/Drawing/GraphicsUnit.h"
#include "Aspose.Cells.Systems/Drawing/FontFamily.h"

using namespace Aspose::Cells::Systems;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace Drawing {
				class Graphics;
				class ASPOSE_CELLS_API FontPal : public Object, public ICloneable, public IDisposable 
				{
				private:
					intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> fontObject;
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

					FontPal(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> newFontObject, StringPtr familyName, FontStyle style, Single size);
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
					static intrusive_ptr<FontPal> FromHfont(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> hfont);
					intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ToHfont();
					intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetNativeObject();


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