#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Drawing/FontStyle.h"
//#include "System/NullReferenceException.h"
#include "System/Int32.h"
#define STATIC_TTFONTFAMILY() 

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
namespace TrueType {
	class TTFontFamily : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> mFamilyName;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> mFonts;
	public:

			 TTFontFamily(intrusive_ptr<Aspose::Cells::System::String> familyName);
			intrusive_ptr<Aspose::Cells::System::String> GetFamilyName();
			Aspose::Cells::System::Int32 GetCount();
			void Add(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> font);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> GetFont(Aspose::Cells::System::Drawing::FontStyle style , bool isExactStyle);
			 TTFontFamily();
		public:
			virtual ~TTFontFamily();
	};

}

}

}

}

}
