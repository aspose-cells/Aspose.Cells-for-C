#pragma once
#include "System/Object.h"
#include "IIndexedColorProvider.h"
#include "System/Int32.h"
#include "System/Drawing/Color.h"
#define STATIC_INDEXEDCOLORPROVIDERPALETTE() 

namespace Aspose {
namespace Cells {
class Palette;
}
}

namespace Aspose {
namespace Cells {
	class IndexedColorProviderPalette : public Aspose::Cells::Internal::Format::IIndexedColorProvider
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Palette> m_Palette;
	public:

			 IndexedColorProviderPalette(intrusive_ptr<Aspose::Cells::Palette> palette);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor(Aspose::Cells::System::Int32 index);
			 IndexedColorProviderPalette();
		public:
			virtual ~IndexedColorProviderPalette();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
