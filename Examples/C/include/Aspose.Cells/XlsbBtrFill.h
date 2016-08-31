#pragma once
#include "InternalColor.h"
#include "BackgroundType.h"
#include "System/Object.h"
#define STATIC_XLSBBTRFILL() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataCellGradientFill;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class XlsbBtrFill : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::InternalColor> ForeColor;
			intrusive_ptr<Aspose::Cells::InternalColor> BgColor;
			Aspose::Cells::BackgroundType Pattern;
			intrusive_ptr<Aspose::Cells::OpenXML::DataCellGradientFill> GradientFill;
			 XlsbBtrFill();
		public:
			virtual ~XlsbBtrFill();
	};

}

}

}

}
