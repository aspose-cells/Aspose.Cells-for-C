#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_SXFORMAT() 

namespace Aspose {
namespace Cells {
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFormatCollection;
class SxRule;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxFormat : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Pivot::SxFormatCollection* SxFormats;
	public:

			 SxFormat(intrusive_ptr<Aspose::Cells::Pivot::SxFormatCollection> sxFormats);
			Aspose::Cells::System::Byte RlType;
			Aspose::Cells::System::Int32 DxfId;
			intrusive_ptr<Aspose::Cells::Pivot::SxRule> Rule;
			void SetReadStyle(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetReadStyle();
			 SxFormat();
		public:
			virtual ~SxFormat();
	};

}

}

}
