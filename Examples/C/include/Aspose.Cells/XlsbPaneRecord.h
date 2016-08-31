#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Byte.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBPANERECORD() 

namespace Aspose {
namespace Cells {
class PaneCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbPaneRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbPaneRecord();
			void SetPane(intrusive_ptr<Aspose::Cells::PaneCollection> pane , bool isFrozen);
		public:
			virtual ~XlsbPaneRecord();
	};

}

}

}

}
