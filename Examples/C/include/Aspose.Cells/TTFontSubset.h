#pragma once
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
//#include "System/Char.h"
#include "SortedIntegerList.h"
#include "System/Int32.h"
//#include "System/Exception.h"
#define STATIC_TTFONTSUBSET() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class TTFont;
}
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class TTFontSubset : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void CreateFullMapping();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> mCharsToNewGlyphIndexes;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> mOldToNewGlyphIndexes;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> mTrueTypeFont;
	public:

			 TTFontSubset(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> font , bool isFullEmbedding);
			Aspose::Cells::System::Int32 CharToGlyphIndex(Aspose::Cells::System::Int32 c);
			void WriteToStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream , bool isMakeValidTtf);
			void WriteToStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream , bool isMakeValidTtf , bool isFullEmbedding);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetGlyphsDataSubset();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> GetCharsToNewGlyphIndexes();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> GetTTFont();
			 TTFontSubset();
		public:
			virtual ~TTFontSubset();
	};

}

}

}

}
