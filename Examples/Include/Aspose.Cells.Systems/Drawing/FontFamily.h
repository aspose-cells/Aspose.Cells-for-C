#ifndef _SYSTEM_DRAWING_FONTFAMILY_H_
#define _SYSTEM_DRAWING_FONTFAMILY_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/FontStyle.h"
#include "Aspose.Cells.Systems/Drawing/Text/GenericFontFamilies.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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
		namespace Systems {
			namespace Drawing {
				class ASPOSE_CELLS_API FontFamily : public Object
				{
				private:
					StringPtr _name;
					intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativeFontFamily;
				public:
					FontFamily(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> fntfamily);
					FontFamily(StringPtr name);
					//FontFamily(StringPtr name, bool createDefaultOnFail);
					FontFamily(Text::GenericFontFamilies genericFamily);
					FontFamily(StringPtr name, intrusive_ptr<Text::FontCollection> fontCollection); 
					StringPtr GetName();
					static intrusive_ptr<FontFamily> GetGenericMonospace();
					static intrusive_ptr<FontFamily> GetGenericSansSerif();
					static intrusive_ptr<FontFamily> GetGenericSerif();

					void refreshName();
					intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetNativeObject();

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