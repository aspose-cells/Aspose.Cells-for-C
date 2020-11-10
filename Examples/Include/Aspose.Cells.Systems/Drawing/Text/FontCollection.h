#ifndef _SYSTEM_DRAWING_TEXT_FONTCOLLECTION_H_
#define _SYSTEM_DRAWING_TEXT_FONTCOLLECTION_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "../FontFamily.h"
#include "../GdipFuns.h"
using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Text {
					class FontFamily;
					class FontCollection : public Object 
					{
					public:
						GpFontCollection* nativeFontCollection;
						GpFontFamily** result;
					public:
						FontCollection()
						{
							nativeFontCollection = NULL;
							result = NULL;
						}

						intrusive_ptr<Array1D<Aspose::Cells::Systems::Drawing::FontFamily*>> Families();
						void Dispose()
						{
							Dispose(true);
						}
						static void Dispose(bool disposing)
						{
						}
						virtual ~FontCollection()
						{
							if (result != NULL)
							{
								delete []result;
								result = NULL;
							}
							Dispose(false);
						}
					};
				}
			}
		}
	}
}
#endif
