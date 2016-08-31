#pragma once
//#include "System/Int64.h"
//#include "System/UInt16.h"
#include "TTFont.h"
//#include "System/Int16.h"
//#include "System/IO/Stream.h"
//#include "System/Char.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_SIMTTFONT() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class SimTTFont : public Aspose::Cells::Internal::Rendering::TrueType::TTFont
	{
	private:

			void Init_Vars();
			 SimTTFont();
			static intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> Resource;
			void BuildGlyphs();
			void BuildDeviceHorizontalMetrics();
			void buildHorizontalMetrics();
			static intrusive_ptr<Aspose::Cells::System::Object> SynObject;
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> mInstance;
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> GetInstance();
		public:
			virtual ~SimTTFont();
	};

}

}

}

}

}
