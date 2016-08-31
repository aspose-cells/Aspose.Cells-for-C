#pragma once
#include "System/Object.h"
#define STATIC_XLSBBRTDXF() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Style;
class Font;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class XlsbBrtDXF : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			bool IsRangeBorder;
			intrusive_ptr<Aspose::Cells::Style> Style;
			 XlsbBrtDXF(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::Font> GetFont();
			 XlsbBrtDXF();
		public:
			virtual ~XlsbBrtDXF();
	};

}

}

}

}
