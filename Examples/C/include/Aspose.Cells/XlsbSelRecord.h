#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBSELRECORD() 

namespace Aspose {
namespace Cells {
class Selection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbSelRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbSelRecord();
			void SetSelection(intrusive_ptr<Aspose::Cells::Selection> selection);
		public:
			virtual ~XlsbSelRecord();
	};

}

}

}

}
