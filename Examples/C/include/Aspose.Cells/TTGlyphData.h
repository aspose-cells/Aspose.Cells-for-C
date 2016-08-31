#pragma once
#include "System/Int32.h"
#include "System/Object.h"
//#include "System/Single.h"
#define STATIC_TTGLYPHDATA() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class TTGlyphPointCollection;
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
	class TTGlyphData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphPointCollection> mPoints;
			 static const Aspose::Cells::System::Int32 EMSquareSize;
	public:

			 TTGlyphData(Aspose::Cells::System::Int32 EMHeight);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphPointCollection> GetPoints();
			 TTGlyphData();
		public:
			virtual ~TTGlyphData();
	};

}

}

}

}

}
