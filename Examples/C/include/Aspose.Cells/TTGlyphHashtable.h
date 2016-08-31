#pragma once
#include "System/Object.h"
#include "TTGlyph.h"
//#include "System/Boxing.h"
//#include "System/InvalidOperationException.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "System/Collections/Hashtable.h"
#define STATIC_TTGLYPHHASHTABLE() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class TTGlyphHashtable : public Aspose::Cells::System::Collections::Hashtable
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyph> mMissingGlyph;
	public:

			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyph> GetIndexObject(Aspose::Cells::System::Int32 charCode);
			void Set(Aspose::Cells::System::Int32 charCode , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyph> value);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyph> GetMissingGlyph();
			void SetMissingGlyph(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyph> value);
			void Add(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyph> glyph);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyph> FetchGlyph(Aspose::Cells::System::Int32 charCode);
			 TTGlyphHashtable();
		public:
			virtual ~TTGlyphHashtable();
	};

}

}

}

}

}
