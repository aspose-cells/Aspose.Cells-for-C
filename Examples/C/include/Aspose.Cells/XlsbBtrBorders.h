#pragma once
#include "System/Object.h"
#define STATIC_XLSBBTRBORDERS() 

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
class XlsbBtrBorder;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class XlsbBtrBorders : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBtrBorder> Top;
			intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBtrBorder> Left;
			intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBtrBorder> Bottom;
			intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBtrBorder> Right;
			intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::XlsbBtrBorder> Diagonal;
			bool IsDiagonalDown;
			bool IsDiagonalUp;
			 XlsbBtrBorders();
		public:
			virtual ~XlsbBtrBorders();
	};

}

}

}

}
