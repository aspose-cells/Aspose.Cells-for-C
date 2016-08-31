#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBFRTSQREF() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
	class XlsbFRTSqref : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 FRTSqrefOption;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellArea*>> CellAreas;
			 XlsbFRTSqref();
		public:
			virtual ~XlsbFRTSqref();
	};

}

}

}

}
