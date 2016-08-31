#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Collections/SortedList.h"
#include "System/Array1D.h"
#define STATIC_HPAGEBREAKRECORD() 

namespace Aspose {
namespace Cells {
class HorizontalPageBreakCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class HPageBreakRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 HPageBreakRecord();
			void AddHPageBreaks(intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hPageBreaks);
		public:
			virtual ~HPageBreakRecord();
	};

}

}

}
