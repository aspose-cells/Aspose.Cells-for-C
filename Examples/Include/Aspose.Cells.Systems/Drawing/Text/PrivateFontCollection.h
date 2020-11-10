#ifndef _SYSTEM_DRAWING_TEXT_PRIVATEFONTCOLLECTION_H_
#define _SYSTEM_DRAWING_TEXT_PRIVATEFONTCOLLECTION_H_

#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "FontCollection.h"
#include "../GdipFuns.h"
namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Text {
					class PrivateFontCollection : public FontCollection
					{
					public:
						PrivateFontCollection();
						//Because the reason of calling in GlyphsFont,we have to use "IntegerPtr" to replace "void *"
						void AddMemoryFont(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> memory, int length);
						~PrivateFontCollection(){};
						void Dispose(bool disposing);
					};
				}
			}
		}
	}
}
#endif
