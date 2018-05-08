#ifndef _SYSTEM_DRAWING_TEXT_PRIVATEFONTCOLLECTION_H_
#define _SYSTEM_DRAWING_TEXT_PRIVATEFONTCOLLECTION_H_

#include "System/IntPtr.h"
#include "FontCollection.h"
#include "../GdipFuns.h"
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Text {
					class PrivateFontCollection : public FontCollection
					{
					public:
						PrivateFontCollection();
						//Because the reason of calling in GlyphsFont,we have to use "IntPtr" to replace "void *"
						void AddMemoryFont(intrusive_ptr<Aspose::Cells::System::IntPtr> memory, int length);
						~PrivateFontCollection(){};
						void Dispose(bool disposing);
					};
				}
			}
		}
	}
}
#endif
