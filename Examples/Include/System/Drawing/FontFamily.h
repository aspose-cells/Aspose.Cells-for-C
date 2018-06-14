#ifndef _SYSTEM_DRAWING_FONTFAMILY_H_
#define _SYSTEM_DRAWING_FONTFAMILY_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/IDisposable.h"
#include "System/IntPtr.h"
#include "System/Drawing/FontStyle.h"
#include "System/Drawing/Text/GenericFontFamilies.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Text {
					class FontCollection;
				}
			}
		}
	}
}

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Drawing {
				class ASPOSE_CELLS_API FontFamily : public Object
				{
				private:
					StringPtr _name;
					intrusive_ptr<IntPtr> nativeFontFamily;
				public:
					FontFamily(intrusive_ptr<IntPtr> fntfamily);
					FontFamily(StringPtr name);
					//FontFamily(StringPtr name, bool createDefaultOnFail);
					FontFamily(Text::GenericFontFamilies genericFamily);
					FontFamily(StringPtr name, intrusive_ptr<Text::FontCollection> fontCollection); 
					StringPtr GetName();
					static intrusive_ptr<FontFamily> GetGenericMonospace();
					static intrusive_ptr<FontFamily> GetGenericSansSerif();
					static intrusive_ptr<FontFamily> GetGenericSerif();

					void refreshName();
					intrusive_ptr<IntPtr> GetNativeObject();

					int GetCellAscent(FontStyle style);
					int GetCellDescent(FontStyle style);
					int GetLineSpacing(FontStyle style);
					int GetEmHeight(FontStyle style);
						
						
						

					bool Equals(ObjectPtr obj);
					StringPtr ToString();
					Int32 GetHashCode();
					~FontFamily();
					void Dispose();
				};
				typedef intrusive_ptr<FontFamily> FontFamilyPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_FONTFAMILY_H_