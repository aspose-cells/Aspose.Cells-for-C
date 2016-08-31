#pragma once
#include "InternalColor.h"
#include "System/Object.h"
#include "CellBorderType.h"
#define STATIC_XLSBBTRBORDER() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class XlsbBtrBorder : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::InternalColor> InternalColor;
			Aspose::Cells::CellBorderType LineStyle;
			 XlsbBtrBorder();
		public:
			virtual ~XlsbBtrBorder();
	};

}

}

}

}
