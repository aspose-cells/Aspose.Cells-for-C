#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#define STATIC_PANERECORD() 

namespace Aspose {
namespace Cells {
class PaneCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class PaneRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 PaneRecord();
			void SetPanes(intrusive_ptr<Aspose::Cells::PaneCollection> pane);
			void SetSplit(intrusive_ptr<Aspose::Cells::PaneCollection> pane);
		public:
			virtual ~PaneRecord();
	};

}

}

}
