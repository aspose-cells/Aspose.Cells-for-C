#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_TTGLYPH() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class TTGlyph : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mCharCode;
			Aspose::Cells::System::Int32 mOldGlyphIndex;
			Aspose::Cells::System::Int32 mAdvanceWidth;
			Aspose::Cells::System::Int32 mLeftSideBearing;
	public:

			 TTGlyph(Aspose::Cells::System::Int32 charCode , Aspose::Cells::System::Int32 oldGlyphIndex , Aspose::Cells::System::Int32 advanceWidth , Aspose::Cells::System::Int32 leftSideBearing);
			Aspose::Cells::System::Int32 GetCharCode();
			Aspose::Cells::System::Int32 GetOldGlyphIndex();
			Aspose::Cells::System::Int32 GetAdvanceWidth();
			Aspose::Cells::System::Int32 GetLeftSideBearing();
			 TTGlyph();
		public:
			virtual ~TTGlyph();
	};

}

}

}

}

}
